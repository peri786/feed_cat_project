#include "ingame.h"

// 보드 배열
wchar_t Board[BOARD_Y][BOARD_X] = { 0 };

// 맵1의 리듬게임 시작
void map_1_ingame() {

    system("cls");
    board_init();
    display();

    Sleep(500);

    sndPlaySound(NULL, SND_ASYNC);   // 선택 화면에서의 음악을 멈춘 후 다시 재생

    Sleep(2000);

    PlaySound(TEXT("map_1.wav"), NULL, SND_ASYNC | SND_LOOP);
    
}

// 보드 초기화
void board_init() {

    // 아래 가로
    for (int i = 0; i < BOARD_X - 25; i++) {
        Board[BOARD_Y - 1][i] = L'□';
    }

    // 공백
    for (int i = 1; i < BOARD_Y - 1; i++) {
        for (int j = 1; j < BOARD_X - 1; j++) {
            if (Board[i] == Board[BOARD_Y - 5])
                continue;
            Board[i][j] = L' ';
        }
    }

    // 좌우 세로
    for (int i = 0; i < BOARD_Y; i++) {
        Board[i][0] = Board[i][BOARD_X - 1] = L'■';
    }

    // 노트를 입력 받는 칸
    for (int i = 0; i < BOARD_X - 26; i++) {
        Board[BOARD_Y - 5][i + 1] = L'□';
    }
    Board[BOARD_Y - 3][7] = L'←';
    Board[BOARD_Y - 3][17] = L'↑';
    Board[BOARD_Y - 3][28] = L'↓';
    Board[BOARD_Y - 3][38] = L'→';
    Board[BOARD_Y - 3][49] = L' ';
    Board[BOARD_Y - 3][45] = L'■';
}

// 노트가 떨어지는 공간을 그림
void display() {

    for (int i = 0; i < BOARD_Y; i++) {
        for (int j = 0; j < BOARD_X; j++) {
            setlocale(LC_ALL, "KOREAN");
            wprintf(L"%c", Board[i][j]);
        }
        printf("\n");
    }

}