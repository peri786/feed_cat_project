#include "ingame.h"

// 보드 배열
char board[BOARD_X][BOARD_Y] = { 0 };

// 맵1의 리듬게임 시작
void map_1_ingame() {

    system("cls");
    board_init();
    display();
    
}

// 보드 초기화
void board_init() {

    // 아래 가로
    for (int i = 0; i < BOARD_X; i++) {
        board[BOARD_Y - 1][i] = '_';
    }

    // 공백
    for (int i = 1; i < BOARD_Y - 1; i++) {
        for (int j = 1; j < BOARD_X - 1; j++) {
            board[i][j] = ' ';
        }
    }

    // 좌우 세로
    for (int i = 0; i < BOARD_Y; i++) {
        board[i][0] = board[i][BOARD_X - 1] = '|';
    }
}

// 노트가 떨어지는 공간을 그림
void display() {

    for (int i = 0; i < BOARD_Y; i++) {
        for (int j = 0; j < BOARD_X; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

}