#ifndef CAR_H
#define CAR_H
#include "property.h"

class Car : public Property
{
public:
    Car(int w);
    double tax();
};

#endif // CAR_H
