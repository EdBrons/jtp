#include "engine.h"
#include <iostream>
#include <unistd.h>

#define WIDTH 640
#define HEIGHT 680

Engine::Engine(): window(nullptr) {
}

bool Engine::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }
    window = SDL_CreateWindow( "JTP", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN );
    if(window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }
    sleep(2);
    return true;
}

void Engine::quit() {
    SDL_DestroyWindow(window);
    SDL_Quit();
}
