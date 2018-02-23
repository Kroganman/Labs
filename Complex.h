#ifndef COMLEX_H
#define COMLEX_H
struct Complex {
    double Re;
    double Im;
};
Complex Addition(Complex a,Complex b);
Complex Subtraction(Complex a,Complex b);
Complex Multiplication(Complex a,Complex b);
Complex Division(Complex a,Complex b);
#endif // COMLEX_H
