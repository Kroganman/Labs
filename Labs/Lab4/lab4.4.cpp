#include <iostream>
#include <string>

using namespace std;

class Child
{

private:
    string name,surname;
    int age;

public:

    Child()
    {
        name="Vasya";
        surname="Pupkin";
        age=12;
        cout << "Child1" << endl << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age << endl << endl;
    }

    Child(string name_child,string surname_child,int age_child)
    {
        name=name_child;
        surname=surname_child;
        age=age_child;
        cout << "Child2" << endl << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age << endl << endl;
    }
    void setData(string name_child,string surname_child,int age_child)
    {
        name=name_child;
        surname=surname_child;
        age=age_child;
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }

    int getAge()
    {
        return age;
    }
    ~Child()
    {
        cout << "The destructor has worked" << endl;
    }

};


int main()
{
    Child *child1 = new Child;
    Child("Dima","Smirnov",8);
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
    cout << "Child" << endl << "Name: " << child1->getName() << endl << "Surname: " << child1->getSurname() << endl << "Age: " << child1->getAge() << endl;
    delete child1;
    return 0;
}
