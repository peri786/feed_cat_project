#include <string.h>
#include <ctype.h>

#define NOTES 1000

// �Լ� ����
void note_draw(int cu);
void music_note();
void init_note();

// ��Ʈ�� ���ȴ��� Ȯ��
typedef struct _NOTEINPUT {
	int note_LE;
	int note_UP;
	int note_DO;
	int note_RI;
}NOTEINPUT;
NOTEINPUT InputN;