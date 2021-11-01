﻿#include "main.h"
#include "feed_cat_game.h"
#include "util.h"

// 게임 제목 출력
void title() {

	printf("\n\n\n\n\n");
	printf("           _______  _______  _______  _______      \n");
	printf("          |   ____||   ____||   ____||       A     \n");
	printf("          |  |__   |  |__   |  |__   |  .--.  |    \n");
	printf("          |   __|  |   __|  |   __|  |  |  |  |    \n");
	printf("          |  |     |  |____ |  |____ |  '--'  |    \n");
	printf("          |__|     |_______||_______||_______/     \n");
	printf("                                                    ______       ___    .___________.    __   __    \n");
	printf("                                                   /      |     /   A   |           |   |  | |  |   \n");
	printf("                                                  |  ,----'    /  ^  A  `---|  |----`   |  | |  |   \n");
	printf("                                                  |  |        /  A A  A     |  |        |  | |  |   \n");
	printf("                                                  |  `----.  /  _____  A    |  |        |__| |__|   \n");
	printf("                                                   A______| /__/     A__A   |__|        (__) (__)   \n");

}

// 시작화면 배경음악
void title_music() {
	PlaySound(TEXT("title_BGM.wav"), NULL, SND_ASYNC | SND_LOOP);
}

// 방향키를 받음
int key_control() {

	char key;

	while (true) {
		if (_kbhit()) {

			key = _getch();

			if (key == -32) {

				key = _getch();

				if (key == UP)
					return UP;
				else if (key == DOWN)
					return DOWN;
				else if (key == LEFT)
					return LEFT;
				else if (key == RIGHT)
					return RIGHT;
			}

			else if (key == ENTER)
				return ENTER;

			else {
				rewind(stdin);  // 방향키와 엔터가 아니면 입력버퍼를 지움
				return 0;
			}
		}
	}

}

// 메뉴 출력
int menu() {

	int x = 48;
	int y = 22;

	cursor_coordinate(x - 2, y);
	printf("▶ 게 임 시 작");
	cursor_coordinate(x, y + 2);
	printf(" 캐릭터 정보 ");
	cursor_coordinate(x, y + 4);
	printf("    종 료    ");
	printf("\n");

	while (true) {
		int key_event = key_control();

		switch (key_event) {
		case UP: {
			if (y > 22) {
				cursor_coordinate(x - 2, y);
				printf("  ");
				cursor_coordinate(x - 2, --y);
				printf("▶");
			}
			break;
		}
		case DOWN: {
			if (y < 26) {
				cursor_coordinate(x - 2, y);
				printf("  ");
				cursor_coordinate(x - 2, ++y);
				printf("▶");
			}
			break;
		}
		case ENTER: {
			return y - 22;
		}
		}
	}
}

void char_status() {

	system("cls");
	printf("\n\n\n\n");

	char_print();

	while (true) {
		if (key_control() == ENTER)
			break;
	}
}

// 캐릭터 입출력
void char_print() {

	printf("      @@@@@@@@@@@@@@:@@@@@@@@@#*@@@@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@@@@ #@@@@@@@= *@@@@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@@@@  @@@@@@@; !@@@@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@@@@*!:~    ,~:=@@@@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@@@$            :@@@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@@,              .;@@@@@@@@@@@\n");
	printf("      @@@@@@@@@@@-   ~     .~      *@@@@@@@@@@\n");
	printf("      @@@@@@@@@@.   ~@;    ~@       !@@@@@@@@@\n");
	printf("      @@@@@@@@;:    ,;     ,;     -;;!@@@@@@@@\n");
	printf("      @@@@@@@=#        @ @,           ,@@@@@@@\n");
	printf("      @@@@@@@@:     ,; *$;             ;@@@@@@\n");
	printf("      @@@@@@@@.     ~~,~@. :            *@@@@@\n");
	printf("      @@@@@@@@.      ,@,~#$#             @@@@@\n");
	printf("      @@@@@@@@.       ;  ,=       -@,    -@@@@\n");
	printf("      @@#@@@@@.       ;# @,         #$    @@@@\n");
	printf("      @*  !!@@.        ;==           $,    $@@\n");
	printf("      @.    $@@                      ,@@@;  @@\n");
	printf("      @:   !=!@~                     #@$    @@\n");
	printf("      @@   #$ =*                    !@@*   !@@\n");
	printf("      @@  ;;,  ;$                   #@@    $@@\n");
	printf("      @@--=     $*                ~@@@*   :@@@\n");
	printf("      @@@@@@-  .@@@,             $@@@     @@@@\n");
	printf("      @@@@@@@@!=@@@!=;        ,!@::@@#    @@@@\n");
	printf("      @@@@@@@@@@@@@-~!@@#**$@@@@@~:@@#..  @@@@\n");
	printf("      @@@@@@@@@@@@@=$@@@@@@@@#@@@@=@@@@#*$@@@@\n");
	printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
							 

}

void select_map() {

	system("cls");
	printf("\n\n\n\n");

	int x = 48;
	int y = 15;

	cursor_coordinate(x , y);
	printf("■■■■■■■■■■■■■■■■");

	while (true) {
		if (key_control() == ENTER)
			break;
	}
}
