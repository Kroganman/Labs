#include <iostream>

using namespace std;

int sor(int *mass,int m);
double sor(double *mass,int m);

int main()
{
   int n;
   cin >> n;
   int *a = new int[n];
   for (int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   sor(a,n);
   for (int i = 0; i < n; i++)
   {
       cout << a[i] << " ";
   }
   cout << endl;
   double *b = new double[n];
   for (int i = 0; i < n; i++)
   {
       cin >> b[i];
   }
   sor(b,n);
   for (int i = 0; i < n; i++)
   {
       cout << b[i] << " ";
   }
    return 0;
}


int sor(int *mass,int m)
{
    int c;
    for(int j = 1; j < m;j++)
    {
       for(int i = 1; i < m;i++)
       {
           if(mass[i-1]>mass[i])
               {
                   c=mass[i-1];
                   mass[i-1]=mass[i];
                   mass[i]=c;
               }
       }
    }
    return 2;
}


double sor(double *mass,int m)
{
    double c;
    for(int j = 1; j < m;j++)
    {
       for(int i = 1; i < m;i++)
       {
           if(mass[i-1]>mass[i])
               {
                   c=mass[i-1];
                   mass[i-1]=mass[i];
                   mass[i]=c;
               }
       }
    }
    return 3;
}
