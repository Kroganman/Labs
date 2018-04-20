#include <iostream>
#include "rhombus.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include "figure.h"



using namespace std;




Figure::Figure()
{

}

Quadrilateral::Quadrilateral(double a,double b,double c,double d):a(a),b(b),c(c),d(d)
{

}

Rectangle::Rectangle(double a,double b):Quadrilateral::Quadrilateral(a,b,a,b)
{

}


Rhombus::Rhombus(double a):Quadrilateral::Quadrilateral(a,a,a,a)
{

}



int main()
{
    return 0;
}
