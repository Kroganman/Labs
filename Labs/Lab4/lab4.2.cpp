#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
private:

    float x,y,modul;

public:

    Vector()
    {
        x=3;
        y=4;
        setModul(x,y);
        cout << "ABS of the vector = " << getModul() << endl << endl;
    }

    Vector(float x1,float y1)
    {
        setModul(x1,y1);
        cout << "ABS of the vector = " << getModul() << endl << endl;
    }

    void setModul(float x1,float y1)
    {
        modul=sqrt(x1*x1+y1*y1);
    }

    float getModul()
    {
        return modul;
    }

    void setAdd(float x1,float y1,float x2,float y2)
    {
        x=x1+x2;
        y=y1+y2;
    }

    void setSub(float x1,float y1,float x2,float y2)
    {
        x=x1-x2;
        y=y1-y2;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }

    ~Vector ()
    {
        cout << "The destructor has worked" << endl;
    }
};


int main()
{
    float x1,y1,x2,y2;
    Vector *vector1 = new Vector;
    Vector *vector2 = new Vector;
    Vector(6,8);
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
