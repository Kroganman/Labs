#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
public:

    Complex operator = (Complex &v1)
{
	this->re = v1.re, this->im = v1.im;
	return *this;
}

Complex operator ++ ()
{
    this->re++;
    this->im++;
	return *this;
}

Complex operator -- ()
{
    this->re--;
    this->im--;
	return *this;
}
    float re,im;


};


bool operator < (const Complex &v1, const Complex &v2)
{
	double vTemp1(sqrt(pow(v1.re, 2) + pow(v1.im, 2)));
	double vTemp2(sqrt(pow(v2.re, 2) + pow(v2.im, 2) ));

	return vTemp1 < vTemp2;
}
bool operator == (const Complex &v1, const Complex &v2)
{
	if ((v1.re == v2.re) && (v1.im == v2.im))
		return true;
	return false;
}
//Перегружаем != используя другой перегруженный оператор
bool operator != (const Complex &v1, const Complex &v2)
{
	return !(v1 == v2);
}


ostream& operator << (ostream &s, const Complex &v)
{
	s << "The real part of the third number: " << v.re << endl << "The imaginary part of the third number: " << v.im << endl;
	return s;
}
//Перегрузка операции ввода из потока (очень удобный вариант)
istream& operator >> (istream &s, Complex &v)
{
	cout << "Enter the third number." << endl << "The real part of the third number: ";
	cin >> v.re;
	cout << endl << "The imaginary part of the third number: ";
	cin >> v.im;
	cout << endl;
	return s;
}


int main()
{
    Complex *number1 = new Complex;
    Complex *number2 = new Complex;
    cout << "Enter the real part of the number: ";
    cin >> number1->re;
    cin.ignore();
    cout << "Enter the imaginary part of the number: ";
    cin >> number1->im;
    cin.ignore();
    number2=number1;
    cout << "The real part of the first number: " << number1->re << endl << "The imaginary part of the first number: " << number1->im << endl << endl;
    cout << "The real part of the second number: " << number2->re << endl << "The imaginary part of the second number: " << number2->im << endl << endl;
    if(number1==number2)
        cout << "True" << endl;
    else
        cout << "False";
    Complex *number3 = new Complex;
    cin >> *number3;
    number3->operator ++();
    cout << *number3;
    number3->operator --();
    cout << *number3;
    delete number1;
    delete number2;
    delete number3;
    return 0;
}
