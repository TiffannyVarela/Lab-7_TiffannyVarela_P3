#ifndef PERSONA_H
#define PERSONA_H
#include "Bender.h"
#include <string>
using std::string;

class Persona
{
private:
    string nacion_origen, nombre, sexo;
    Bender* bender = new Bender();
    //PoderEspecial* pe = new PoderEspecial();
    int edad;
public:
    Persona();
    Persona(string, string, int, string, Bender*);
    virtual string toString();
};

#endif