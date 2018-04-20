#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "figure.h"
class Quadrilateral : public Figure
{
private:
     double a,b,c,d;
public:
    Quadrilateral(double a,double b,double c,double d);
};

#endif // QUADRILATERAL_H
