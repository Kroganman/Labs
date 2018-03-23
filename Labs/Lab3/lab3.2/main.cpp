#include <iostream>
#include "Tiles.cpp"


int main()
{
    Tiles *tile = new Tiles;
    string brand;
    int size_h,size_w,price;
    int i;
    for(i=0;i<2;i++)
    {
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
    }

    return 0;
}
