#ifndef ANIMAL_H
#define ANIMAL_H

#include "string"

class Animal
{
public:

    Animal(std::string name,float mass,std::string colour)
    {
        this->name=name;
        this->mass=mass;
        this->colour=colour;
    }

    std::string get_name()
    {
        return this->name;
    }

    float get_mass()
    {
        return this->mass;
    }

    std::string get_colour()
    {
        return this->colour;
    }


private:

    std::string name;
    float mass;
    std::string colour;
};

#endif // ANIMAL_H
