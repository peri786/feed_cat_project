#include "feed_cat_game.h"
#include "util.h"

// 메인 함수
int main() {

	initiolize();
	init_note();

	while (true) {
		int input_key;
		textcolor(7);
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
						if (input_key == ENTER) {
							ConGAME = RUNNING; // 엔터 입력 시 running시작 음악 호출
							map_1_music();
						}
						if (input_key == 'p') {
							ConGAME = STOP;
						}
						switch (input_key) {
						case LEFT:
							judge_LE();
							break;
						case UP:
							judge_UP();
							break;
						case DOWN:
							judge_DO();
							break;
						case RIGHT:
							judge_RI();
							break;
						}
						if (ConGAME == RESULT) {
							if (input_key == 'q') {
								break;
							}
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