#include <iostream>
#include <ctime>

using namespace std;

void func1(float **mass,int k,int l);
void func2(float **mass1,int c,int d);

int main()
{
    int n;
    int m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    float** mas;
    mas=new float*[n];

    func1(mas,n,m);
    return 0;
}

void func1(float **mass,int k,int l)
{
    int i,j;
    srand( time(0) );
    for(i=0;i<k;i++)
    {
        mass[i]=new float[l];
        for(j=0;j<l;j++)
        {
            mass[i][j]=10 + rand() %41;
        }
    }
    func2(mass,k,l);
}

void func2(float **mass1,int c,int d)
{
    int f,g;
    for(f=0;f<c;f++)
    {
        for(g=0;g<d;g++)
        {
            cout << mass1[f][g] << ",";
        }
        cout << endl;
    }
    for(f=0;f<c;f++)
    {
        delete [] mass1[f];
    }
    delete [] mass1;
}
