#include <SDL.h>
#include <SDL_ttf.h>
#include "han2unicode.h"
#include <stdio.h>
#include <stdbool.h>

#pragma comment (lib,"SDL2_ttf")

// 폰트 공간 할당
TTF_Font* font;
SDL_Surface* text;

void DrawSurface(SDL_Surface* dst, int x, int y, SDL_Surface* src) {
	SDL_Rect rectDst;
	rectDst.x = x;
	rectDst.y = y;
	SDL_BlitSurface(src, NULL, dst, &rectDst);
}

void DrawSprite(SDL_Surface* screen, int x, int y, SDL_Surface* surface, int w, int h, int step) {
	SDL_Rect rectDst, rectSrc;
	rectDst.x = x;
	rectDst.y = y;
	rectSrc.x = (step % w) * surface->w / w;
	rectSrc.y = (step / w) * surface->h / h;
	rectSrc.w = surface->w / w;
	rectSrc.h = surface->h / h;
	SDL_BlitSurface(surface, &rectSrc, screen, &rectDst);
};

int game_start_window() {
	font = TTF_OpenFont("c:\\windows\\fonts\\ONE Mobile POP.ttf", 15);

	SDL_Color color;
	color.r = 255;
	color.g = 255;
	color.b = 255;

	unsigned short unicode[128];
	han2unicode("게임 시작", unicode);

	text = TTF_RenderUNICODE_Blended(font, unicode, color);

	return 0;
}

