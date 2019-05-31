#include "Persona.h"
#ifndef NONBENDER_H
#define NONBENDER_H

#include <string>
using std::string;

class NonBender:public Persona
{
private:
    string trabajo, fuerza, velocidad;
public:
    NonBender();
    NonBender(string, string, string);
    virtual string toString();
};

#endif