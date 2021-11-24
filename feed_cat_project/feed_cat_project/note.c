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
char* DO_key = "                       ■■■■■";
char* RI_key = "                                ■■■■■ ";
//char* none_key = "                                      ";

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
	Note[50 + ControlT.sync] = UP_key;
	Note[60 + ControlT.sync] = DO_key;
	Note[70 + ControlT.sync] = RI_key;
	Note[71 + ControlT.sync] = RI_key;
	Note[72 + ControlT.sync] = RI_key;
	Note[73 + ControlT.sync] = RI_key;
	Note[74 + ControlT.sync] = RI_key;
	Note[75 + ControlT.sync] = RI_key;
	Note[80 + ControlT.sync] = UP_key;
	Note[85 + ControlT.sync] = RI_key;
	Note[88 + ControlT.sync] = DO_key;
	Note[92 + ControlT.sync] = LE_key;

	Note[94 + ControlT.sync] = LE_key;
	Note[95 + ControlT.sync] = UP_key;
	Note[97 + ControlT.sync] = UP_key;
	Note[100 + ControlT.sync] = DO_key;
	Note[105 + ControlT.sync] = RI_key;
	Note[103 + ControlT.sync] = RI_key;
	Note[104 + ControlT.sync] = RI_key;
	Note[107 + ControlT.sync] = RI_key;
	Note[112 + ControlT.sync] = RI_key;
	Note[115 + ControlT.sync] = RI_key;
	Note[117 + ControlT.sync] = UP_key;
	Note[121 + ControlT.sync] = RI_key;
	Note[125 + ControlT.sync] = DO_key;
	Note[130 + ControlT.sync] = LE_key;

	Note[134 + ControlT.sync] = LE_key;
	Note[137 + ControlT.sync] = UP_key;
	Note[138 + ControlT.sync] = UP_key;
	Note[139 + ControlT.sync] = DO_key;
	Note[142 + ControlT.sync] = RI_key;
	Note[145 + ControlT.sync] = RI_key;
	Note[147 + ControlT.sync] = RI_key;
	Note[148 + ControlT.sync] = RI_key;
	Note[149 + ControlT.sync] = RI_key;
	Note[150 + ControlT.sync] = RI_key;
	Note[155 + ControlT.sync] = UP_key;
	Note[157 + ControlT.sync] = RI_key;
	Note[160 + ControlT.sync] = DO_key;
	Note[161 + ControlT.sync] = LE_key;

	Note[164 + ControlT.sync] = LE_key;
	Note[165 + ControlT.sync] = UP_key;
	Note[167 + ControlT.sync] = UP_key;
	Note[170 + ControlT.sync] = DO_key;
	Note[173 + ControlT.sync] = RI_key;
	Note[174 + ControlT.sync] = RI_key;
	Note[176 + ControlT.sync] = RI_key;
	Note[177 + ControlT.sync] = RI_key;
	Note[178 + ControlT.sync] = RI_key;
	Note[179 + ControlT.sync] = RI_key;
	Note[182 + ControlT.sync] = UP_key;
	Note[184 + ControlT.sync] = RI_key;
	Note[186 + ControlT.sync] = DO_key;
	Note[188 + ControlT.sync] = LE_key;

	Note[189 + ControlT.sync] = LE_key;
	Note[192 + ControlT.sync] = UP_key;
	Note[195 + ControlT.sync] = UP_key;
	Note[197 + ControlT.sync] = DO_key;
	Note[199 + ControlT.sync] = RI_key;
	Note[202 + ControlT.sync] = RI_key;
	Note[205 + ControlT.sync] = RI_key;
	Note[210 + ControlT.sync] = RI_key;
	Note[214 + ControlT.sync] = RI_key;
	Note[217 + ControlT.sync] = RI_key;
	Note[220 + ControlT.sync] = UP_key;
	Note[222 + ControlT.sync] = RI_key;
	Note[223 + ControlT.sync] = DO_key;
	Note[227 + ControlT.sync] = LE_key;

	Note[230 + ControlT.sync] = RI_key;
	Note[235 + ControlT.sync] = RI_key;
	Note[240 + ControlT.sync] = RI_key;
	Note[243 + ControlT.sync] = UP_key;
	Note[247 + ControlT.sync] = RI_key;
	Note[250 + ControlT.sync] = DO_key;
	Note[254 + ControlT.sync] = LE_key;
	Note[255 + ControlT.sync] = LE_key;
	Note[256 + ControlT.sync] = LE_key;
	Note[257 + ControlT.sync] = LE_key;
	Note[258 + ControlT.sync] = LE_key;
	Note[263 + ControlT.sync] = RI_key;
	Note[266 + ControlT.sync] = RI_key;
	Note[270 + ControlT.sync] = RI_key;

	Note[275 + ControlT.sync] = DO_key;
	Note[276 + ControlT.sync] = DO_key;
	Note[277 + ControlT.sync] = DO_key;
	Note[278 + ControlT.sync] = DO_key;
	Note[280 + ControlT.sync] = RI_key;
	Note[283 + ControlT.sync] = DO_key;
	Note[288 + ControlT.sync] = LE_key;
	Note[289 + ControlT.sync] = LE_key;
	Note[295 + ControlT.sync] = UP_key;
	Note[300 + ControlT.sync] = LE_key;
	Note[301 + ControlT.sync] = LE_key;
	Note[305 + ControlT.sync] = DO_key;
	Note[310 + ControlT.sync] = UP_key;
	Note[312 + ControlT.sync] = RI_key;

	Note[315 + ControlT.sync] = DO_key;
	Note[320 + ControlT.sync] = RI_key;
	Note[323 + ControlT.sync] = RI_key;
	Note[325 + ControlT.sync] = DO_key;
	Note[330 + ControlT.sync] = LE_key;
	Note[334 + ControlT.sync] = LE_key;
	Note[337 + ControlT.sync] = RI_key;
	Note[340 + ControlT.sync] = DO_key;
	Note[345 + ControlT.sync] = LE_key;
	Note[349 + ControlT.sync] = DO_key;
	Note[351 + ControlT.sync] = UP_key;
	Note[353 + ControlT.sync] = RI_key;
	Note[357 + ControlT.sync] = DO_key;
	Note[360 + ControlT.sync] = RI_key;
	Note[365 + ControlT.sync] = DO_key;

	Note[370 + ControlT.sync] = LE_key;
	Note[373 + ControlT.sync] = LE_key;
	Note[376 + ControlT.sync] = UP_key;
	Note[380 + ControlT.sync] = LE_key;
	Note[382 + ControlT.sync] = LE_key;
	Note[386 + ControlT.sync] = DO_key;
	Note[389 + ControlT.sync] = UP_key;
	Note[392 + ControlT.sync] = RI_key;
	Note[395 + ControlT.sync] = DO_key;
	Note[400 + ControlT.sync] = RI_key;
	Note[405 + ControlT.sync] = RI_key;
	Note[410 + ControlT.sync] = DO_key;
	Note[412 + ControlT.sync] = LE_key;
	Note[416 + ControlT.sync] = LE_key;
	Note[420 + ControlT.sync] = RI_key;

	Note[425 + ControlT.sync] = LE_key;
	Note[426 + ControlT.sync] = LE_key;
	Note[427 + ControlT.sync] = LE_key;
	Note[428 + ControlT.sync] = LE_key;
	Note[435 + ControlT.sync] = RI_key;
	Note[437 + ControlT.sync] = RI_key;
	Note[439 + ControlT.sync] = RI_key;
	Note[441 + ControlT.sync] = RI_key;
	Note[443 + ControlT.sync] = RI_key;
	Note[444 + ControlT.sync] = RI_key;
	Note[450 + ControlT.sync] = DO_key;
	Note[451 + ControlT.sync] = DO_key;
	Note[452 + ControlT.sync] = DO_key;
	Note[453 + ControlT.sync] = DO_key;

	Note[458 + ControlT.sync] = DO_key;
	Note[460 + ControlT.sync] = LE_key;
	Note[465 + ControlT.sync] = DO_key;
	Note[470 + ControlT.sync] = UP_key;
	Note[476 + ControlT.sync] = RI_key;
	Note[478 + ControlT.sync] = DO_key;
	Note[482 + ControlT.sync] = RI_key;
	Note[485 + ControlT.sync] = DO_key;
	Note[487 + ControlT.sync] = LE_key;
	Note[489 + ControlT.sync] = LE_key;
	Note[493 + ControlT.sync] = UP_key;
	Note[496 + ControlT.sync] = LE_key;
	Note[497 + ControlT.sync] = LE_key;
	Note[500 + ControlT.sync] = DO_key;
	Note[505 + ControlT.sync] = UP_key;
	Note[507 + ControlT.sync] = RI_key;

	Note[510 + ControlT.sync] = DO_key;
	Note[515 + ControlT.sync] = RI_key;
	Note[517 + ControlT.sync] = DO_key;
	Note[520 + ControlT.sync] = LE_key;
	Note[523 + ControlT.sync] = LE_key;
	Note[528 + ControlT.sync] = UP_key;
	Note[530 + ControlT.sync] = LE_key;
	Note[531 + ControlT.sync] = LE_key;
	Note[535 + ControlT.sync] = DO_key;
	Note[540 + ControlT.sync] = UP_key;

	Note[545 + ControlT.sync] = RI_key;
	Note[546 + ControlT.sync] = RI_key;
	Note[547 + ControlT.sync] = RI_key;
	Note[548 + ControlT.sync] = RI_key;
	Note[549 + ControlT.sync] = RI_key;
	Note[553 + ControlT.sync] = DO_key;
	Note[554 + ControlT.sync] = DO_key;
	Note[555 + ControlT.sync] = DO_key;
	Note[556 + ControlT.sync] = DO_key;
	Note[557 + ControlT.sync] = DO_key;
	Note[561 + ControlT.sync] = UP_key;
	Note[562 + ControlT.sync] = UP_key;
	Note[563 + ControlT.sync] = UP_key;
	Note[564 + ControlT.sync] = UP_key;
	Note[565 + ControlT.sync] = UP_key;
	Note[566 + ControlT.sync] = UP_key;
	Note[567 + ControlT.sync] = UP_key;

	Note[570 + ControlT.sync] = RI_key;
	Note[571 + ControlT.sync] = RI_key;
	Note[572 + ControlT.sync] = RI_key;
	Note[573 + ControlT.sync] = RI_key;
	Note[574 + ControlT.sync] = RI_key;
	Note[575 + ControlT.sync] = RI_key;
	Note[576 + ControlT.sync] = RI_key;
	Note[577 + ControlT.sync] = RI_key;
	Note[579 + ControlT.sync] = LE_key;
	Note[580 + ControlT.sync] = LE_key;
	Note[581 + ControlT.sync] = LE_key;
	Note[583 + ControlT.sync] = LE_key;
	Note[584 + ControlT.sync] = LE_key;
	Note[585 + ControlT.sync] = LE_key;
	Note[586 + ControlT.sync] = LE_key;
	Note[587 + ControlT.sync] = LE_key;
	Note[589 + ControlT.sync] = UP_key;
	Note[590 + ControlT.sync] = UP_key;
	Note[591 + ControlT.sync] = UP_key;
	Note[592 + ControlT.sync] = UP_key;
	Note[593 + ControlT.sync] = UP_key;
	Note[597 + ControlT.sync] = UP_key;
	Note[598 + ControlT.sync] = UP_key;
	Note[599 + ControlT.sync] = DO_key;
	Note[601 + ControlT.sync] = DO_key;
	Note[602 + ControlT.sync] = DO_key;
	Note[604 + ControlT.sync] = LE_key;
	Note[605 + ControlT.sync] = LE_key;
	Note[606 + ControlT.sync] = LE_key;
	Note[607 + ControlT.sync] = LE_key;
	Note[608 + ControlT.sync] = LE_key;
	Note[609 + ControlT.sync] = LE_key;
	Note[610 + ControlT.sync] = LE_key;
	Note[611 + ControlT.sync] = LE_key;
	Note[612 + ControlT.sync] = LE_key;
	Note[613 + ControlT.sync] = LE_key;
	Note[614 + ControlT.sync] = LE_key;
	Note[615 + ControlT.sync] = LE_key;
	Note[620 + ControlT.sync] = DO_key;
	Note[621 + ControlT.sync] = DO_key;
	Note[622 + ControlT.sync] = DO_key;
	Note[623 + ControlT.sync] = DO_key;
	Note[624 + ControlT.sync] = DO_key;

	Note[630 + ControlT.sync] = DO_key;
	Note[634 + ControlT.sync] = UP_key;
	Note[635 + ControlT.sync] = RI_key;
	Note[637 + ControlT.sync] = DO_key;
	Note[640 + ControlT.sync] = RI_key;
	Note[645 + ControlT.sync] = RI_key;
	Note[647 + ControlT.sync] = DO_key;
	Note[649 + ControlT.sync] = LE_key;
	Note[651 + ControlT.sync] = LE_key;
	Note[653 + ControlT.sync] = RI_key;
	Note[657 + ControlT.sync] = LE_key;
	Note[660 + ControlT.sync] = LE_key;
	Note[661 + ControlT.sync] = LE_key;
	Note[661 + ControlT.sync] = LE_key;
	Note[663 + ControlT.sync] = LE_key;
	Note[664 + ControlT.sync] = LE_key;
	Note[665 + ControlT.sync] = LE_key;
	Note[666 + ControlT.sync] = LE_key;

	Note[670 + ControlT.sync] = DO_key;
	Note[672 + ControlT.sync] = DO_key;
	Note[675 + ControlT.sync] = RI_key;
	Note[677 + ControlT.sync] = DO_key;
	Note[678 + ControlT.sync] = LE_key;
	Note[680 + ControlT.sync] = LE_key;
	Note[682 + ControlT.sync] = UP_key;
	Note[684 + ControlT.sync] = DO_key;
	Note[687 + ControlT.sync] = DO_key;
	Note[690 + ControlT.sync] = RI_key;
	Note[691 + ControlT.sync] = DO_key;
	Note[693 + ControlT.sync] = LE_key;
	Note[694 + ControlT.sync] = LE_key;
	Note[697 + ControlT.sync] = UP_key;
	Note[699 + ControlT.sync] = LE_key;
	Note[702 + ControlT.sync] = DO_key;
	Note[705 + ControlT.sync] = LE_key;
	Note[710 + ControlT.sync] = LE_key;
	Note[711 + ControlT.sync] = UP_key;
	Note[713 + ControlT.sync] = LE_key;

	Note[715 + ControlT.sync] = RI_key;
	Note[720 + ControlT.sync] = DO_key;
	Note[723 + ControlT.sync] = LE_key;
	Note[726 + ControlT.sync] = DO_key;
	Note[727 + ControlT.sync] = RI_key;
	Note[730 + ControlT.sync] = DO_key;
	Note[732 + ControlT.sync] = LE_key;
	Note[733 + ControlT.sync] = LE_key;
	Note[734 + ControlT.sync] = DO_key;
	Note[736 + ControlT.sync] = LE_key;
	Note[738 + ControlT.sync] = UP_key;
	Note[739 + ControlT.sync] = LE_key;
	Note[740 + ControlT.sync] = LE_key;
	Note[742 + ControlT.sync] = DO_key;
	Note[745 + ControlT.sync] = UP_key;
	Note[750 + ControlT.sync] = LE_key;
	Note[752 + ControlT.sync] = LE_key;
	Note[753 + ControlT.sync] = DO_key;
}

// 노트 초기화
void init_note() {
	ControlT.move_t = 52;
	ControlT.prev_t = 0;
	ControlT.sync = 0;
	ConGAME = SET;
	music_note();
	for (int i = 0; i < NOTES; i++) {
		Note[i] = " ";
	}
	run_time = 0;

	InputN.note_LE = 6;
	InputN.note_UP = 17;
	InputN.note_DO = 27;
	InputN.note_RI = 36;
	ConGAME = SET;
}