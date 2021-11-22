#include "main.h"
#include "feed_cat_game.h"
#include "util.h"

// 메인 함수
int main() {

	initiolize();
	init_note();

	while (true) {
		title_music();
		title();
		char game_return;
		int menu_return = menu();
		if (menu_return == 0) {
			select_map();
			map_1();
			if (select_map_cursor() == 0) { // START를 누르면 인게임으로 이동

				while (true) {

					if (_kbhit()) {
						game_return = _getch();
						if (game_return == 13) {
							ConGAME = RUNNING;
							PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);
						}
						else if (game_return == 'p') {
							ConGAME = PAUSE;
						}
					}

					run_ingame();
					ingame_draw();
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
		system("cls");
	}
	return 0;
}