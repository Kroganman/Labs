#ifndef PROPERTY_H
#define PROPERTY_H


class Property
{
protected:
    int worth;

public:
    Property(int w);
    virtual double tax()=0;
};

#endif // PROPERTY_H
