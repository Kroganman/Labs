#include <cmath>

using namespace std;

class Complex
{
public:
    float re,im,modul,sin;

    void setData(float real,float imag)
    {
        modul = sqrt(real*real + imag*imag);
        sin = real/modul;
    }

    float getModul()
    {
        return modul;
    }

    float getSin()
    {
        return sin;
    }
};
