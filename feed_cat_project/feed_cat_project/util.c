#include "util.h"

// �ʱ�ȭ
void initiolize() {

	// �ܼ� â ����
	system("mode con cols=110 lines=35 | title FEED CAT");

	// Ŀ�� �Ⱥ��̰� ��
	HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO console_cursor;
	console_cursor.bVisible = 0;
	console_cursor.dwSize = 1;
	SetConsoleCursorInfo(console_handle, &console_cursor);
}

// Ŀ�� �̵�
void cursor_coordinate(int x, int y) {

	HANDLE consoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandler, pos);

}