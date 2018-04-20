#ifndef APPARTMENT_H
#define APPARTMENT_H
#include "property.h"

class Appartment : public Property
{
public:
    Appartment(int w);
    double tax();
};

#endif // APPARTMENT_H
