#include "feed_cat_game.h"

// ���� �Լ�
int main() {

	initiolize();
	
	while (true) {
		title_music();
		title();
		int menu_return = menu();
		if (menu_return == 0) {
			select_map();
			map_1();
			if (select_map_cursor() == 0) { // START�� ������ �ΰ������� �̵�
				map_1_ingame();
				while (true) {
					fflush(stdin);  // ���� Ű�� ������ �� ���ӿ��� ������ �ʱ� ���� ����ó��
				}
			}
		}
		else if (menu_return == 2) {
			char_status();
		}
		else if (menu_return == 4) {
			return 0;
		}
		system("cls");
	}
	return 0;
}