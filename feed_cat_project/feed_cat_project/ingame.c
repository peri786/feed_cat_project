#include "ingame.h"

// ���� �迭
char board[BOARD_X][BOARD_Y] = { 0 };

// ��1�� ������� ����
void map_1_ingame() {

    system("cls");
    board_init();
    display();
    
}

// ���� �ʱ�ȭ
void board_init() {

    // �Ʒ� ����
    for (int i = 0; i < BOARD_X; i++) {
        board[BOARD_Y - 1][i] = '_';
    }

    // ����
    for (int i = 1; i < BOARD_Y - 1; i++) {
        for (int j = 1; j < BOARD_X - 1; j++) {
            board[i][j] = ' ';
        }
    }

    // �¿� ����
    for (int i = 0; i < BOARD_Y; i++) {
        board[i][0] = board[i][BOARD_X - 1] = '|';
    }
}

// ��Ʈ�� �������� ������ �׸�
void display() {

    for (int i = 0; i < BOARD_Y; i++) {
        for (int j = 0; j < BOARD_X; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

}