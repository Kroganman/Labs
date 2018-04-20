#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "quadrilateral.h"

class Rhombus : public Quadrilateral
{
    double angle;
public:
    Rhombus(double a);
};

#endif // RHOMBUS_H
