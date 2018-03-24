#include <iostream>
#include <ctime>

using namespace std;

void func(int *mass);

int main()
{
    int i;
    int *mas = new int[12];
    srand( time(0) );
    cout << "First" << endl;
    for(i=0;i<12;i++)
    {
        mas[i]=-50+rand() % 100;
        cout << mas[i] << ",";
    }
    cout << endl;
    func(mas);
    return 0;
}

void func(int *mass)
{
    int a,j;
    j=0;
    while(j<11)
    {
        a=mass[j];
        mass[j]=mass[j+1];
        mass[j+1]=a;
        j=j+2;
    }
    cout << "Second" << endl;
    for(j=0;j<12;j++)
    {
        cout << mass[j] << ",";
    }

}
