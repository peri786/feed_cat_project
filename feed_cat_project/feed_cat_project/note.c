#include "ingame.h"

// 노트 포인터 배열
char* Note[NOTES] = { NULL, };

// 그외 변수
int cu = 0;
char* checked;
char* checked_a;
char* checked_b;

// 노트 모양
char* LE_key = "  ■■■■■";
char* UP_key = "             ■■■■■";
char* DO_key = "                     ■■■■■";
char* RI_key = "                            ■■■■■ ";
char* LE_RI_key = "  ■■■■■                     ■■■■■ ";
char* UP_RI_key = "             ■■■■■          ■■■■■ ";
char* LE_DO_key = "  ■■■■■              ■■■■■";
char* none_key = "                         ";

// 노트를 출력
void note_draw(int cu) {
	for (int i = 0; i < 30; i++) {
		cursor_coordinate(2, i + 1);
		printf("%s", Note[29 - i + cu]);
	}
	checked = Note[cu];
	checked_a = Note[cu - 1];
	checked_b = Note[cu + 1];
}

// 악보
void music_note() {
	for (int i = 0; i < 34; i++) {
		Note[i] = " ";
	}
	
	Note[30 + ControlT.sync] = LE_key;
	Note[40 + ControlT.sync] = UP_key;
	Note[50 + ControlT.sync] = LE_key;
	Note[60 + ControlT.sync] = RI_key;
	Note[70 + ControlT.sync] = RI_key;
	Note[80 + ControlT.sync] = RI_key;
	Note[90 + ControlT.sync] = UP_key;
	Note[100 + ControlT.sync] = RI_key;
	Note[110 + ControlT.sync] = DO_key;
	Note[120 + ControlT.sync] = LE_key;
	Note[130 + ControlT.sync] = LE_RI_key;
	Note[140 + ControlT.sync] = LE_RI_key;
	Note[150 + ControlT.sync] = LE_RI_key;
	Note[160 + ControlT.sync] = LE_key;
	Note[170 + ControlT.sync] = LE_RI_key;
	Note[180 + ControlT.sync] = RI_key;
	Note[190 + ControlT.sync] = DO_key;
	Note[200 + ControlT.sync] = LE_key;
	Note[210 + ControlT.sync] = UP_RI_key;
	Note[220 + ControlT.sync] = UP_RI_key;
	Note[230 + ControlT.sync] = UP_RI_key;
	Note[240 + ControlT.sync] = UP_RI_key;
	Note[250 + ControlT.sync] = UP_RI_key;
	Note[260 + ControlT.sync] = LE_key;
	Note[270 + ControlT.sync] = DO_key;
	Note[280 + ControlT.sync] = LE_DO_key;
	Note[290 + ControlT.sync] = UP_key;
	Note[300 + ControlT.sync] = UP_key;
	Note[310 + ControlT.sync] = UP_key;
	Note[320 + ControlT.sync] = UP_key;
}

// 노트 초기화
void init_note() {
	ControlT.move_t = 52;
	ControlT.prev_t = 0;
	ControlT.sync = 0;
	ConGAME = READY;
	music_note();
	for (int i = 0; i < NOTES; i++) {
		Note[i] = " ";
	}
	run_time = 0;

	InputN.note_LE = 2;
	InputN.note_UP = 11;
	InputN.note_DO = 17;
	InputN.note_RI = 24;
	ConGAME = READY;
}