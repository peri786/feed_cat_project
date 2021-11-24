#include "main.h"
#include "note.h"
#include "util.h"
#include <time.h>

// �Լ� ����
void map_display();        // ��Ʈ�� �������� ������ �׸�
void ingame_draw();
void ready_game();
void ready_gameA();
void score();         // �� ���� ������ �޺� ǥ��
void record(int score_a);
void run_ingame();
void judge_LE();
void judge_UP();
void judge_DO();
void judge_RI();
void map_1_music();

// �ð� ����
clock_t run_time;

// �ð��� ����
typedef struct  CONTROL {
    clock_t move_t; // ��ũ ���� �ð�
    clock_t prev_t; // ���� �ð�
    int sync; // ��ũ ����
}CONTROL;
CONTROL ControlT;

// ���� ����
typedef enum _CONTROLGAME {
    SET, RUNNING, STOP, RESULT
}CONTROLGAME;
CONTROLGAME ConGAME;