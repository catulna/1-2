#include "Sun.h"

Sun::Sun(const LoaderParams* pParams) : SDLGameObject(pParams)
{

}

void Sun::draw()
{
  SDLGameObject::draw();
}

void Sun::update()
{
  SDLGameObject::update();
  m_currentFrame = ((SDL_GetTicks()/100) % 1);
}

void Sun::clean() {}