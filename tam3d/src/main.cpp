#include <Windows.h>

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow)
{
	const auto pClassName = "tam3d";

	/*WINDOW REGISTER*/
	WNDCLASSEX wc = {0};

	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;

	wc.lpfnWndProc = DefWindowProc;

	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;

	wc.hInstance = hInstance;
	wc.hIcon = NULL;
	wc.hIconSm = NULL;
	wc.hCursor = NULL;
	wc.hbrBackground = NULL;

	wc.lpszClassName = pClassName;
	wc.lpszMenuName = NULL;

	RegisterClassEx(&wc);

	/*CREATING WINDOW*/
	HWND hWnd = CreateWindowEx(
		0, pClassName, "Eventually",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200, 200, 640, 480,
		NULL, NULL, hInstance, NULL
	);

	ShowWindow(hWnd, SW_SHOW);
	while (1);
	return 0;
}
