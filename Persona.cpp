#include "Persona.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

Persona::Persona(string pnacion_origen, string pnombre, int pedad, string psexo, Bender* pbender){
    this->nacion_origen=pnacion_origen;
    this->nombre=pnombre;
    this->edad=pedad;
    this->sexo=psexo;
    this->bender = pbender;
}

Persona::Persona(){

}

string Persona::toString(){
    cout<<"Nacion de Origen: "<<nacion_origen<<endl
    <<"Nombre: "<<nombre<<endl
    <<"Edad: "<<edad<<endl
    <<"Sexo: "<<sexo<<endl
    <<"Maestro: "<<bender<<endl;
    return " ";
}