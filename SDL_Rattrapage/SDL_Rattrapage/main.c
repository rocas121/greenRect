#include "main.h"

int main(int argc, const char* argv[]) {

	Init(); 
	spawnPlayer();

	while (true) {
		Close();

		gameRender();
		
		movement();

		SDL_RenderPresent(renderer);
	}

	Destroy();
	return 0;
}