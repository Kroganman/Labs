#include <math.h>
#include "Complex.h"


Complex Addition(Complex a,Complex b)
{
    Complex s;
    s.Re=a.Re+b.Re;
    s.Im=a.Im+b.Im;
    return s;
}

Complex Subtraction(Complex a,Complex b)
{
    Complex s;
    s.Re=a.Re-b.Re;
    s.Im=a.Im-b.Im;
    return s;
}

Complex Multiplication(Complex a,Complex b)
{
    Complex s;
    s.Re=a.Re*b.Re-a.Im*b.Im;
    s.Im=a.Re*b.Im+b.Re*a.Im;
    return s;
}

Complex Division(Complex a,Complex b)
{
    Complex s;
    s.Re=(a.Re*b.Re+a.Im*b.Im)/(b.Re*b.Re+b.Im*b.Im);
    s.Im=(b.Re*a.Im-a.Re*b.Im)/(b.Re*b.Re+b.Im*b.Im);
    return s;
}
