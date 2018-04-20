#include "car.h"

Car::Car(int w): Property::Property(w)
{

}
double Car::tax()
{
    return (double)worth/200;
}
