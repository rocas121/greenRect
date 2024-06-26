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

}

//fermeture fenetre
void Close() {

	SDL_PollEvent(&event);
	if (event.type == SDL_QUIT) {
		Destroy();
	}
}