#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    //setlocale(LC_ALL,"en-US");
    ifstream file("D:\\example.txt",ios::in);
    string s;

    for(file>>s;!file.eof();file >>s)
        cout<<s<<endl;
    return 0;
}
