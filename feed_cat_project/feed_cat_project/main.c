#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>

#define BOARD_X 30 // ����
#define BOARD_Y 20 // ����


char board[BOARD_X][BOARD_Y];


// �Լ� ����
void title();
void initiolize();




void title() {

	printf("\n\n\n\n\n");
	printf(" _______  _______  _______  _______       ______      ___     .___________.    __   __    \n");
	printf("|   ____||   ____||   ____||      \\      /      |    /   \\    |           |   |  | |  | \n");
	printf("|  |__   |  |__   |  |__   |  .--.  |   |  ,----'   /  ^  \\   `---|  |----`   |  | |  |  \n");
	printf("|   __|  |   __|  |   __|  |  |  |  |   |  |       /  /_\\  \\      |  |        |  | |  | \n");
	printf("|  |     |  |____ |  |____ |  '--'  |   |  `----. /  _____  \\     |  |        |__| |__|  \n");
	printf("|__|     |_______||_______||_______/    \\______| /__/     \\__\\    |__|        (__) (__)\n");
}

void initiolize() {


}

// ���� �Լ�
int main() {

	system("mode con cols=110 lines=35");

	title();

	return 0;
}