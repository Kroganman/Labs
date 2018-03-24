#include <cmath>

using namespace std;

class Vector
{
public:

    float x,y,modul;

    void setModul(float x1,float y1)
    {
        modul=sqrt(x1*x1+y1*y1);
    }

    float getModul()
    {
        return modul;
    }

    void setAdd(float x1,float y1,float x2,float y2)
    {
        x=x1+x2;
        y=y1+y2;
    }

    void setSub(float x1,float y1,float x2,float y2)
    {
        x=x1-x2;
        y=y1-y2;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};
