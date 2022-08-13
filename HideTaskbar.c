#include<windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreviousInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	HWND hShell_TrayWnd = NULL;
	HWND hShell_SecondaryTrayWnd = NULL;
	LPSTR lpszShell_TrayWndClassName = "Shell_TrayWnd";
	LPSTR lpszShell_SecondaryTrayWndClassName = "Shell_SecondaryTrayWnd";
	while((hShell_TrayWnd = FindWindowEx(GetDesktopWindow(), hShell_TrayWnd, lpszShell_TrayWndClassName, NULL)) != NULL)ShowWindow(hShell_TrayWnd, SW_HIDE);
	while((hShell_SecondaryTrayWnd = FindWindowEx(GetDesktopWindow(), hShell_SecondaryTrayWnd, lpszShell_SecondaryTrayWndClassName, NULL)) != NULL)ShowWindow(hShell_SecondaryTrayWnd, SW_HIDE);
	return EXIT_SUCCESS;
}

