#include "Persona.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

Persona::Persona(string pnacion_origen, string pnombre, string elemento,  string psexo, int pedad){
    this->nacion_origen=pnacion_origen;                                                                                                                                 
    this->nombre=pnombre;
    this->edad=pedad;
    this->sexo=psexo;
this->elemento = elemento     ;                                                                                                                                                                                                                                                                                                                           
}

Persona::Persona(){

}

string Persona::toString(){
    cout<<"Nacion de Origen: "<<nacion_origen<<endl
    <<"Nombre: "<<nombre<<endl
    <<"Edad: "<<edad<<endl
    <<"Sexo: "<<sexo<<endl;
    return " ";
}