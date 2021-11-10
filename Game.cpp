#include "Game.h"
#include "SDL_image.h"

Game* Game::s_pInstance = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
      m_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
      if(m_pWindow != 0)
      {
        m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);

        if(m_pRenderer != 0)
        {
          SDL_SetRenderDrawColor(m_pRenderer, 0, 0, 0, 255);
        }
        else
        {
          return false;
        }
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }

    if( !TextureManager::Instance()->load("Assets/Player_final.png", "animate", m_pRenderer))
  {
    return false;
  }
  if( !TextureManager::Instance()->load("Assets/Background_final.png", "Background", m_pRenderer))
  {
    return false;
  }
  if( !TextureManager::Instance()->load("Assets/Dog_final.png", "animate_Dog", m_pRenderer))
  {
    return false;
  }
  if( !TextureManager::Instance()->load("Assets/Sun.png", "Sun", m_pRenderer))
  {
    return false;
  }
  
  if( !TextureManager::Instance()->load("Assets/Bird.png", "Bird", m_pRenderer))
  {
    return false;
  }

    m_gameobjects.push_back(new Background(new LoaderParams(0, 0, 640, 480, "Background")));
    m_gameobjects.push_back(new Player(new LoaderParams(90, 300, 160, 160, "animate")));
    m_gameobjects.push_back(new Dog(new LoaderParams(0, 370, 100, 100, "animate_Dog")));
    m_gameobjects.push_back(new Sun(new LoaderParams(440, 50, 100, 100, "Sun")));
    m_gameobjects.push_back(new Bird(new LoaderParams(0, 0, 100, 100, "Bird")));

    m_bRunning = true;

    return true;
}

void Game::render()
{
  SDL_RenderClear(m_pRenderer);

  for(int i = 0; i < m_gameobjects.size(); i++)
  {
     m_gameobjects[i]->draw();
  }

  SDL_RenderPresent(m_pRenderer);
}

void Game::update()
{
  for(int i = 0; i < m_gameobjects.size(); i++)
  {
     m_gameobjects[i]->update();
  }
}

bool Game::running()
{
  return m_bRunning;
}

void Game::clean()
{
  
}
    