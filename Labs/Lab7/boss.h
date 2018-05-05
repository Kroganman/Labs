#ifndef BOSS_H
#define BOSS_H

#include <string>

class Boss:public Human
{
public:

    Boss(std::string surname,std::string name,std::string midname,int age,int number_of_workers) : Human(surname,name,midname,age)
    {
        this->number_of_workers=number_of_workers;
    }

    void print()
    {
        std::cout << "Boss" << std::endl << "Surname: " << this->surname << std::endl << "Name: " << this->name << std::endl << "Midname: " << this->midname << std::endl << "Age: " << this->age << std::endl << "Number of workers: " << this->number_of_workers;
    }

    ~Boss();


protected:

    int number_of_workers;

};




#endif // BOSS_H
