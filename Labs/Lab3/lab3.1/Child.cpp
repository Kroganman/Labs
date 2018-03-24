#include <string>

using namespace std;

class Child
{
public:

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


private:
    string name,surname;
    int age;
};
