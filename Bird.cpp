#include "Bird.h"

Bird::Bird(const LoaderParams* pParams) : SDLGameObject(pParams)
{

}

void Bird::draw()
{
  SDLGameObject::draw();
}

void Bird::update()
{
  SDLGameObject::update();
  m_currentFrame = ((SDL_GetTicks()/100) % 2);

  if(m_position.getX() <= 0)
  {
    m_velosity.setX(1);
  }
  else if(m_position.getX()+100>=640)
  {
    m_velosity.setX(-1);
  }

    if(m_position.getY() <= 0)
  {
    m_velosity.setY(1);
  }
  else if(m_position.getY()+50>=480)
  {
    m_velosity.setY(-1);
  }



  
}

void Bird::clean() {}