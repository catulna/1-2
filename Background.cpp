#include "Background.h"

Background::Background(const LoaderParams* pParams) : SDLGameObject(pParams)
{

}

void Background::draw()
{
  SDLGameObject::draw();
}

void Background::update()
{
  SDLGameObject::update();
  m_currentFrame = ((SDL_GetTicks()/100) % 1);
}

void Background::clean() {}