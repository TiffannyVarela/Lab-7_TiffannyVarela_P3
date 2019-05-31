#include "Bender.h"
#ifndef WATERBENDER_H
#define WATERBENDER_H

#include <string>
using std::string;

class WaterBender:public Bender
{
private:
    string tribu_origen, arma_preferida;
public:
    WaterBender();
    WaterBender(string, string);
    virtual string toString();
};

#endif