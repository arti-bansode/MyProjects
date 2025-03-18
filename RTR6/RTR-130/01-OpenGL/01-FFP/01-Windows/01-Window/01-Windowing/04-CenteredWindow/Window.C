// Win32 headers
#include <windows.h>

// Global function declarations
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Entry point function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow) {
    // Variable Declarations
    WNDCLASSEX wndclass;
    HWND hwnd;
    MSG msg;
    TCHAR szAppName[] = TEXT("RTR6 MATRIX");

    // Window Class Initialization
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.lpfnWndProc = WndProc;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.lpszClassName = szAppName;
    wndclass.lpszMenuName = NULL;
    wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    //registration of class window

    RegisterClassEx(&wndclass);

    // Create Window
    hwnd = CreateWindow(
        szAppName,
        TEXT("Arti Amol Bansode"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL);


    // Show Window
    ShowWindow(hwnd, iCmdShow);

    UpdateWindow(hwnd);

    // Message Loop
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

// Callback Function
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam) {
    // Variable declarations
    HDC hdc;
    RECT rc;
    PAINTSTRUCT ps;
    TCHAR str[] = TEXT("Hello World..!!!");
    static int iPaintflag = -1;


    switch (iMsg) {
    case WM_PAINT:

        GetClientRect(hwnd, &rc);

        hdc = BeginPaint(hwnd, &ps);

        SetBkColor(hdc, RGB(0, 0, 0));

        if (iPaintflag == 1)
        {
            SetTextColor(hdc, RGB(255, 0, 0));
        }
        else if (iPaintflag == 2)
        {
            SetTextColor(hdc, RGB(0, 255, 0));
        }
        else if (iPaintflag == 3)
        {
            SetTextColor(hdc, RGB(0, 0, 255));
        }

        else if (iPaintflag == 4)
        {
            SetTextColor(hdc, RGB(255, 255, 0));
        }
        else if (iPaintflag == 5)
        {
            SetTextColor(hdc, RGB(0, 255, 0));
        }

        else if (iPaintflag == 6)
        {
            SetTextColor(hdc, RGB(0, 255, 255));
        }

        else if (iPaintflag == 7)
        {
            SetTextColor(hdc, RGB(255, 0, 255));
        }

        DrawText(hdc, str, -1, &rc, DT_SINGLELINE | DT_CENTER | DT_VCENTER);

        EndPaint(hwnd, &ps);

        break;

    case WM_CHAR:
        switch (wParam)
        {
        case 'R':
        case 'r':
            iPaintflag = 1;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'G':
        case 'g':
            iPaintflag = 2;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'B':
        case 'b':
            iPaintflag = 3;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'Y':
        case 'y':
            iPaintflag = 4;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'C':
        case 'c':
            iPaintflag = 5;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'M':
        case 'm':
            iPaintflag = 6;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        case 'W':
        case 'w':
            iPaintflag = 7;
            InvalidateRect(hwnd, NULL, TRUE);
            break;

        }

        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, iMsg, wParam, lParam);
    }

    return 0;
}
