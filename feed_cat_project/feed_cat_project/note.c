#include "note.h"

char* nKeyNone = "                                      ";
char* nKeyL = "                                ����";
char* nKeyK = "                          ����";
char* nKeyJ = "                    ����";
char* nKeyD = "            ����";
char* nKeyS = "      ����";
char* nKeyA = "����";
char* nKeyAJ = "����              ����";
char* nKeySK = "      ����              ����";
char* nKeyDL = "            ����              ����";

char* Note[ALLNOTE] = { NULL, };

// 2���� �迭�� �Ʒ��� �������Բ� ���ִ� �Լ�
char* Check;
char* Check1;
char* Check2;
void ShowNote(int n) {
	for (int i = 0; i < 28; i++) {
		ScreenPrint(2, i + 1, Note[27 - i + n]);
	}
	Check = Note[n];   // 2�����迭 0.5�ʸ��� Note�� �迭 ��  28�࿡ �������� ���� ����޴´�. 
	Check1 = Note[n - 1]; // 0.5�� ���� �� �Է¹޴��� great���� �������ִ� �κ�
	Check2 = Note[n + 1];
}
