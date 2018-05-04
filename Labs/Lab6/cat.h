#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include <string>

class Cat : public Animal
{
public:

    Cat(std::string name,float mass,std::string colour,std::string eyes) : Animal(name,mass,colour)
    {
        this->eyes=eyes;
    }

    std::string get_eyes()
    {
        return this->eyes;
    }

private:

    std::string eyes;
};

#endif // CAT_H
