 

// Win32 headers (Standard Header files)
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

// OpenGL related header file
#include <gl/GL.h>
#include <gl/GLU.h>

// Custom header file
#include "OGL.h"

// OpenGL realted libraries
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GLU32.lib")

// Macros
#define WIN_WIDTH 800
#define WIN_HEIGHT 600


// global function declarations
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// global variable declarations
// variable related with FullScreen
BOOL gbFullScreen = FALSE;
HWND ghwnd = NULL;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev;
// Variables related with File I/O
char gszlogFileName[] = "Log.txt";
FILE* gpFile = NULL;

// Active Window related variable
BOOL gbActiveWindow = FALSE;

// Exit Key Press related variables
BOOL gbEscapeKeyIsPressed = FALSE;

// openGL related Global Variables
HDC ghdc = NULL;
HGLRC ghrc = NULL;

//rotation angals
float anglePyramid= 0.0f;
float angleRectangle = 0.0f;

// Entry-Point function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	// local function declarations
	int initialize(void);
	void display(void);
	void update(void);
	void uninitialize(void);

	// variable declarations
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR6");
	BOOL bDone = FALSE;

	// Code
	// Create log file
	gpFile = fopen(gszlogFileName, "w");
	if (gpFile == NULL)
	{
		MessageBox(NULL, TEXT("Log File Creation Failed"), TEXT("File I/O Error"), MB_OK);
		exit(0);
	}
	else
	{
		fprintf(gpFile, "Program Started Successfully!\n");
	}

	// code : Window Class Initialization
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hInstance = hInstance;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	// Registration of Window Class
	RegisterClassEx(&wndclass);

	// Create Window
	hwnd = CreateWindowEx(WS_EX_APPWINDOW, szAppName, TEXT("Arti Bansode"), WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, WIN_WIDTH, WIN_HEIGHT, NULL, NULL, hInstance, NULL);

	ghwnd = hwnd;

	// show window
	ShowWindow(hwnd, iCmdShow);

	// Paint The Background of Window
	UpdateWindow(hwnd);


	int result = initialize();

	if (result != 0)
	{
		fprintf(gpFile, "initialization() Failed\n");
		DestroyWindow(hwnd);
		hwnd = NULL;
	}
	else
	{
		fprintf(gpFile, "initilize() completed Successfully!\n");
	}

	// Set this window as foreground and active window
	SetForegroundWindow(hwnd);
	SetFocus(hwnd);


	// Game Loop
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
				// Render
				display();

				// update
				update();
			}
		}

	}

	// unintialize
	uninitialize();

	return((int)msg.wParam);
}

// Callback function
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	// local function declarations / function declarations / function prototypes
	void toggleFullscreen(void);
	void resize(int, int);
	void uninitialize(void);

	// code
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
		case 'f':
			if (gbFullScreen == FALSE)
			{
				toggleFullscreen();
				gbFullScreen = TRUE;
			}
			else
			{
				toggleFullscreen();
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
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		break;
	}
	
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));

}

// our function : to toggle the screen
void toggleFullscreen(void)
{
	// variable declarations
	MONITORINFO mi;

	// code
	// Get the current window style
	if (gbFullScreen == FALSE)
	{
		dwStyle = GetWindowLong(ghwnd, GWL_STYLE);
		if (dwStyle & WS_OVERLAPPEDWINDOW)
		{
			ZeroMemory((void*)&mi, sizeof(MONITORINFO));
			mi.cbSize = sizeof(MONITORINFO);
			if (GetWindowPlacement(ghwnd, &wpPrev) && GetMonitorInfo(MonitorFromWindow(ghwnd, MONITORINFOF_PRIMARY), &mi))
			{
				SetWindowLong(ghwnd, GWL_STYLE, dwStyle & ~WS_EX_OVERLAPPEDWINDOW);
				SetWindowPos(ghwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left, mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_NOZORDER | SWP_FRAMECHANGED);
			}
		}
		ShowCursor(FALSE);
	}
	else
	{
		SetWindowPlacement(ghwnd, &wpPrev);
		SetWindowLong(ghwnd, GWL_STYLE, dwStyle | WS_EX_OVERLAPPEDWINDOW);
		SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED);
		ShowCursor(TRUE);
	}

}


