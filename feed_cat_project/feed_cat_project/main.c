#include "feed_cat_game.h"

// 메인 함수
int main() {

	initiolize();
	
	while (true) {
		title_music();
		title();
		int menu_return = menu();
		if (menu_return == 0) {
			select_map();
			map_1();
			if (select_map_cursor() == 0) { // START를 누르면 인게임으로 이동
				map_1_ingame();
				while (true) {
					fflush(stdin);  // 엔터 키를 눌렀을 때 게임에서 나가지 않기 위해 예외처리
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