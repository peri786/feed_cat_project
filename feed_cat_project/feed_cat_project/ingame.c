#include "ingame.h"

// ���� �迭
wchar_t Board[BOARD_Y][BOARD_X] = { 0 };

// ��1�� ������� ����
void map_1_ingame() {

    system("cls");
    board_init();
    display();

    Sleep(500);

    sndPlaySound(NULL, SND_ASYNC);   // ���� ȭ�鿡���� ������ ���� �� �ٽ� ���

    Sleep(2000);

    PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);
    
}

// ���� �ʱ�ȭ
void board_init() {

    // �Ʒ� ����
    for (int i = 0; i < BOARD_X - 25; i++) {
        Board[BOARD_Y - 1][i] = L'��';
    }

    // ����
    for (int i = 1; i < BOARD_Y - 1; i++) {
        for (int j = 1; j < BOARD_X - 1; j++) {
            if (Board[i] == Board[BOARD_Y - 5])
                continue;
            Board[i][j] = L' ';
        }
    }

    // �¿� ����
    for (int i = 0; i < BOARD_Y; i++) {
        Board[i][0] = Board[i][BOARD_X - 1] = L'��';
    }

    // ��Ʈ�� �Է� �޴� ĭ
    for (int i = 0; i < BOARD_X - 26; i++) {
        Board[BOARD_Y - 5][i + 1] = L'��';
    }
    Board[BOARD_Y - 3][7] = L'��';
    Board[BOARD_Y - 3][17] = L'��';
    Board[BOARD_Y - 3][28] = L'��';
    Board[BOARD_Y - 3][38] = L'��';
    Board[BOARD_Y - 3][49] = L' ';
    Board[BOARD_Y - 3][45] = L'��';
}

// ��Ʈ�� �������� ������ �׸�
void display() {

    for (int i = 0; i < BOARD_Y; i++) {
        for (int j = 0; j < BOARD_X; j++) {
            setlocale(LC_ALL, "KOREAN");
            wprintf(L"%c", Board[i][j]);
        }
        printf("\n");
    }

}