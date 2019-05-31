#include "WaterBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

WaterBender::WaterBender(string ptribu_origen, string parma_preferida, string ppoder, string nacion_origen,string nombre,string sexo,string elemento,int edad){
    WaterBender::Persona(nacion_origen, nombre, sexo, elemento, edad);
    this->tribu_origen=ptribu_origen;
    this->arma_preferida=parma_preferida;
    this->poder=ppoder;
}

string WaterBender::toString(){
    cout<<"Tribu de Origen: "<<tribu_origen<<endl
    <<"Arma Preferida: "<<arma_preferida<<endl
    <<"Poder Especial: "<<poder<<endl;
    return " ";
}