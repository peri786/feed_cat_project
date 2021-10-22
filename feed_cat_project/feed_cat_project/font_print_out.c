#include <SDL.h>
#include <SDL_ttf.h>
#include "han2unicode.h"
#include <stdio.h>
#include <stdbool.h>

#pragma comment (lib,"SDL_ttf")

// 외부 변수 호출
extern SDL_Surface* screenSurface;

// 폰트 공간 할당
TTF_Font* font;
SDL_Surface* text;

void DrawSurface(SDL_Surface* dst, int x, int y, SDL_Surface* src) {
	SDL_Rect rectDst;
	rectDst.x = x;
	rectDst.y = y;
	SDL_BlitSurface(src, NULL, dst, &rectDst);
}

void Render() {
	DrawSurface(screenSurface, 0, 0, text);
	SDL_Flip(screenSurface);
}

int game_start_window() {
	font = TTF_OpenFont("c:\\windows\\fonts\\ONE Mobile POP.ttf", 15);

	SDL_Color color;
	color.r = 255;
	color.g = 255;
	color.b = 255;

	unsigned short unicode[128];
	han2unicode("Hello, World", unicode);

	text = TTF_RenderUNICODE_Blended(font, unicode, color);
}

