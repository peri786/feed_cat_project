#include "feed_cat_game.h"

// 게임 제목 출력
void title() {

	printf("\n\n\n\n\n");
	printf("           _______  _______  _______  _______      \n"); Sleep(100);
	printf("          |   ____||   ____||   ____||       A     \n"); Sleep(100);
	printf("          |  |__   |  |__   |  |__   |  .--.  |    \n"); Sleep(100);
	printf("          |   __|  |   __|  |   __|  |  |  |  |    \n"); Sleep(100);
	printf("          |  |     |  |____ |  |____ |  '--'  |    \n"); Sleep(100);
	printf("          |__|     |_______||_______||_______/     \n"); Sleep(100);
	printf("                                                    ______       ___    .___________.    __   __    \n"); Sleep(100);
	printf("                                                   /      |     /   A   |           |   |  | |  |   \n"); Sleep(100);
	printf("                                                  |  ,----'    /  ^  A  `---|  |----`   |  | |  |   \n"); Sleep(100);
	printf("                                                  |  |        /  A A  A     |  |        |  | |  |   \n"); Sleep(100);
	printf("                                                  |  `----.  /  _____  A    |  |        |__| |__|   \n"); Sleep(100);
	printf("                                                   A______| /__/     A__A   |__|        (__) (__)   \n"); Sleep(100);

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
	printf("▶ 게 임 시 작"); Sleep(100);
	cursor_coordinate(x, y + 2);
	printf(" 캐릭터 정보 "); Sleep(100);
	cursor_coordinate(x, y + 4); 
	printf("    종 료    "); Sleep(100);
	printf("\n");

	while (true) {
		int key_event = key_control();

		switch (key_event) {
		case UP: {
			if (y > 22) {
				cursor_coordinate(x - 2, y);
				printf("  ");
				cursor_coordinate(x - 2, --y);
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

//캐릭터 정보 화면
void char_status() {

	system("cls");

	while (true) {

		char_print();

		if (key_control() == ENTER)
			break;
	}

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}

// 캐릭터 입출력
void char_print() {
	
	while (true) {

		Sleep(120);

		printf("											  \n");
		printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
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
		printf("											  \n");
		printf("											  \n");
		printf("											  \n");

		Sleep(120);
		

		printf("											  \n");
		printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
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
		printf("      @@   @@@.      ,@,~#$#             @@@@@\n");
		printf("      @     @@.       ;  ,=       -@,    -@@@@\n");
		printf("      @@    @@.       ;# @,         #$    @@@@\n");
		printf("      @*  !!@@.        ;==           $,    $@@\n");
		printf("      @.    $@@                      ,@@@;  @@\n");
		printf("      @:   !=!@~                     #@$    @@\n");
		printf("      @@   #$ =*                    !@@*   !@@\n");
		printf("      @@* ;;,  ;$                   #@@    $@@\n");
		printf("      @@@@@@@##@@$*                ~@@@*  :@@@\n");
		printf("      @@@@@@@@@@@@@,             $@@@     @@@@\n");
		printf("      @@@@@@@@@@@@@!=;        ,!@::@@#    @@@@\n");
		printf("      @@@@@@@@@@@@@-~!@@#**$@@@@@@:  @@#..@@@@\n");
		printf("      @@@@@@@@@@@@@@@=$@@@@@@#@@@@@@@@@#*$@@@@\n");
		printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("											  \n");
		printf("											  \n");
		printf("											  \n");

		Sleep(120);

	}
							
}

// 맵 선택 화면
void select_map() {

	system("cls");
	printf(" __                _   _         \n"); Sleep(100);
	printf("/ _| _ || _  _||  |  V  | _   _  \n"); Sleep(100);
	printf("V_V /oA||/oA//| ] |  V  |/oA /oA \n"); Sleep(100);
	printf("|__/VD L|VD VDL|  |_| |_|V_,]|_/ \n"); Sleep(100);
	printf("                             L|  \n"); Sleep(100);
	
	map_1();

}

// 첫번째 맵 선택 화면
void map_1() {

	PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);

	int x = 55;
	int y = 13;

	printf("\n\n\n\n");
	printf("			       ~    -       \n"); Sleep(100);
	printf("			   ~        ,     \n"); Sleep(100);
	printf("			             -    \n"); Sleep(100);
	printf("			 ,                \n"); Sleep(100);
	printf("			 -             ,   \n"); Sleep(100);
	printf("			               ,   \n"); Sleep(100);
	printf("			  .  -      ;@; --  \n"); Sleep(100);
	printf("			 . @@@@    @@@@ ~  \n"); Sleep(100);
	printf("			   @@@@@   $@@@@=~  \n"); Sleep(100);
	printf("			 ,@@@@@   #@@@@ ~  \n"); Sleep(100);
	printf("			  ,@@@@, @@ @@@@ -  \n"); Sleep(100);
	printf("			 :-@@  .@@   ;* -  \n"); Sleep(100);
	printf("			      , @@@! ,   .  \n"); Sleep(100);
	printf("			        @@@@        \n"); Sleep(100);
	printf("			    -    @#,   -    \n"); Sleep(100);
	printf("			    ,            \n"); Sleep(100);
	printf("			    -        ~     \n"); Sleep(100);
	printf("			     .. ,    ,,     \n"); Sleep(100);
	printf("			      :-   ,.      \n"); Sleep(100);

	cursor_coordinate(x, y);
	printf("난이도 : ★★★★★★★★★★★"); Sleep(100);
	cursor_coordinate(x, y + 2);
	printf("EVERYTHING WILL FREEZE"); Sleep(100);

	cursor_coordinate(x - 2, y + 4);
	printf("▶ START");  Sleep(100);
	cursor_coordinate(x, y + 6);
	printf(" NEXT ");  Sleep(100);

	map_select_cursor();

}

// 이번 맵에서 게임을 할지 다음 맵으로 갈지 선택 커서
void map_select_cursor() {

	int x = 55;
	int y = 17;

	while (true) {
		int key_event = key_control();

		switch (key_event) {
		case UP: {
			if (y > 17) {
				cursor_coordinate(x - 2, y);
				printf("  ");
				cursor_coordinate(x - 2, --y);
				cursor_coordinate(x - 2, --y);
				printf("▶");
			}
			break;
		}
		case DOWN: {
			if (y < 19) {
				cursor_coordinate(x - 2, y);
				printf("  ");
				cursor_coordinate(x - 2, ++y);
				cursor_coordinate(x - 2, ++y);
				printf("▶");
			}
			break;
		}
		case ENTER: {
			map_1_ingame();
		}
		}
	}
}