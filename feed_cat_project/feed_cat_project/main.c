#include "feed_cat_game.h"
#include "util.h"

// 메인 함수
int main() {

	initiolize();
	init_note();

	while (true) {
		int input_key;
		title_music();
		title();
		int menu_return = menu();
		if (menu_return == 0) {
			select_map();
			map_1();
			int game_return = select_map_cursor();
			if (game_return == 0) { // START를 누르면 인게임으로 이동
				while (true) {
					ScreenRelease();
					if (_kbhit()) {
						input_key = _getch();
						if (input_key == 13) {
							ConGAME = RUNNING; // 엔터 입력 시 running시작 음악 호출
							PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);
						}
						if (input_key == 'p') {
							ConGAME = PAUSE;
						}
					}
					run_ingame();
					ingame_draw();
				}
			}
			ScreenRelease();
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