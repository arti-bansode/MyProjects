 
// win 32 HEADER
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

//openGL related header files
#include<gl/GL.h>

//custom header files
#include"OGL.h"

// OpenGL related libraries
#pragma comment(lib,"opengl32.lib") //lib file linkingla dene

// micros
#define WIN_WIDTH 800
#define WIN_HEIGHT 600

//global function declarations
LRESULT CALLBACK wndProc(HWND, UINT, WPARAM, LPARAM);

// gloabal variable declarations
BOOL gbFullScreen = FALSE;
HWND ghwnd = NULL;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev;

//variable related with file I/O

char gszLogFileName[] = "Log.txt";
FILE *gpFile = NULL;

// active window related variable
BOOL gbActiveWindow = FALSE;

// exit key press related
BOOL gbEscapeKeyIsPressed = FALSE;

//OpenGL related global variables
HDC ghdc = NULL;
HGLRC ghrc = NULL;

// entry point function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{

	//local function declarations
	int initialize(void);
	void display(void);
	void update(void);
	void uninitialize(void);

	// variable declaration
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR6");
	BOOL bDone = FALSE;


	// code
	// create log file
	
	gpFile = fopen(gszLogFileName, "w");
	if (gpFile == NULL)
	{
		MessageBox(NULL, TEXT("LogCreationFailed"), TEXT("Error"), MB_OK);
		exit(0);
	}
	else
	{ 
		fprintf(gpFile, "Program Started Successfully\n");
	}

	// window class initialisation
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = wndProc;
	wndclass.hInstance = hInstance;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));


	// registration of window class
	RegisterClassEx(&wndclass);

	// create window
	hwnd = CreateWindowEx(WS_EX_APPWINDOW,szAppName, TEXT("Arti Amol Bansode"), WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, WIN_WIDTH, WIN_HEIGHT, NULL, NULL, hInstance, NULL);

	ghwnd = hwnd;

	// show window
	ShowWindow(hwnd, iCmdShow);

	// paint background of window
	UpdateWindow(hwnd);

	

	//initialize
	int result = initialize();
	if (result != 0)
	{
		fprintf(gpFile, "Initialization failed\n");
		DestroyWindow(hwnd);
		hwnd = NULL;

	}
	else
	{
		fprintf(gpFile, "Initialization completed succefully\n");
	}
	// set this window as forgroung and active window
	SetForegroundWindow(hwnd);
	SetFocus(hwnd);

	// game loop
	while (bDone == FALSE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				bDone = TRUE;
			}
			else
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);

			}

		}
		else
		{
			if (gbActiveWindow == TRUE) 
			{
				if (gbEscapeKeyIsPressed == TRUE)
				{
					bDone = TRUE;
				}

				// render
				display();

				//update
				update();
			}
			
		}
	}
	//uninitialize
	uninitialize();

	return((int)msg.wParam);
}
// callback function
LRESULT CALLBACK wndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	// local function declarations
	void toggleFullScreen(void);

	void resize(int, int);
	void uninitialize(void);

	//code
	switch (iMsg)
	{
	case WM_CREATE:
		ZeroMemory((void*)&wpPrev, sizeof(WINDOWPLACEMENT));
		wpPrev.length = sizeof(WINDOWPLACEMENT);
		break;

	case WM_SETFOCUS:
		gbActiveWindow = TRUE;
		break;

	case WM_KILLFOCUS:
		gbActiveWindow = FALSE;
		break;

	case WM_ERASEBKGND:
		return(0);

	case WM_SIZE:
		resize(LOWORD(lParam), HIWORD(lParam));
		break;

	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_ESCAPE:
			gbEscapeKeyIsPressed = TRUE;
			break;

		default:
			break;
		}

		break;

	case WM_CHAR:
		switch (wParam)
		{
		case 'F':
			//MessageBox(hwnd, TEXT("'F' key is pressed."), TEXT("WM_CHAR"), MB_OK);
			//break;
		case 'f':
			//MessageBox(hwnd, TEXT("'f' key is pressed."), TEXT("WM_CHAR"), MB_OK);
			if (gbFullScreen == FALSE)
			{
				toggleFullScreen();
				gbFullScreen = TRUE;
			}
			else
			{
				toggleFullScreen();
				gbFullScreen = FALSE;
			}
			break;
		default:
			break;
		}
		break;

	case WM_CLOSE:
		uninitialize();
		break;

	case WM_DESTROY :
		PostQuitMessage(0);
		break;
	default :
		break;
	}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}

