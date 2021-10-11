// SDL2와 표준입출력 헤더 포함
#include <SDL.h>
#include <stdio.h>

#pragma comment (lib,"SDL2")
#pragma comment (lib,"SDL2main")

// 함수 선언
int initialize_window();
int image_load();

// 화면 해상도 전역 상수 설정
const static int SCREEN_WIDTH = 640;
const static int SCREEN_HEIGHT = 480;


// 메인 함수
int main(int argc, char* args[]) {

	initialize_window();
	image_load();
	
	return 0;
}

int image_load() {
	
	SDL_Surface* image = NULL;
	SDL_Surface* screenSurface = NULL;

	// SDL 초기화
	SDL_Init(SDL_INIT_EVERYTHING);

	// 화면 셋업
	screenSurface = SDL_CreateWindow (
		"SDL INIT", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
		SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN
	);

	// 이미지 로드
	image = SDL_LoadBMP("background.bmp");

	// 불러온 이미지를 화면에 뿌림
	SDL_BlitSurface(image, NULL, screenSurface, NULL);

	// 2초간 정지
	SDL_Delay(2000);

	// 불러왔던 이미지를 메모리에서 해제
	SDL_FreeSurface(image);

	// SDL 끝
	SDL_Quit();

	return 0;

}

// 그 외 함수
int initialize_window() {

	// 윈도우 선언 및 초기화
	SDL_Window* window = NULL;

	// 윈도우 표면 선언 및 초기화
	SDL_Surface* screenSurface = NULL;

	// 윈도우 초기화 실패 시 음수 반환
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		// 윈도우 생성
		window = SDL_CreateWindow("SDL INIT", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			// 윈도우 표면 받기
			screenSurface = SDL_GetWindowSurface(window);

			// 표면을 흰색 (R(1), G(1), B(1)) 으로 채우기
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			// 표면 업데이트
			SDL_UpdateWindowSurface(window);

			// 2초 딜레이
			SDL_Delay(2000);
		}
	}
	// 화면 제거
	SDL_DestroyWindow(window);

	// SDL 종료
	SDL_Quit();

	return 0;
}