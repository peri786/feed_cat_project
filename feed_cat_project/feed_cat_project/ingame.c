#include "ingame.h"

// �ð� ����
clock_t current_time;

// �� �� ����
int score_a = 0;
int combo_a = 0;

// ��1�� ������� ����
void map_1_ingame() {

    clock_t Curtime = clock();

    system("cls");
    map_display();
    score();

    Sleep(500);

    sndPlaySound(NULL, SND_ASYNC);   // ���� ȭ�鿡���� ������ ���� �� �ٽ� ���

    Sleep(2000);

    PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);

}

// ��Ʈ�� �������� ������ �׸�
void map_display() {

    int nNum = 0;
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

	// �ð�
	char Time[20];
	sprintf(Time, "TIME : %d.%dsec", current_time / 1000, current_time % 1000);
    cursor_coordinate(60, 7);
    printf("%s", Time);
	// ����
	char Scores[20];
	sprintf(Scores, "SCORE : %d", score_a);
    cursor_coordinate(60, 9);
    printf("%s", Scores);
	//�޺�
	char Combos[20];
	sprintf(Combos, "%d COMBO", combo_a);
    cursor_coordinate(60, 11);
    printf("%s", Combos);
}