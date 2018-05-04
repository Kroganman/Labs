#include <iostream>
#include "animal.h"
#include "dog.h"
#include "cat.h"

using namespace std;

int main()
{
    Dog *dog1=new Dog("Tim",5,"white","Toy terrier");
    cout << "Dog" << endl << "Name: " << dog1->get_name() << endl << "Mass: " << dog1->get_mass() << endl << "Colour: " << dog1->get_colour() << endl << "Breed: " << dog1->get_breed() << endl << endl;
    delete dog1;
    Cat *cat1=new Cat("Murzik",4,"black","yellow");
    cout << "Cat" << endl << "Name: " << cat1->get_name() << endl << "Mass: " << cat1->get_mass() << endl << "Colour: " << cat1->get_colour() << endl << "Eyes: " << cat1->get_eyes();
    delete cat1;
    return 0;
}
