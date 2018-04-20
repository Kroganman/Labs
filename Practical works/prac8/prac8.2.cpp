#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("D:\\text.txt");
    file.clear();
    cout << "Enter the text you want:" << endl;
    cin.clear();
    char mas[128];
    cin.getline(mas,64);
    file<<mas;
    file.close();
    return 0;
