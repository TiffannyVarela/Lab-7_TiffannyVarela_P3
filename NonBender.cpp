#include "NonBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

NonBender::NonBender(string ptrabajo, string pfuerza, string pvelocidad, string ppoder, string nacion_origen,string nombre,string sexo,string elemento,int edad){
    NonBender::Persona(nacion_origen, nombre, sexo, elemento, edad);
    this->trabajo=ptrabajo;
    this->fuerza=pfuerza;
    this->velocidad=pvelocidad;
    this->poder=ppoder;
}


string NonBender::toString(){
    cout<<"Trabajo: "<<trabajo<<endl
    <<"Fuerza: "<<fuerza<<endl
    <<"Velocidad: "<<velocidad<<endl
    <<"Poder Especial: "<<poder<<endl;
    return " ";
}