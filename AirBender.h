#include "Persona.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
using std::string;

class AirBender:public Persona
{
public:
    string cant_pelo, color_flechas, poder;

    AirBender();
    AirBender(string, string, string, string, string, string, string, int);
    virtual string toString();
};

#endif
