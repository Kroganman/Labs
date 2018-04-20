#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:

    float re,im,modul,sin;

public:

    Complex()
    {
        re=3;
        im=4;
        setData(re,im);
        cout << "The real part of the number = " << re << endl << "The imaginary part of the number = " << im << endl << "The absolute value of a number =" << getModul() << endl << "Sinus of argument = " << getSin() << endl << endl;
    }

    Complex(float real, float imag)
    {
        modul = sqrt(real*real + imag*imag);
        sin = real/modul;
        cout << "The real part of the number = " << real << endl << "The imaginary part of the number = " << imag << endl << "The absolute value of a number =" << modul << endl << "Sinus of argument = " << sin << endl << endl;
    }

    void setData(float real,float imag)
    {
        modul = sqrt(real*real + imag*imag);
        sin = real/modul;
    }

    float getModul()
    {
        return modul;
    }

    float getSin()
    {
        return sin;
    }

    ~Complex ()
    {
        cout << "The destructor has worked" << endl;
    }
};


int main()
{
    float re,im;
    Complex *number = new Complex;
    Complex(6,8);
    cout << "Enter the real part of the number: ";
    cin >> re;
    cin.ignore();
    cout << "Enter the imaginary part of the number: ";
    cin >> im;
    cin.ignore();
    number->setData(re,im);
    cout << "The absolute value of a number = " << number->getModul() << endl << "Sinus of argument = " << number->getSin();
    return 0;
}
