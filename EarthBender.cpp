#include "EarthBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

EarthBender::EarthBender(int pcantidad_coles, int pgraduacion, string ppoder, string nacion_origen,string nombre,string sexo,string elemento,int edad){
    EarthBender::Persona(nacion_origen, nombre, sexo, elemento, edad);
    this->cantidad_coles=pcantidad_coles;
    this->graduacion=pgraduacion;
    this->poder = poder;
}

string EarthBender::toString(){
    cout<<"Cantidad de Coles: "<<cantidad_coles<<endl
    <<"Graduacion de Ojos: "<<graduacion<<endl
    <<"Poder Especial: "<<poder<<endl;
    return " ";
}