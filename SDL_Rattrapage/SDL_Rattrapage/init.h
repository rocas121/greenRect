#include <SDL.h>
#include <SDL_image.h>

//parametre fenetre
int width;
int height;
int posx;
int posy;
int shown;

//parametre render
int accelerated;
int vsync;


SDL_Window* window;
SDL_Renderer* renderer;


SDL_Surface* image;
SDL_Texture* texture;

