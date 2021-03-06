#pragma once

class LoaderParams {
  public:
  LoaderParams(int x, int y, int width, int height, std::string textureID) 
  : m_x(x), m_y(y), m_width(width), m_height(height), m_textureID(textureID) {}
  int getX() const { return m_x; }
  int getY() const { return m_y; }
  int getwidth() const { return m_width; }
  int getheight() const { return m_height; }
  std::string getTextureID() const { return m_textureID; }

  private:
  int m_x, m_y, m_height, m_width;
  std::string m_textureID;
  
};