#include <string>
#include <iostream>

using namespace std;

class Tiles
{
public:
    string brand;
    int size_h, size_w,price;

    void getData(string brand1,int size_height,int size_width,int price1)
    {
        brand=brand1;
        size_h=size_height;
        size_w=size_width;
        price=price1;
        cout << "Brand: " << brand << endl << "Size height: " << size_h << endl << "Size width: " << size_w << endl << "Price: " << price << endl << endl;
    }

};
