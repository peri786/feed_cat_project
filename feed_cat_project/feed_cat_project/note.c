#include "note.h"

char* nKeyNone = "                                      ";
char* nKeyL = "                                ����";
char* nKeyK = "                          ����";
char* nKeyJ = "                    ����";
char* nKeyD = "            ����";
char* nKeyS = "      ����";
char* nKeyA = "����";

char* Note[ALLNOTE] = { NULL, };

void NoteCheck(void) {
	Note[29] = nKeyL;
	Note[30] = nKeyD;
	Note[31] = nKeyL;
	Note[32] = nKeyS;
	Note[33] = nKeyL;
	Note[34] = nKeyD;
	Note[35] = nKeyL;
	Note[36] = nKeyS;
}

void ShowNote(int n) {
	for (int i = 0; i < 28; i++) {
		ScreenPrint(2, i + 1, Note[27 - i + n]);
	}
}
