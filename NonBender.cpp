#include "NonBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

NonBender::NonBender(string ptrabajo, string pfuerza, string pvelocidad){
    this->trabajo=ptrabajo;
    this->fuerza=pfuerza;
    this->velocidad=pvelocidad;
}


string NonBender::toString(){
    cout<<"Trabajo: "<<trabajo<<endl
    <<"Fuerza: "<<fuerza<<endl
    <<"Velocidad: "<<velocidad<<endl;
    return " ";
}