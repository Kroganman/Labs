#include <iostream>
#include <string>

using namespace std;

class Tiles
{

private:
    string brand;
    int size_h, size_w,price;

public:

    Tiles()
    {
        brand="brand1";
        size_h=10;
        size_w=3;
        price=30;
        cout << "Brand: " << brand << endl << "Size height: " << size_h << endl << "Size width: " << size_w << endl << "Price: " << price << endl << endl;
    }

    Tiles(string brand1,int size_height,int size_width,int price1)
    {
        brand=brand1;
        size_h=size_height;
        size_w=size_width;
        price=price1;
        cout << "Brand: " << brand << endl << "Size height: " << size_h << endl << "Size width: " << size_w << endl << "Price: " << price << endl << endl;
    }

    void getData(string brand1,int size_height,int size_width,int price1)
    {
        brand=brand1;
        size_h=size_height;
        size_w=size_width;
        price=price1;
        cout << "Brand: " << brand << endl << "Size height: " << size_h << endl << "Size width: " << size_w << endl << "Price: " << price << endl << endl;
    }
    ~Tiles()
    {
        cout << "The destructor has worked" << endl;
    }

};

int main()
{
    Tiles *tile = new Tiles;
    Tiles("brand2",20,6,120);
    string brand;
    int size_h,size_w,price;
    cout << "Enter your brand: ";
    getline(cin, brand);
    cout << "Enter your size height: ";
    cin >> size_h;
    cout << "Enter your size width: ";
    cin >> size_w;
    cout << "Enter your price: ";
    cin >> price;
    cin.ignore();
    tile->getData(brand,size_h,size_w,price);
    delete tile;

    return 0;
}
