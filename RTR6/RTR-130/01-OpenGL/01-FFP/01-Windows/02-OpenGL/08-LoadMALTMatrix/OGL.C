 

// Win32 headers (Standard Header files)
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 1
#include <math.h>

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
float angleCube= 0.0f;
float angleRectangle = 0.0f;

float identityMatrix[16];
float translationMatrix[16];
float scaleMatrix[16];
float rotationMatrixX[16];
float rotationMatrixY[16];
float rotationMatrixZ[16];


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

	//define matrices
	//identity matrix
	identityMatrix[0] = 1.0f;
	identityMatrix[1] = 0.0f;
	identityMatrix[2] = 0.0f;
	identityMatrix[3] = 0.0f;
	identityMatrix[4] = 0.0f;
	identityMatrix[5] = 1.0f;
	identityMatrix[6] = 0.0f;
	identityMatrix[7] = 0.0f;
	identityMatrix[8] = 0.0f;
	identityMatrix[9] = 0.0f;
	identityMatrix[10] = 1.0f;
	identityMatrix[11] = 0.0f;
	identityMatrix[12] = 0.0f;
	identityMatrix[13] = 0.0f;
	identityMatrix[14] = 0.0f;
	identityMatrix[15] = 1.0f;

	//
	translationMatrix[0] = 1.0f;
	translationMatrix[1] = 0.0f;
	translationMatrix[2] = 0.0f; 
	translationMatrix[3] = 0.0f;
	translationMatrix[4] = 0.0f;
	translationMatrix[5] = 1.0f;
	translationMatrix[6] = 0.0f;
	translationMatrix[7] = 0.0f;
	translationMatrix[8] = 0.0f;
	translationMatrix[9] = 0.0f;
	translationMatrix[10] = 1.0f;
	translationMatrix[11] = 0.0f;
	translationMatrix[12] = 0.0f;
	translationMatrix[13] = 0.0f;
	translationMatrix[14] = -5.0f;
	translationMatrix[15] = 1.0f;

	//scale matrix
	scaleMatrix[0] = 0.75f;
	scaleMatrix[1] = 0.0f;
	scaleMatrix[2] = 0.0f;
	scaleMatrix[3] = 0.0f;
	scaleMatrix[4] = 0.0f;
	scaleMatrix[5] = 0.75f;
	scaleMatrix[6] = 0.0f;
	scaleMatrix[7] = 0.0f;
	scaleMatrix[8] = 0.0f;
	scaleMatrix[9] = 0.0f;
	scaleMatrix[10] = 0.75f;
	scaleMatrix[11] = 0.0f;
	scaleMatrix[12] = 0.0f;
	scaleMatrix[13] = 0.0f;
	scaleMatrix[14] = 0.0f;
	scaleMatrix[15] = 1.0f;

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
	// variable declaration
	float angle = 0.0f;
	// Clear openGl Buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//TRAINGLE

	// set matrix to model view mode
	glMatrixMode(GL_MODELVIEW);

	// set into identity matrix
	//glLoadIdentity();
	//glLoadMatrix(identityMatrix);
	glLoadMatrixf(identityMatrix);

	// translate traingle backword by z
	//glTranslatef(0.0f, 0.0f, -5.0f);
	glMultMatrixf(translationMatrix);
	//gl scale 
	//glScale(0.70f, 0.70f, 0.70f);
	glMultMatrixf(scaleMatrix);

	//glRotatef(angleCube, 1.0f, 0.0f, 0.0f);
	//glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
	//glRotatef(angleCube, 0.0f, 0.0f, 1.0f);
	angle = angleCube * (M_PI / 180.0f);
	
	//x rotation matrix
	rotationMatrixX[0] = 1.0f;
	rotationMatrixX[1] = 0.0f;
	rotationMatrixX[2] = 0.0f;
	rotationMatrixX[3] = 0.0f;
	rotationMatrixX[4] = 0.0f;
	rotationMatrixX[5] = cos(angle);
	rotationMatrixX[6] = sin(angle);
	rotationMatrixX[7] = 0.0f;
	rotationMatrixX[8] = 0.0f;
	rotationMatrixX[9] = -sin(angle);
	rotationMatrixX[10] = cos(angle);
	rotationMatrixX[11] = 0.0f;
	rotationMatrixX[12] = 0.0f;
	rotationMatrixX[13] = 0.0f;
	rotationMatrixX[14] = 0.0f;
	rotationMatrixX[15] = 1.0f;

	glMultMatrixf(rotationMatrixX);

	//y rotation matrix
	rotationMatrixY[0] = cos(angle);
	rotationMatrixY[1] = 0.0f;
	rotationMatrixY[2] = -sin(angle);
	rotationMatrixY[3] = 0.0f;
	rotationMatrixY[4] = 0.0f;
	rotationMatrixY[5] = 1.0f;
	rotationMatrixY[6] = 0.0f;
	rotationMatrixY[7] = 0.0f;
	rotationMatrixY[8] = sin(angle);
	rotationMatrixY[9] = 0.0f;
	rotationMatrixY[10] = cos(angle);
	rotationMatrixY[11] = 0.0f;
	rotationMatrixY[12] = 0.0f;
	rotationMatrixY[13]=0.0f;
	rotationMatrixY[14] = 0.0f; 
	rotationMatrixY[15] = 1.0f;

	glMultMatrixf(rotationMatrixY);

	//z rotation matrix
	 rotationMatrixZ[0]=cos(angle);
	 rotationMatrixZ[1] = sin(angle);
	 rotationMatrixZ[2] = 0.0f;
	 rotationMatrixZ[3] = 0.0f;
	 rotationMatrixZ[4] = -sin(angle);
	 rotationMatrixZ[5] = cos(angle);
	 rotationMatrixZ[6] = 0.0f;
	 rotationMatrixZ[7] = 0.0f;
	 rotationMatrixZ[8] = 0.0f;
	 rotationMatrixZ[9] = 0.0f;
	 rotationMatrixZ[10] = 1.0f;
	 rotationMatrixZ[11] = 0.0f;
	 rotationMatrixZ[12] = 0.0f;
	 rotationMatrixZ[13] = 0.0f;
	 rotationMatrixZ[14] = 0.0f;
	 rotationMatrixZ[15] = 1.0f;

	 glMultMatrixf(rotationMatrixZ);



    // Triangle Drawing Code
	glBegin(GL_QUADS);
	// Apex
	//front face
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);//right top
	glVertex3f(-1.0f, 1.0f, 1.0f);//left top
	glVertex3f(-1.0f, -1.0f, 1.0f);//left bottom
	glVertex3f(1.0f, -1.0f, 1.0f);//right bottom

	//right face
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);//right top
	glVertex3f(1.0f, 1.0f, 1.0f);//left top
	glVertex3f(1.0f, -1.0f, 1.0f);//left bottom
	glVertex3f(1.0f, -1.0f, -1.0f);//right bottom

	//back face
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);

	//left face
	glColor3f(0.0f, 1.0f, 1.0f);//green+blue
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);

	//top face
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);

	//bottom face
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);

	glEnd();

	// Swap the Buffers
	SwapBuffers(ghdc);

	//return(0);
}

void update(void)
{
	// code
	angleCube = angleCube + 0.04f;

	if (angleCube >= 360.0f)
	{
		(angleCube = angleCube - 360.0f);
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


	