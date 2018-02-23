#include <iostream>
#include <fstream>
#include "Complex.h"
#include <cstdio>
#include <cmath>

using namespace std;
double Max;

int main()
{
    ifstream file;
    file.open("d:\\C\\lab1.2\\complex.txt");
    int n=0;
    int i=0;
    double p[100][2];
    char number[100],j[100];
    Complex k1;
    if(!file)
    {
        cout << "Error!File was not opened!" << endl;
        return -1;
    }
    else
        cout << "File successfully opened!" << endl;
    while(!file.eof())
    {
        file >>p[n][0] >> number[n] >> p[n][1]>> j[n];
        n++;
    }
    n=n-2;
    Max=0;
    cout << "Number Modules: ";
    while(i<=n)
    {
        k1.Re=p[i][0];
        k1.Im=p[i][1];
        i++;
        modul(k1);
    }
    cout << endl << "Maximal number modulus: " << Max;
        return 0;
}
        
        double modul(Complex a)
    {
        double s;
        s=sqrt(a.Re*a.Re+a.Im*a.Im);
        cout << s << ", ";
        if (Max<s)
            Max=s;
        return s;
    }
