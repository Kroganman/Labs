#include <iostream>
#include "appartment.h"
#include "car.h"
#include "contryhouse.h"
#include "property.h"
using namespace std;


int main()
{
    Property **mas=new Property*[7];
    mas[0] = new Appartment(50000);
    mas[1] = new Appartment(38010);
    mas[2] = new Appartment(59234);
    mas[3] = new Car(6000);
    mas[4] = new Car(9210);
    mas[5] = new Contryhouse(15000);
    mas[6] = new Contryhouse(10311);

    cout << endl << "Appartments 1 tax is: " << mas[0]->tax() << endl;
    cout << "Appartments 2 tax is: " << mas[1]->tax() << endl;
    cout << "Appartments 3 tax is: " << mas[2]->tax() << endl;
    cout << "Car 1 tax is: " << mas[3]->tax() << endl;
    cout << "Car 2 tax is: " << mas[4]->tax() << endl;
    cout << "Contryhouse 1 tax is " << mas[5]->tax() << endl;
    cout << "Contryhouse 2 tax is " << mas[6]->tax() << endl;

    delete mas;


    return 0;
}
