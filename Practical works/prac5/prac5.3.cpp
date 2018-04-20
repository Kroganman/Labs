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
   delete [] a;

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
   delete [] b;

   return 0;
}


int sor(int *mass,int m)
{
    int c,i;
    for(int j = 1; j < m;j++)
    {
       c=mass[j];
       for(i = j-1; (i >= 0 && mass[i] > c);--i)
       {
           mass[i+1] = mass[i];
       }
       mass[i+1]=c;
    }
    return 2;
}


double sor(double *mass,int m)
{
    double c;
    int i;
    for(int j = 1; j < m;j++)
    {
       c=mass[j];
       for(i = j-1; (i >= 0 && mass[i] > c);--i)
       {
           mass[i+1] = mass[i];
       }
       mass[i+1]=c;
    }
    return 2;
}
