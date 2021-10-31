#include "util.h"

// 초기화
void initiolize() {

	// 콘솔 창 설정
	system("mode con cols=110 lines=35 | title FEED CAT");

	// 커서 안보이게 함
	HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO console_cursor;
	console_cursor.bVisible = 0;
	console_cursor.dwSize = 1;
	SetConsoleCursorInfo(console_handle, &console_cursor);
}

// 커서 이동
void cursor_coordinate(int x, int y) {

	HANDLE consoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandler, pos);

}