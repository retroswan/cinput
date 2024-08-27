#include <SDL2/SDL.h>
#include <Cinput/Cinput.h>

int main(void)
{
    SDL_Init(0);
    
    SDL_Log("Hello, world!\n");
    
    SDL_Log("Goodbye, world!\n");
    
    SDL_Quit();
    
    return 0;
}
