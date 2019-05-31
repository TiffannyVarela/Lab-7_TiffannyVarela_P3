#include "FireBender.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

FireBender::FireBender(int pnum_cicatrices, int pnum_victorias){
    this->num_cicatrices=pnum_cicatrices;
    this->num_victorias=pnum_victorias;
}


string FireBender::toString(){
    cout<<"Numero de Cicatrices: "<<endl
    <<"Numero de Victorias: "<<endl;
    return " ";
}