#include "main.h"
#include "note.h"
#include "util.h"
#include <time.h>

// �Լ� ����
void map_display();        // ��Ʈ�� �������� ������ �׸�
void ingame_draw();
void ReadyMap1();
void score();         // �� ���� ������ �޺� ǥ��
void run_ingame();

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
    READY, RUNNING, PAUSE, RESULT
}CONTROLGAME;
CONTROLGAME ConGAME;