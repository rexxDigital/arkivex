#include "SDL2/SDL_events.h"
#include "SDL2/SDL_video.h"
#include <stdio.h>
#include <SDL2/SDL.h>
#include <GL/gl.h>

int main(int argc, char** argv) {
  if(SDL_Init(SDL_INIT_VIDEO) < 0) {
    return -1;
  }

  SDL_Window *window = SDL_CreateWindow("Arkivex", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 680, 480, 0);

  if(!window) {
    printf("MRREOW");
    return -1;
  }

  SDL_Surface *window_surface = SDL_GetWindowSurface(window);

  if(!window_surface)
  {
    printf("Did not work");
    return -1;
  }
  
  int isOn = 1;
  SDL_Event e;
  while(isOn) {
    while(SDL_PollEvent(&e) > 0) {
      switch (e.type) {
      case SDL_QUIT:
        isOn = 0;
      }
    }

    SDL_UpdateWindowSurface(window);
  }

  return 0;
}
