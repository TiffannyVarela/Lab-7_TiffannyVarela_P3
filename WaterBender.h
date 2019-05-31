#include "Persona.h"
#ifndef WATERBENDER_H
#define WATERBENDER_H

#include <string>
using std::string;

class WaterBender:public Persona
{
public:
    string tribu_origen, arma_preferida, poder;

    WaterBender();
    WaterBender(string, string, string,string, string, string, string, int);
    virtual string toString();
};

#endif