#ifndef GENERIC_CLASS_H
#define GENERIC_CLASS_H
#pragma once

class generic_class
{
public:
    generic_class();
    virtual double repulsion();
    virtual double attraction();
    virtual double aggression();
    virtual double cooldown();
    virtual double direction();
};

#endif // GENERIC_CLASS_H
