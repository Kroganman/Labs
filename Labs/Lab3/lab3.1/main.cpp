#include <iostream>
#include "Child.cpp"


int main()
{
    Child *child1 = new Child;
    string name,surname;
    int age;
    cout << "Enter the first child's name: ";
    getline(cin,name);
    cout << "Enter the first child's surname: ";
    getline(cin,surname);
    cout << "Enter the age of the first child: ";
    cin >> age;
    cin.ignore();
    child1->setData(name,surname,age);
    cout << endl;
    Child *child2 = new Child;
    cout << "Enter the second child's name: ";
    getline(cin,name);
    cout << "Enter the second child's surname: ";
    getline(cin,surname);
    cout << "Enter the age of the second child: ";
    cin >> age;
    cin.ignore();
    child2->setData(name,surname,age);
    cout << endl;
    cout << "First child" << endl << "Name: " << child1->getName() << endl << "Surname: " << child1->getSurname() << endl << "Age: " << child1->getAge() << endl << endl;
    cout << "Second child" << endl << "Name: " << child2->getName() << endl << "Surname: " << child2->getSurname() << endl << "Age: " << child2->getAge() << endl << endl;

    return 0;
}
