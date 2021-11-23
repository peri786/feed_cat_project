#include "ingame.h"

// 그 외 변수
int score_a = 0;
int combo_a = 0;
extern int cu;
// 진행 시간
char Time[20];
// 점수
char Scores[20];
//콤보
char Combos[20];

// 리듬게임 시작
clock_t prev_tA = 0;

void ingame_draw() {

    clock_t cur_time = clock();
    ScreenClear();
    system("cls");
    
    map_display();
    score();
    
    switch (ConGAME) {
    case READY:
        prev_tA = cur_time;
        ready_game();
        if (cur_time % 1000 > 500) {
            ready_gameA();
        }
        break;
    case PAUSE:
        return;
    case RUNNING:
        if (run_time > 3100) {
            if (cur_time - ControlT.prev_t > ControlT.move_t) {
                ControlT.prev_t = cur_time;
                cu++;
            }
            note_draw(cu);

        }
        break;

    case RESULT:
        printf("%s", Scores);
        break;
    }

    ScreenFlipping();
}

void ready_game() {
    cursor_coordinate(15, 10);
    printf("EVERYTHING WILL FREEZE");
}

void ready_gameA() {
    cursor_coordinate(10, 15);
    printf("Press Enter to Start");
}

// 노트가 떨어지는 공간을 그림
void map_display() {

    cursor_coordinate(0, 0);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
    for (int i = 1; i < 33; i++) {
        cursor_coordinate(0, i);
        printf("■\t\t\t\t\t\t■");
    }
    cursor_coordinate(0, 32);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
    cursor_coordinate(2, 28);
    printf("______________________________________________");
}

void score() {

	// 진행 시간
	sprintf(Time, "TIME : %d.%dsec", run_time / 1000, run_time % 1000);
    cursor_coordinate(60, 7);
    printf("%s", Time);
	// 점수
	sprintf(Scores, "SCORE : %d", score_a);
    cursor_coordinate(60, 9);
    printf("%s", Scores);
	//콤보
	sprintf(Combos, "%d COMBO", combo_a);
    cursor_coordinate(60, 11);
    printf("%s", Combos);

    cursor_coordinate(60, 15);
    printf("STOP : press 'P'");

    cursor_coordinate(60, 19);
    setlocale(LC_ALL, "Korean");
    wprintf(L"왼쪽부터 ← ↑ ↓ → 로 입력을 받습니다.");
}

// 게임 시간 측정 및, 게임 상태 제어
clock_t prev_t = 0;

void run_ingame() {

    clock_t cur_time = clock();

    ControlT.sync = 1;

    switch (ConGAME) {
    case READY:
        prev_t = cur_time;
        break;
    case RUNNING:
        run_time = clock() - prev_t;
        if (run_time > 30000) {
            ConGAME = RESULT;
        }
        music_note();
        break;
    case PAUSE:
        break;
    case RESULT:
        printf("%s", Scores);
        break;
    }
}

// 판정 및 점수 추가
