 
// win 32 HEADER
#include<windows.h>

//global function declarations
LRESULT CALLBACK wndProc(HWND, UINT, WPARAM, LPARAM);

// entry point function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	// variable declaration
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR6");

	// code
	// window class initialisation
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = wndProc;
	wndclass.hInstance = hInstance;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);


	// registration of window class
	RegisterClassEx(&wndclass);

	// create window
	hwnd = CreateWindow(szAppName, TEXT("Arti Amol Bansode"), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);

	// show window
	ShowWindow(hwnd, iCmdShow);

	// paint background of window
	UpdateWindow(hwnd);
	
	// message loop
    while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
    }

	return((int)msg.wParam);
}
// callback function
LRESULT CALLBACK wndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	// Variable declarations
	HDC hdc;
	RECT rc;
	PAINTSTRUCT ps;
	TCHAR str[] = TEXT("Hello World..!!!");

	switch (iMsg) {
	case WM_PAINT:

		GetClientRect(hwnd, &rc);

		hdc = BeginPaint(hwnd, &ps);

		SetBkColor(hdc, RGB(0, 0, 0));
		SetTextColor(hdc, RGB(0, 255, 0));


		DrawText(hdc, str, -1, &rc, DT_SINGLELINE | DT_CENTER | DT_VCENTER);

		EndPaint(hwnd, &ps);

		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hwnd, iMsg, wParam, lParam);
	}

	return 0;
}

