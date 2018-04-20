#include "appartment.h"


Appartment::Appartment(int w):Property::Property(w)
{

}

 double Appartment::tax()
{
    return (double)worth/1000;
}
