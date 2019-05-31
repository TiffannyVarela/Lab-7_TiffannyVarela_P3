#include "Persona.h"
#ifndef EARTHBENDER_H
#define EARTHBENDER_H

#include <string>
using std::string;

class EarthBender:public Persona
{
public:
    int cantidad_coles, graduacion;
    string  poder;
    EarthBender();
    EarthBender(int, int, string,string, string, string, string, int);
    virtual string toString();

};

#endif