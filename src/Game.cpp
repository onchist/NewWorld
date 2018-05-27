#include "Game.h"

Game::Game(){
        SDL_Init(SDL_INIT_EVERYTHING);
        display = new Display("lel", 100, 100);
        running = true;
}

void Game::run(){
        loop();
}

void Game::loop(){
        while(running){
                processEvents();
                display->swapBuffers();
                SDL_Delay(40);
        }
}

void Game::processEvents(){
        SDL_Event e;
        while(SDL_PollEvent(&e)){
                switch(e.type){
                        case SDL_QUIT:
                        running = false;
                        break;
                }
        }
}
