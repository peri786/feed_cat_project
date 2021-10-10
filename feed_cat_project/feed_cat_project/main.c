// SDL2�� ǥ������� ��� ����
#include <SDL.h>
#include <stdio.h>

// �Լ� ����
int initialize_window();

// ȭ�� �ػ� ���� ��� ����
const static int SCREEN_WIDTH = 640;
const static int SCREEN_HEIGHT = 480;

int main(int argc, char* args[]) {

	initialize_window();

	return 0;
}

int initialize_window () {

	// ������ ���� �� �ʱ�ȭ
	SDL_Window* window = NULL;

	// ������ ǥ�� ���� �� �ʱ�ȭ
	SDL_Surface* screenSurface = NULL;

	// ������ �ʱ�ȭ ���� �� ���� ��ȯ
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		// ������ ����
		window = SDL_CreateWindow("SDL INIT", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			// ������ ǥ�� �ޱ�
			screenSurface = SDL_GetWindowSurface(window);

			// ǥ���� ��� (R(1), G(1), B(1)) ���� ä���
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			// ǥ�� ������Ʈ
			SDL_UpdateWindowSurface(window);

			// 2�� ������
			SDL_Delay(2000);
		}
	}
	// ȭ�� ����
	SDL_DestroyWindow(window);

	// SDL ����
	SDL_Quit();

	return 0;
}