#include <iostream>
#include "human.h"
#include "student.h"
#include "boss.h"

using namespace std;

int main()
{

    Student *student1=new Student("Smirnov","Vasya","Viktorovich",15,true);
    student1->print();
    Boss *boss1=new Boss("Zaycev","Dmitriy","Arkadevich",45,10);
    boss1->print();
    return 0;
}
