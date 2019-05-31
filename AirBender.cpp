#include "AirBender.h"
#include <iostream>
using std::cout;
using std::endl;
AirBender::AirBender(string pcant_pelo, string pcolor_flechas, string ppoder, string nacion_origen,string nombre,string sexo,string elemento,int edad)
{
    AirBender::Persona(nacion_origen, nombre, sexo, elemento, edad);
    this->cant_pelo = pcant_pelo;
    this->color_flechas = pcolor_flechas;
    this->poder = ppoder;
}



string AirBender::toString()
{
    cout << "Cantidad de Pelo: " << cant_pelo << endl
         << "Color de Flechas: " << color_flechas << endl
         << "Poder Especial: " << poder << endl;
    return " ";
}
 