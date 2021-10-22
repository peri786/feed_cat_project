// SDL2�� ǥ������� ��� ����
#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>

#pragma comment (lib,"SDL2")
#pragma comment (lib,"SDL2main")

// �Լ� ����
int initialize_window();
SDL_Texture* load_Texture(const char*);
void draw_Texture(SDL_Renderer*, int, int, SDL_Texture*);


// ȭ�� �ػ� ���� ��� ����
const static int SCREEN_WIDTH = 1040;
const static int SCREEN_HEIGHT = 680;

// ������, ������ ǥ�� ���� �� �ʱ�ȭ ���� ����
SDL_Window* window = NULL;
SDL_Renderer* renderer;
SDL_Surface* screenSurface = NULL;


// ���� �Լ�
int main(int argc, char* args[]) {

	initialize_window();
	
	return 0;
}


// �ؽ���(�̹���)�ε�
SDL_Texture* load_Texture(const char* file) {
	SDL_Surface* surface;
	SDL_Texture* texture;

	surface = SDL_LoadBMP(file);
	if (surface == NULL) {
		printf("%s������ ���� �� �����ϴ�.\n", file);
		return NULL;
	}

	texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (texture == NULL) {
		printf("�ؽ��ĸ� ������ �� �����ϴ�.\n");
	}

	SDL_FreeSurface(surface);

	return texture;
}


// �ؽ���(�̹���)��ο�
void draw_Texture(SDL_Renderer* renderer, int x, int y, SDL_Texture* texture) {
	SDL_Rect src, dst;

	src.x = src.y = 0;
	SDL_QueryTexture(texture, NULL, NULL, &src.w, &src.h);

	dst.x = x;
	dst.y = y;
	dst.w = src.w;
	dst.h = src.h;

	SDL_RenderCopy(renderer, texture, &src, &dst);
}

// ȭ�� �ʱ�ȭ �� ����
int initialize_window() {
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(
		"feed_cat",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		SCREEN_WIDTH, SCREEN_HEIGHT,
		0);

	renderer = SDL_CreateRenderer(
		window,
		-1,
		0);

	bool quit = false;
	SDL_Event event;

	SDL_Texture* texture;

	texture = load_Texture("image\\background.bmp");

	while (!quit) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				quit = true;
				break;
			}
		}
		{
			draw_Texture(renderer, 0, 0, texture);
			SDL_RenderPresent(renderer);
		}
		SDL_Delay(1);
	}

	SDL_DestroyTexture(texture);

	SDL_Quit();
	return 0;
}
