#include "SDLGameObject.h"
#include "LoaderParams.h"

class Dog : public SDLGameObject
{
  public:
    Dog(const LoaderParams* pParams);
    virtual void draw();
    virtual void update();
    virtual void clean();
};