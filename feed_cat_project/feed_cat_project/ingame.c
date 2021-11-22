#include "ingame.h"

// �� �� ����
int score_a = 0;
int combo_a = 0;
extern int cu;
// ���� �ð�
char Time[20];
// ����
char Scores[20];
//�޺�
char Combos[20];

// ������� ����
clock_t prev_tA = 0;

void ingame_draw() {

    clock_t cur_time = clock();

    system("cls");
    map_display();
    score();
    
    switch (ConGAME) {
    case READY:
        prev_tA = cur_time;
        if (cur_time % 1000 > 500) {
            ReadyMap1();
        }
        break;
    case PAUSE:
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

void ReadyMap1() {
    cursor_coordinate(10, 15);
    printf("Press Enter to Start");
}

// ��Ʈ�� �������� ������ �׸�
void map_display() {

    cursor_coordinate(0, 0);
    printf("��������������������������");
    for (int i = 1; i < 33; i++) {
        cursor_coordinate(0, i);
        printf("��\t\t\t\t\t\t��");
    }
    cursor_coordinate(0, 32);
    printf("��������������������������");
    cursor_coordinate(2, 28);
    printf("______________________________________________");
}

void score() {

	// ���� �ð�
	sprintf(Time, "TIME : %d.%dsec", run_time / 1000, run_time % 1000);
    cursor_coordinate(60, 7);
    printf("%s", Time);
	// ����
	sprintf(Scores, "SCORE : %d", score_a);
    cursor_coordinate(60, 9);
    printf("%s", Scores);
	//�޺�
	sprintf(Combos, "%d COMBO", combo_a);
    cursor_coordinate(60, 11);
    printf("%s", Combos);
}

// ���� �ð� ���� ��, ���� ���� ����
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