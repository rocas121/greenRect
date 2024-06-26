#include "render.h"

//affichage 

//fond
void background() {
	SDL_SetRenderDrawColor(renderer, 70, 70, 70, 255);
	SDL_RenderClear(renderer);

}

//placement rect
void rect() {
	SDL_Rect player = { p.x, p.y,  50, 50 };
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_RenderFillRect(renderer, &player);
}

//placement image
void cat() { 
	meow.x = (width / 2)-(498/2);
	meow.y = (height / 2)-(477 / 2);

	SDL_Rect img = { meow.x, meow.y, 498, 477};
	SDL_RenderCopy(renderer, texture, NULL, &img);
}

//pour tout afficher
void gameRender() {
	background();
	cat();
	rect();
}