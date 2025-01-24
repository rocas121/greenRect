#include "rect.h"

//interractions

//placement de depart
void spawnPlayer() {
	p.x = width / 2 - 25;
	p.y = height / 2 - 25;
}


//controls clavier
void movement() {

	speed = 25;
	const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

	//X
	if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
		p.x += speed;
	}
	else if (currentKeyStates[SDL_SCANCODE_LEFT]) {
		p.x -= speed;
	}

	//Y
	if (currentKeyStates[SDL_SCANCODE_UP]) { 
		p.y -= speed;
	}
	else if (currentKeyStates[SDL_SCANCODE_DOWN]) {
		p.y += speed;
	}

	if (p.x > width-50) {
		p.x -= speed;
	}
	else if (p.x < 0) {
		p.x += speed;
	}
	if (p.y > height-50) {
		p.y -= speed;
	}
	else if (p.y < 0) {
		p.y += speed;
	}
}

//fermeture fenetre
void Close() {

	SDL_PollEvent(&event);
	if (event.type == SDL_QUIT) {
		Destroy();
	}
}