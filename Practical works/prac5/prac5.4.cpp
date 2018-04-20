#include <iostream>

using namespace std;

int addition(int c1,int c2);
int subtraction(int c1,int c2);
int multiplication(int c1,int c2);
int division(int c1,int c2);

double addition(double c1,double c2);
double subtraction(double c1,double c2);
double multiplication(double c1,double c2);
double division(double c1,double c2);

int main()
{
    int a1,a2;
    double b1,b2;
    cout << "Enter 1 whole number" << endl << "a1=";
    cin >> a1;
    cout << "Enter 2 whole number" << endl << "a2=";
    cin >> a2;
    cout << endl << "a1+a2=" << addition(a1,a2) << endl;
    cout << "a1-a2=" << subtraction(a1,a2) << endl;
    cout << "a1*a2=" << multiplication(a1,a2) << endl;
    cout << "a1/a2=" << division(a1,a2) << endl;
    cout << "Enter 1 fractional number" << endl << "b1=";
    cin >> b1;
    cout << "Enter 2 fractional number" << endl << "b2=";
    cin >> b2;
    cout << endl << "a1+a2=" << addition(b1,b2) << endl;
    cout << "b1-b2=" << subtraction(b1,b2) << endl;
    cout << "b1*b2=" << multiplication(b1,b2) << endl;
    cout << "b1/b2=" << division(b1,b2) << endl;
    return 0;
}


int addition(int c1,int c2)
{
    return c1+c2;
}

int subtraction(int c1,int c2)
{
    return c1-c2;
}

int multiplication(int c1,int c2)
{
    return c1*c2;
}

int division(int c1,int c2)
{
    return c1/c2;
}


double addition(double c1,double c2)
{
    return c1+c2;
}

double subtraction(double c1,double c2)
{
    return c1-c2;
}

double multiplication(double c1,double c2)
{
    return c1*c2;
}

double division(double c1,double c2)
{
    return c1/c2;
}
