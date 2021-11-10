#include "SDLGameObject.h"
#include "Game.h"

SDLGameObject::SDLGameObject(const LoaderParams* pParams)
:GameObject(pParams), m_position(pParams->getX(), pParams->getY()), m_velosity(0,0), m_accelaration(0, 0)
{
  m_width = pParams->getwidth();
  m_height = pParams->getheight();
  m_textureID = pParams->getTextureID();
  m_currentRow = 0;
  m_currentFrame = 0;
}

void SDLGameObject::update()
{
  m_velosity += m_accelaration;
  m_position += m_velosity;
}

void SDLGameObject::draw()
{
  TextureManager::Instance()->drawFrame(m_textureID, (int)m_position.getX(), (int)m_position.getY(),m_width, m_height, m_currentRow, m_currentFrame, TheGame::Instance()->getRenderer());
}