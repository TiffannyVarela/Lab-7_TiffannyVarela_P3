#include "Persona.h"
#ifndef NONBENDER_H
#define NONBENDER_H

#include <string>
using std::string;

class NonBender:public Persona
{
public:
    string trabajo, fuerza, velocidad, poder;

    NonBender();
    NonBender(string, string, string, string, string, string, string, string, int);
    virtual string toString();
};

#endif