#include "init.h"

//window

width = 800;
height = 600;
posx = SDL_WINDOWPOS_CENTERED;
posy = SDL_WINDOWPOS_CENTERED;
shown = SDL_WINDOW_SHOWN;

accelerated = SDL_RENDERER_ACCELERATED;
vsync = SDL_RENDERER_PRESENTVSYNC;

//init
void Init() {

	window = SDL_CreateWindow("SDL Project", posx, posy, width, height, shown);

	renderer = SDL_CreateRenderer(window, -1, accelerated | vsync);


	image = SDL_LoadBMP("cat.bmp");
	texture = SDL_CreateTextureFromSurface(renderer, image);
}


//destruction apres boucle
void Destroy() {

	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

