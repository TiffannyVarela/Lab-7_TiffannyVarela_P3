
#include "PoderEspecial.h"
#ifndef BENDER_H
#define BENDER_H

#include <string>
using std::string;

class Bender
{
private:
    PoderEspecial* pe = new PoderEspecial();
public:
    Bender(PoderEspecial*);
    Bender();
};

#endif