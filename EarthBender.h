#include "Bender.h"
#ifndef EARTHBENDER_H
#define EARTHBENDER_H

#include <string>
using std::string;

class EarthBender:public Bender
{
private:
    int cantidad_coles, graduacion;
    Bender* bender = new Bender();
public:
    EarthBender();
    EarthBender(int, int, Bender*);
    virtual string toString();

};

#endif