#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int f1(int mass2[10]) //Sum=
{
    int j,c;
    for(j=0;j<10;j++)
    {
        c=mass2[9-j];
        mass2[9-j]=mass2[j];
        mass2[j]=c;
    }
    return 1;
}

int f2(int mass3[10]) //Sum>
{
    int j1,j2,maxim,m;
    int new_mass[10];
    cout << endl;
    for(j1=0;j1<10;j1++)
    {
        maxim=mass3[0];
        m=0;
        for(j2=1;j2<10;j2++)
        {
            if(maxim<mass3[j2])
            {
                maxim=mass3[j2];
                m=j2;
            }
        }
        new_mass[j1]=maxim;
        cout << new_mass[j1] << ",";
        mass3[m]=-100;
    }
    return 2;
}

int f3(int mass4[10]) //Sum<
{
    int j1,j2,minimum,m;
    int new_mass[10];
    cout << endl;
    for(j1=0;j1<10;j1++)
    {
        minimum=mass4[0];
        m=0;
        for(j2=1;j2<10;j2++)
        {
            if(minimum>mass4[j2])
            {
                minimum=mass4[j2];
                m=j2;
            }
        }
        new_mass[j1]=minimum;
        cout << new_mass[j1] << ",";
        mass4[m]=100;
    }
    return 3;
}


int func(int mass1[10],int sum1)
{
    int (*pf)(int *);
    int result;
    if(sum1==mass1[0])
    {
        pf=f1;
        result=(*pf)(mass1);
    }
    else
    {
        if(sum1>mass1[0])
        {
            pf=f2;
            result=(*pf)(mass1);
        }
        else
        {
            pf=f3;
            result=(*pf)(mass1);
        }
    }
    return result;
}
int main()
{
    int sum,i;
    int mass[10];
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        mass[i]=-50 + rand()%100;
        cout << mass[i] << ",";
        sum=sum+mass[i];
    }
    cout << endl << func(mass,sum);
    return 0;
}
