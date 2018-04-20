#ifndef CONTRYHOUSE_H
#define CONTRYHOUSE_H
#include "property.h"

class Contryhouse : public Property
{
public:
    Contryhouse(int w);
    double tax();
};

#endif // CONTRYHOUSE_H
