#include "ingame.h"

// ��Ʈ ������ �迭
char* Note[NOTES];

// �׿� ����
int cu = 0;
char* checked;
char* checked_a;
char* checked_b;

// ��Ʈ ���
char* LE_key = " �����";
char* UP_key = "        �����";
char* DO_key = "              �����";
char* RI_key = "                    ����� ";
char* none_key = "                         ";

// ��Ʈ�� ���
void note_draw(int cu) {
	for (int i = 0; i < 30; i++) {
		cursor_coordinate(2, i + 1);
		printf("%s", Note[29 - i + cu]);
	}
	checked = Note[cu];
	checked_a = Note[cu - 1];
	checked_b = Note[cu + 1];
}

// �Ǻ�
void music_note() {
	for (int i = 0; i < 34; i++) {
		Note[i] = " ";
	}
	//todo
	Note[30] = LE_key;
	Note[40] = UP_key;
	Note[50] = LE_key;
	Note[60] = RI_key;
	Note[70] = DO_key;
	Note[80] = LE_key;
	Note[90] = UP_key;


}

void init_note() {
	ControlT.move_t = 52;
	ControlT.prev_t = 0;
	ControlT.sync = 0;
	music_note();
	for (int i = 0; i < NOTES; i++) {
		Note[i] = " ";
	}
	run_time = 0;
}