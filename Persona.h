#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;

class Persona
{
public:
    string nacion_origen, nombre, sexo, elemento;
    int edad;

    Persona();
    Persona(string, string, string , string, int);
    virtual string toString();
};

#endif