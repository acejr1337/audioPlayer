#include <stdio.h>

#include <iostream>

#include <SDL2/SDL.h>

#define PATH_TO_FILE "./res/audioFiles/sound.wav"

int main(char** argv, int argc)
{
    SDL_Init(SDL_INIT_AUDIO);
    
    SDL_AudioSpec audioSpec;
    
    Uint8* audoStart;
    Uint32 audioLength;
    
    if (SDL_LoadWAV(PATH_TO_FILE, &audioSpec, &audioStart, &audioLength) == NULL) {
        std:cerr << "ERROR: " << PATH_TO_FILE << " COULD NOT LOAD PLEASE TRY AGAIN " << std:endl
    }
    std:cout << "PLAYING " << PATH_TO_FILE << std:endl;
    
    SDL_Quit();
    return 0;
}