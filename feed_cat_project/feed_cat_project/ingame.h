#include "main.h"
#include "util.h"
#include <time.h>

// 보드의 좌표
#define BOARD_X 50
#define BOARD_Y 60

// 함수 선언
void map_display();        // 노트가 떨어지는 공간을 그림
void map_1_ingame();
void score();         // 맵 옆에 점수나 콤보 표시
