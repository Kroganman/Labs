#include <iostream>
#include "Complex.cpp"


int main()
{
    float re,im;
    Complex *number = new Complex;
    cout << "Enter the real part of the number: ";
    cin >> re;
    cin.ignore();
    cout << "Enter the imaginary part of the number: ";
    cin >> im;
    cin.ignore();
    number->setData(re,im);
    cout << "The absolute value of a number= " << number->getModul() << endl << "Sinus of argument= " << number->getSin();
    return 0;
}
