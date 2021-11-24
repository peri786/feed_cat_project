#include "main.h"
#include "note.h"
#include "util.h"
#include <time.h>

// 함수 선언
void map_display();        // 노트가 떨어지는 공간을 그림
void ingame_draw();
void ready_game();
void ready_gameA();
void score();         // 맵 옆에 점수나 콤보 표시
void record(int score_a);
void run_ingame();
void judge_LE();
void judge_UP();
void judge_DO();
void judge_RI();
void map_1_music();

// 시간 변수
clock_t run_time;

// 시간을 조절
typedef struct  CONTROL {
    clock_t move_t; // 싱크 맞춤 시간
    clock_t prev_t; // 이전 시간
    int sync; // 싱크 조율
}CONTROL;
CONTROL ControlT;

// 게임 상태
typedef enum _CONTROLGAME {
    SET, RUNNING, STOP, RESULT
}CONTROLGAME;
CONTROLGAME ConGAME;