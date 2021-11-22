#include <string.h>
#include <ctype.h>

#define NOTES 1000

// 함수 선언
void note_draw(int cu);
void music_note();
void init_note();

// 노트가 눌렸는지 확인
typedef struct _NOTEINPUT {
	int note_LE;
	int note_UP;
	int note_DO;
	int note_RI;
}NOTEINPUT;
NOTEINPUT InputN;