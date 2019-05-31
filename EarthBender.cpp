#include "EarthBender.h"
#include "Bender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

EarthBender::EarthBender(int pcantidad_coles, int pgraduacion, Bender* pbender){
    this->cantidad_coles=pcantidad_coles;
    this->graduacion=pgraduacion;
    this-> bender = pbender;
}

string EarthBender::toString(){
    cout<<"Cantidad de Coles: "<<cantidad_coles<<endl
    <<"Graduacion de Ojos: "<<graduacion<<endl
    <<"Poder Especial: "<<bender<<endl;
    return " ";
}