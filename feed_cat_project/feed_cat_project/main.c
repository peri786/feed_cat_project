#define _CRT_SECURE_NO_WARNINGS
#include "feed_cat_game.h"
#include<memory.h>

// �������� ����
typedef enum _STAGE {
	READY, RUNNING, PAUSE, RESULT
}STAGE;
STAGE Stage;

// ���� �Լ�
int main() {
	int nKey;
	initiolize();
	init();
	while (true) {
		title_music();
		title();
		int menu_return = menu();
		if (menu_return == 0) {
			select_map();
			map_1();
			if (select_map_cursor() == 0) { // START�� ������ �ΰ������� �̵�
				while (1) {

					if (_kbhit()) {
						nKey = _getch();
						if (nKey == 13) {
							Stage = RUNNING; // ���� �Է� �� running���� ���� ȣ��
							PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);
						}
						if (nKey == 'p') {
							Stage = PAUSE;
						}
						switch (nKey) {
						case 'a':
							CheckA(0);
							break;
						case 's':
							CheckS(0);
							break;
						case 'd':
							CheckD(0);
							break;
						case 'j':
							CheckJ(0);
							break;
						case 'k':
							CheckK(0);
							break;
						case 'l':
							CheckL(0);
							break;

						}
					}

					Update();  // ������ ����
					Render();  // ȭ�����
				}
				ScreenRelease();
			}
		}
		else if (menu_return == 2) {
			char_status();
		}
		else if (menu_return == 4) {
			return 0;
		}
	}
	return 0;
}