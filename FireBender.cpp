#include "FireBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

FireBender::FireBender(int pnum_cicatrices, int pnum_victorias, string ppoder, string nacion_origen,string nombre,string sexo,string elemento,int edad){
    FireBender::Persona(nacion_origen, nombre, sexo, elemento, edad);
    this->num_cicatrices=pnum_cicatrices;
    this->num_victorias=pnum_victorias;
    this->poder=ppoder;
}


string FireBender::toString(){
    cout<<"Numero de Cicatrices: "<<endl
    <<"Numero de Victorias: "<<endl
    <<"Poder Especial: "<<poder<<endl;
    return " ";
}