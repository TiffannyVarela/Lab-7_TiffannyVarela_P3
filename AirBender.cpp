#include "AirBender.h"
#include <iostream>
using std::cout;
using std::endl;
AirBender::AirBender(string pcant_pelo, string pcolor_flechas){
    this->cant_pelo=pcant_pelo;
    this->color_flechas=pcolor_flechas;
}

AirBender::AirBender(){
    //todo
}



string AirBender::toString(){
    cout<<"Cantidad de Pelo: "<<cant_pelo<<endl
    <<"Color de Flechas: "<<color_flechas<<endl;
    return " ";
}
