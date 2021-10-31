#include "main.h"
#include "feed_cat_game.h"
#include "util.h"

// 메인 함수
int main() {

	initiolize();
	
	while (true) {
		title();
		title_music();
		int menu_return = menu();
		if (menu_return == 0) {
			//todo game start
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