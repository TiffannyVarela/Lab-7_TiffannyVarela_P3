#include "WaterBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

WaterBender::WaterBender(string ptribu_origen, string parma_preferida){
    this->tribu_origen=ptribu_origen;
    this->arma_preferida=parma_preferida;
}

string WaterBender::toString(){
    cout<<"Tribu de Origen: "<<tribu_origen<<endl
    <<"Arma Preferida: "<<arma_preferida<<endl;
    return " ";
}