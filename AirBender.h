#include "Bender.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
using std::string;

class AirBender:public Bender
{
private:
    string cant_pelo, color_flechas;
public:
    AirBender();
    AirBender(string, string);
    virtual string toString();
};

#endif