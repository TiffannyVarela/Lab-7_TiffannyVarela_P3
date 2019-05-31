#include "Bender.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H

#include <string>
using std::string;

class FireBender:public Bender
{
private:
    int num_cicatrices, num_victorias;
public:
    FireBender();
    FireBender(int, int);
    virtual string toString();
};

#endif