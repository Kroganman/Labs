#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student:public Human
{
public:

    Student(std::string surname,std::string name,std::string midname,int age,bool on_lesson) : Human(surname,name,midname,age)
    {
        this->on_lesson=on_lesson;
    }

    void print()
    {
        std::cout << "Student" << std::endl << "Surname: " << this->surname << std::endl << "Name: " << this->name << std::endl << "Midname: " << this->midname << std::endl << "Age: " << this->age << std::endl << "On lesson: " << this->on_lesson << std::endl;
    }

    ~Student();

protected:

    bool on_lesson;

};



#endif // STUDENT_H
