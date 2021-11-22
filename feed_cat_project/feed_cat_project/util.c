#define _CRT_SECURE_NO_WARNINGS
#include "util.h"

static int screen_index;
static HANDLE screen[2];

// 초기화
void initiolize() {

	CONSOLE_CURSOR_INFO cci;

	// 콘솔 창 설정
	system("mode con cols=110 lines=35 | title FEED CAT");

	screen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	screen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	// 커서 안보이게 함
	HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO console_cursor;
	console_cursor.bVisible = 0;
	console_cursor.dwSize = 1;
	SetConsoleCursorInfo(console_handle, &console_cursor);

	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(g_hScreen[0], &cci);
	SetConsoleCursorInfo(g_hScreen[1], &cci);
}

// 활성화된 버퍼와 비활성화된 버퍼의 상태를 바꿈
void ScreenFlipping() {
	SetConsoleActiveScreenBuffer(g_hScreen[g_nScreenIndex]);
	g_nScreenIndex = !g_nScreenIndex;
}

// 버퍼 지우기
void ScreenClear() {
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(g_hScreen[g_nScreenIndex], ' ', 80 * 25, Coor, &dw);
}

// 생성한 두개의 버퍼를  모두 해제
void ScreenRelease() {
	CloseHandle(g_hScreen[0]);
	CloseHandle(g_hScreen[1]);
}

// 커서 이동
void cursor_coordinate(int x, int y) {

	HANDLE consoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandler, pos);
}