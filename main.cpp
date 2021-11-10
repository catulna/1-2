#include "Game.h"

Game* g_game = 0;
const int FPS = 60;
const int DELAY_TIME = 1000.0f / FPS;

int main(int argc, char* args[])
{
 
   if(TheGame::Instance()->init("Test1-2", 100, 100, 640, 480, false))
   {
     Uint32 frameStart, frameTime;

     while(TheGame::Instance()->running())
     {
       frameStart = SDL_GetTicks();
       TheGame::Instance()->update();
       TheGame::Instance()->render();
       //TheGame::Instance()->handleEvents();
       frameTime = SDL_GetTicks() - frameStart;
       if(frameStart < DELAY_TIME)
       {
         SDL_Delay((int)(DELAY_TIME - frameTime));
       }
     }
     
   }

   TheGame::Instance()->clean();
    return 0;
}