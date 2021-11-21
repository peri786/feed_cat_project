#include "note.h"

char* nKeyNone = "                                      ";
char* nKeyL = "                                ¡á¡á¡á";
char* nKeyK = "                          ¡á¡á¡á";
char* nKeyJ = "                    ¡á¡á¡á";
char* nKeyD = "            ¡á¡á¡á";
char* nKeyS = "      ¡á¡á¡á";
char* nKeyA = "¡á¡á¡á";

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
