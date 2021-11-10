#ifndef _Game_
#define _Game_

#include "SDL.h"
#include "TextureManager.h"
#include "GameObject.h"
#include <vector>

class Game
{
  public:
    ~Game() {}
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    bool running();
    void handleEvents();
    void clean();
    void Quit() { m_bRunning =  false; }

    static Game* Instance()
    {
      if(s_pInstance == 0)
      {
        s_pInstance = new Game();
        return s_pInstance;
      }
      return s_pInstance;
    }

    SDL_Renderer* getRenderer() const { return m_pRenderer; }
  
  private:
    Game() {}
    int m_currentFrame;
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;
    bool m_bRunning;

    std::vector<GameObject*> m_gameobjects;

    static Game* s_pInstance;
};

typedef Game TheGame;

#endif