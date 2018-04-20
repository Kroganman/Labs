#include "contryhouse.h"

Contryhouse::Contryhouse(int w): Property::Property(w)
{

}
double Contryhouse::tax()
{
    return (double)worth/500;
}
