#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
public:

    float x,y,modul;

    Vector operator = (Vector &v1)
{
	this->x = v1.x, this->y = v1.y;
	return *this;
}


    void setModul(float x1,float y1)
    {
        modul=sqrt(x1*x1+y1*y1);
    }

    float getModul()
    {
        return modul;
    }

};


bool operator < (const Vector &v1, const Vector &v2)
{
	double vTemp1(sqrt(pow(v1.x, 2) + pow(v1.y, 2)));
	double vTemp2(sqrt(pow(v2.x, 2) + pow(v2.y, 2) ));

	return vTemp1 < vTemp2;
}
bool operator == (const Vector &v1, const Vector &v2)
{
	if ((v1.x == v2.x) && (v1.y == v2.y))
		return true;
	return false;
}
//Перегружаем != используя другой перегруженный оператор
bool operator != (const Vector &v1, const Vector &v2)
{
	return !(v1 == v2);
}


ostream& operator << (ostream &s, const Vector &v)
{
	s << '(' << v.x << ", " << v.y << ')';
	return s;
}
//Перегрузка операции ввода из потока (очень удобный вариант)
istream& operator >> (istream &s, Vector &v)
{
	cout << "Enter the third vector." << endl << "x=";
	cin >> v.x;
	cout << endl << "y=";
	cin >> v.y;
	cout << endl;
	return s;
}


int main()
{
    float x1,y1;
    Vector *vector1 = new Vector;
    Vector *vector2 = new Vector;
    cout << "Enter the coordinates of the first vector: " << endl << "x= ";
    cin >> x1;
    cin.ignore();
    cout << "y= ";
    cin >> y1;
    cin.ignore();
    vector1->setModul(x1,y1);
    vector2=vector1;
    cout << "ABS of the first vector: " << vector1->getModul() << endl;
    cout << "ABS of the second vector: " << vector2->getModul() << endl;
    if(vector1==vector2)
        cout << "True" << endl;
    Vector *vector3 = new Vector;
    cin >> *vector3;
    cout << *vector3;
    return 0;
}
