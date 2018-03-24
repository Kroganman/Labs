#include <iostream>
#include "Vector.cpp"

int main()
{
    float x1,y1,x2,y2;
    Vector *vector1 = new Vector;
    Vector *vector2 = new Vector;
    cout << "Enter the coordinates of the first vector: " << endl << "x= ";
    cin >> x1;
    cin.ignore();
    cout << "y= ";
    cin >> y1;
    cin.ignore();
    cout << endl << "Enter the coordinates of the second vector: " << endl << "x= ";
    cin >> x2;
    cin.ignore();
    cout << "y= ";
    cin >> y2;
    cin.ignore();
    vector1->setModul(x1,y1);
    vector2->setModul(x2,y2);
    cout << "ABS of the first vector: " << vector1->getModul() << endl;
    cout << "ABS of the second vector: " << vector2->getModul() << endl;
    Vector *vector3 = new Vector;
    vector3->setAdd(x1,y1,x2,y2);
    cout << "Addition = (" << vector3->getX() << "," << vector3->getY() << ")" << endl;
    vector3->setSub(x1,y1,x2,y2);
    cout << "Subtraction = (" << vector3->getX() << "," << vector3->getY() << ")";
    return 0;
}
