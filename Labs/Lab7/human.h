#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
public:

    Human(std::string surname,std::string name,std::string midname,int age)
    {
        this->surname=surname;
        this->name=name;
        this->midname=midname;
        this->age=age;

    }

    virtual void print()=0;

    ~Human();


protected:

    std::string surname;
    std::string name;
    std::string midname;
    int age;
};



#endif // HUMAN_H
