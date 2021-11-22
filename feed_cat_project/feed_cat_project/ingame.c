#include "ingame.h"

// 시간 변수
clock_t current_time;

// 그 외 변수
int score_a = 0;
int combo_a = 0;

// 맵1의 리듬게임 시작
void map_1_ingame() {

    clock_t Curtime = clock();

    system("cls");
    map_display();
    score();

    Sleep(500);

    sndPlaySound(NULL, SND_ASYNC);   // 선택 화면에서의 음악을 멈춘 후 다시 재생

    Sleep(2000);

    PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);

}

// 노트가 떨어지는 공간을 그림
void map_display() {

    int nNum = 0;
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

	// 시간
	char Time[20];
	sprintf(Time, "TIME : %d.%dsec", current_time / 1000, current_time % 1000);
    cursor_coordinate(60, 7);
    printf("%s", Time);
	// 점수
	char Scores[20];
	sprintf(Scores, "SCORE : %d", score_a);
    cursor_coordinate(60, 9);
    printf("%s", Scores);
	//콤보
	char Combos[20];
	sprintf(Combos, "%d COMBO", combo_a);
    cursor_coordinate(60, 11);
    printf("%s", Combos);
}