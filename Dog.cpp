#include "Dog.h"

int movespeed = 0;


Dog::Dog(const LoaderParams* pParams) : SDLGameObject(pParams)
{
  
}

void Dog::draw()
{
  SDLGameObject::draw();
}

void Dog::update()
{
  SDLGameObject::update();
  m_currentFrame = ((SDL_GetTicks()/100) % 4);

  if(m_position.getX() <= 0)
  {
    m_velosity.setX(1);
  }
  else if(m_position.getX() >= 540)
  {
    m_velosity.setX(-1);
  }
  

}

void Dog::clean() {}