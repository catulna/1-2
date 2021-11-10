#include "SDLGameObject.h"
#include "LoaderParams.h"

class Sun : public SDLGameObject
{
  public:
    Sun(const LoaderParams* pParams);
    virtual void draw();
    virtual void update();
    virtual void clean();
};