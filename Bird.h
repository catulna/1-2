#include "SDLGameObject.h"
#include "LoaderParams.h"

class Bird : public SDLGameObject
{
  public:
    Bird(const LoaderParams* pParams);
    virtual void draw();
    virtual void update();
    virtual void clean();
};