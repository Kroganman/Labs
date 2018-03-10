#include <iostream>

using namespace std;
void func1(double *mass,int n);
void func2(double *mass,int n);
void func3(double *mass,int n);
void func4(double *mass);

int main()
{
    int n;
    double *mass;
    cout << "Enter the dimension of the array: ";
    cin >> n;
    func1(mass,n);
    return 0;
}

void func1(double *mass1,int n)
{
    mass1=new double[n];
    func2(mass1,n);
}

void func2(double *mass1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << "Enter the next element of the array: ";
        cin >> mass1[i];
    }
    func3(mass1,n);
}

void func3(double *mass1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << mass1[i] << " ";
    }
    func4(mass1);
}

void func4(double *mass1)
{
    delete[] mass1;
}
