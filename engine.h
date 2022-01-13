#ifndef __ENGINE_H
#define __ENGINE_H

#include <SDL2/SDL.h>

class Engine {
public:
    SDL_Window *window;

    Engine();
    bool init();
    void quit();
};

#endif
