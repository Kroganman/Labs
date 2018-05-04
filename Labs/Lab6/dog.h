#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <string>

class Dog : public Animal
{
public:

    Dog(std::string name,float mass,std::string colour,std::string breed) : Animal(name,mass,colour)
    {
        this->breed=breed;
    }

    std::string get_breed()
    {
        return this->breed;
    }


private:

    std::string breed;
};

#endif // DOG_H
