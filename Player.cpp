#include "Player.h"

Player::Player(const LoaderParams* pParams) : SDLGameObject(pParams)
{

}

void Player::draw()
{
  SDLGameObject::draw();
}

void Player::update()
{
  SDLGameObject::update();
  m_currentFrame = ((SDL_GetTicks()/100) % 4);
}

void Player::clean() {}