int initialize(void)
{

	void resize(int, int);

	//functon declarations
	void printGLInfo(void);

	// variable declarations
	PIXELFORMATDESCRIPTOR pfd;
	int iPixelFormatIndex = 0;

	// code
	// pixel format descriptor initialization
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
	pfd.cDepthBits = 32;

	// Get DC
	ghdc = GetDC(ghwnd);
	if (ghdc == NULL)
	{
		fprintf(gpFile, "GetDC() Failed!\n");
		return(-1);
	}

	// Get Matching Pixel Format Index Using hdc and pfd
	iPixelFormatIndex = ChoosePixelFormat(ghdc, &pfd);
	if (iPixelFormatIndex == 0)
	{
		fprintf(gpFile, "ChoosePixelFormat() Failed!\n");
		return(-2);
	}

	// Select the pixel format of found index
	if (SetPixelFormat(ghdc, iPixelFormatIndex, &pfd) == FALSE)
	{
		fprintf(gpFile, "SetPixelFormat() Failed!\n");
		return(-3);
	}

	// Create Rendering Context using hdc, pfd and chosen PIXELFORMATINDEX
	ghrc = wglCreateContext(ghdc);
	if (ghrc == NULL)
	{
		fprintf(gpFile, "wglCreateContext() Failed!\n");
		return(-4);
	}

	// Make this rendering context as current Context
	if (wglMakeCurrent(ghdc, ghrc) == FALSE)
	{
		fprintf(gpFile, "wglMakeCurrent() Failed!\n");
		return(-5);
	}

	//Depth Related Code
	glShadeModel(GL_SMOOTH);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);                // LEQUAL = <=
	glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST);

	// From here onwards openGL Code Starts
	// Tell openGL to choose the color to clear the screen
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	//varmup resize
	resize(WIN_WIDTH, WIN_HEIGHT);

	return(0);
}

void resize(int width, int height)
{
	// code
	// If height by accident is less than or equal to 0 then set it to 1
	if (height <= 0)
	{
		height = 1;
	}

	// Set the viewport
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

	// set matrix projection mode
	glMatrixMode(GL_PROJECTION);

	// set to identity matrix
	glLoadIdentity();

	// do perspective
	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
	//return(0);
}

void display(void)
{
	// code
	// Clear openGl Buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//TRAINGLE

	// set matrix to model view mode
	glMatrixMode(GL_MODELVIEW);

	// set into identity matrix
	glLoadIdentity();

	// translate traingle backword by z
	glTranslatef(0.1f, 0.0f, -5.0f);

	glRotatef(anglePyramid, 0.0f, 1.0f, 0.0f);

    // Triangle Drawing Code
	glBegin(GL_TRIANGLES);
	// Apex
	//front face
	glVertex3f(0.0f, 1.0f, 0.0f);
	// Left Bottom
	glVertex3f(-1.0f, -1.0f, 1.0f);
	// Right Bottom
	glVertex3f(1.0f, -1.0f, 1.0f);

	//right face
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);

	//back face
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);

	//left face
	//back face
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);

	glEnd();

	// Swap the Buffers
	SwapBuffers(ghdc);

	//return(0);
}

void update(void)
{
	// code
	anglePyramid = anglePyramid + 0.04f;

	if (anglePyramid >= 360.0f)
	{
		(anglePyramid = anglePyramid - 360.0f);
	}
	//return(0);
}

void uninitialize(void)
{
	// Function Declarations
	void toggleFullscreen(void);

	// code

	// if user is exiting in the fullscreen then restore the screen back to normal
	if (gbFullScreen == TRUE)
	{
		toggleFullscreen();
		gbFullScreen = FALSE;
	}

	// Make hdc as Current Context by releasing rendering context as current context
	if (wglGetCurrentContext() == ghrc)
	{
		wglMakeCurrent(NULL, NULL);
	}

	// Delete the Rendering context
	if (ghrc)
	{
		wglDeleteContext(ghrc);
		ghrc = NULL;
	}

	// Release the DC
	if (ghdc)
	{
		ReleaseDC(ghwnd, ghdc);
		ghdc = NULL;
	}

	// Destroy Window
	if (ghwnd)
	{
		DestroyWindow(ghwnd);
		ghwnd = NULL;
	}

	// close the file
	if (gpFile)
	{
		fprintf(gpFile, "Program Terminated Successfully!\n");
		fclose(gpFile);
		gpFile = NULL;
	}

	//return(0);
}


	