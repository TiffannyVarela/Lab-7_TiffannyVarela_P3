#include "PoderEspecial.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

Ofensivos::Ofensivos(string prango, string pfuerza){
    this->rango=prango;
    this->fuerza=pfuerza;
}

Ofensivos::Ofensivos(){
    
}

string Ofensivos::toString(){
    cout<<"Cantidad de Pelo: "<<rango<<endl
    <<"Color de Flechas: "<<fuerza<<endl;
    return " ";
}
