#include "Persona.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H

#include <string>
using std::string;

class FireBender:public Persona
{
public:
    int num_cicatrices, num_victorias;
    string poder;
    FireBender();
    FireBender(int, int,string,string, string, string, string, int);
    virtual string toString();
};

#endif