void toggleFullScreen(void)
{
	// variable declarations
	MONITORINFO mi;


	// code
	if (gbFullScreen == FALSE)
	{
		dwStyle = GetWindowLong(ghwnd, GWL_STYLE);
		if (dwStyle & WS_OVERLAPPEDWINDOW)
		{
			ZeroMemory((void*)&mi, sizeof(MONITORINFO));
			mi.cbSize = sizeof(MONITORINFO);
			if (GetWindowPlacement(ghwnd, &wpPrev) && GetMonitorInfo(MonitorFromWindow(ghwnd, MONITORINFOF_PRIMARY), &mi))
			{
				SetWindowLong(ghwnd, GWL_STYLE, dwStyle & ~WS_OVERLAPPEDWINDOW);
				SetWindowPos(ghwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left, mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_NOZORDER | SWP_FRAMECHANGED);
			}
		}
		ShowCursor(FALSE);
	}
	else
	{
		SetWindowPlacement(ghwnd, &wpPrev);
		SetWindowLong(ghwnd, GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
		SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED);
        ShowCursor(TRUE);
	}
	
}
int initialize(void)
{
	//functon declarations
	void printGLInfo(void);
	
	// Variable declarations
	PIXELFORMATDESCRIPTOR pfd;
	int iPixelFormatIndex = 0;

	// code

	// pixelformatdescripter initialization
	ZeroMemory(((void*)&pfd), sizeof(PIXELFORMATDESCRIPTOR));
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cRedBits = 8;
	pfd.cGreenBits = 8;
	pfd.cBlueBits = 8;
	pfd.cAlphaBits = 8;

	//get dc chr

	ghdc = GetDC(ghwnd);
	if (ghdc == NULL)
	{
		fprintf(gpFile, "get dc function failed\n");


	}

	//get matching pixelformatindex using hdc and pfd
	iPixelFormatIndex = ChoosePixelFormat(ghdc, &pfd);
	if (iPixelFormatIndex == 0)
	{
		fprintf(gpFile, " Choose  Pixel Fomat Index Failed\n");
		return(-2);

	}
	//select the pixel format of found index
	if (SetPixelFormat(ghdc, iPixelFormatIndex, &pfd) == FALSE)
	{
		fprintf(gpFile, "Set Pixel Format False\n");
			return(-3);
	}

	//create rendering context using hdc ,pfd, PixelFormatIndex and Choosen pixel format
	ghrc = wglCreateContext(ghdc);
	if (ghrc == NULL)
	{
		fprintf(gpFile, "wgl create context fail\n");
		return(-4);
	}

	// make this rendering context are current context rendering  
	if (wglMakeCurrent(ghdc, ghrc) == FALSE)
	{
		fprintf(gpFile, "wgl make function fail\n");
		return(-5);
	}

	//print gl info
	printGLInfo();

	//from here on words opengl code start
	//tell opengl choose the color to clear the color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	return(0);
}

void printGLInfo(void)
{
	//code
	// print openGL information
	fprintf(gpFile, "OPENGL INFORMATION\n");
	fprintf(gpFile, "********************\n");
	fprintf(gpFile, "OpenGL Vendor : %s\n", glGetString(GL_VENDOR));
	fprintf(gpFile,"OpenGL Renderer : %s\n", glGetString(GL_RENDERER)); 
	fprintf(gpFile, "OpenGL Version : %s\n", glGetString(GL_VERSION));

	fprintf(gpFile, "********************\n");
}

void resize(int width, int height)
{
	// code
	// if heigth is 0
	if (height <= 0)
	{
		height = 1;
	}

	//set the view port
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

}

void display(void)
{
	//code
	//clear opengl color
	glClear(GL_COLOR_BUFFER_BIT);
	
	//traingle drawing code
	glBegin(GL_TRIANGLES);
	//apex
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	//left bottom
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	//right bottom
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();

	//swap the buffers
	SwapBuffers(ghdc);
}

void update(void)
{
	// code
}

void uninitialize(void)
{
	//function declaration

	void toggleFullScreen(void);


	//code
	//// if exiting in fullscreen back to normal
	//if (gbFullScreen == TRUE)
	//{
	//	toggleFullScreen();
	//	gbFullScreen = FALSE;
	//}

	//close the file
	
	//make hdc as the current context by realizing 
	if (wglGetCurrentContext() == ghrc)
	{
		wglMakeCurrent(NULL, NULL);
	}

	//delete the rendering context
	if (ghrc)
	{
		wglDeleteContext(ghrc);
		ghrc = NULL;
	}

	//relize the ghdc
	if (ghdc)
	{
		ReleaseDC(ghwnd, ghdc);
		ghdc = NULL;
	}
		
	// destroy window
	if (ghwnd)
	{
		DestroyWindow(ghwnd);
		ghwnd = NULL;
	}
		
	//close the file
	if (gpFile)
	{
		fprintf(gpFile, "Program Terminated Successfully!\n");
		fclose(gpFile);
		gpFile = NULL;
	}
	//}

}

