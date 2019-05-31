#ifndef OFENSIVOS_H
#define OFENSIVOS_H
#include "PoderEspecial.h"
#include <string>
using std::string;

class Ofensivos:public PoderEspecial
{
    private:
    string rango, fuerza;
public:
    Ofensivos(string, string);
    Ofensivos();
    virtual string toString();
};

#endif
