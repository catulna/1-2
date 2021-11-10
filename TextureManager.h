#pragma once

#include "SDL.h"
#include <map>

class TextureManager 
{
   public: //기존 과제 1의 코드 복붙

  bool load(std::string fileName, std::string id, SDL_Renderer* pRenderer);

  void draw(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer,
  SDL_RendererFlip flip = SDL_FLIP_NONE);

  void drawFrame(std::string id, int x, int y, int width, int height, int currentRow, 
  int currentFrame, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

  void drawAngle(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer, int angle, SDL_RendererFlip flip);
  

  static TextureManager* Instance()
  {
    if(s_pInstance == 0)
    {
      s_pInstance = new TextureManager();
    }
    return s_pInstance;
  }

  typedef TextureManager TheTextureManager;

  private:

  TextureManager() {}
  static TextureManager* s_pInstance;
  std::map<std::string, SDL_Texture*>m_textureMap;
};