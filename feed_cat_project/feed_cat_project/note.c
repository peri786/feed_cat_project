#include "note.h"

char* nKeyNone = "                                      ";
char* nKeyL = "                                ■■■";
char* nKeyK = "                          ■■■";
char* nKeyJ = "                    ■■■";
char* nKeyD = "            ■■■";
char* nKeyS = "      ■■■";
char* nKeyA = "■■■";
char* nKeyAJ = "■■■              ■■■";
char* nKeySK = "      ■■■              ■■■";
char* nKeyDL = "            ■■■              ■■■";

char* Note[ALLNOTE] = { NULL, };

// 2차원 배열을 아래로 떨어지게끔 해주는 함수
char* Check;
char* Check1;
char* Check2;
void ShowNote(int n) {
	for (int i = 0; i < 28; i++) {
		ScreenPrint(2, i + 1, Note[27 - i + n]);
	}
	Check = Note[n];   // 2차원배열 0.5초마다 Note의 배열 중  28행에 떨어지는 값을 저장받는다. 
	Check1 = Note[n - 1]; // 0.5초 지난 후 입력받더라도 great으로 인정해주는 부분
	Check2 = Note[n + 1];
}
