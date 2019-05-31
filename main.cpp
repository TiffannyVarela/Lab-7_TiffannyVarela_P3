#include"Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NonBender.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <typeinfo>
#include <vector>
using std::vector;

int menu();
int menu2();
int menu3();

int main(){
    int opc=0;
    int opc2=0;
    int opc3=0;
    Persona* persona;
    string nacion_origen, nombre, sexo,poder;
    int edad;
    AirBender* airbender;
    string cant_pelo, color_flechas;
    FireBender* firebender;
    int num_cicatrices, num_victorias;
    WaterBender* waterbender;
    string tribu, arma;
    EarthBender* earthbender;
    int coles, graduacion;
    NonBender* nonbender;
    string trabajo, fuerza, velocidad;
    string rango, fuerza2;


    AirBender aang = AirBender("1", "azules", "avatar","Honduras", "Aang", "Indefinido", "airecito", 1);      
    switch (opc=menu())
    {
    case 1:    
        cout<<"Nacion de origen: "<<endl;
        cin>>nacion_origen;
        cout<<"Nombre: "<<endl;
        cin>>nombre;
        cout<<"Sexo: "<<endl;
        cin>>sexo;
        cout<<"Edad: "<<endl;
        cin>>edad;

        opc2=menu2();
        if (opc2>=1 && opc2<=4)
        {
            switch (opc3=menu3())
            {
            case 1:
                cout<<"Rango: "<<endl;
                cin>>rango;
                cout<<"Fuerza: "<<endl;
                cin>>fuerza;
                poder="Ofensivo: Rango-> "+rango+" Fuerza->"+fuerza;
                break;

            case 2:
                cout<<"p2"<<endl;
                break;

            case 3:
                cout<<"p3"<<endl;
                break;

            case 4:
                cout<<"p4"<<endl;
                break;
                
            }
        }
        else{
            poder="Ninguno";
        }
        switch (opc2)
        {
        case 1:
            cout<<"Cantidad de Pelo: "<<endl;
            cin>>cant_pelo;
            cout<<"Color de Flechas: "<<endl;
            cin>>color_flechas;
            airbender = new AirBender( "5", color_flechas, poder,  nacion_origen, nombre, sexo, "Aire", edad);
            break;

        case 2:
            cout<<"Numero de Cicatrices: "<<endl;
            cin>>num_cicatrices;
            cout<<"Numero de Victorias: "<<endl;
            cin>>num_victorias;
            firebender = new FireBender(num_cicatrices, num_victorias,poder,  nacion_origen, nombre, sexo, "Fuego", edad);
            break;

        case 3:
            cout<<"Tribu de Origen: "<<endl;
            cin>>tribu;
            cout<<"Arma de Preferencia: "<<endl;
            cin>>arma;
            waterbender = new WaterBender (tribu, arma,poder,   nacion_origen, nombre, sexo, "Normal", edad);
            break;

        case 4:
            cout<<"Cantidad de Coles: "<<endl;
            cin>>coles;
            cout<<"Graduacion de Ojos: "<<endl;
            cin>>graduacion;
            if (graduacion<0 || graduacion>20)
            {
                cout<<"Graduacion de Ojos: "<<endl;
                cin>>graduacion;
            }
            earthbender = new EarthBender(coles, graduacion,poder,  nacion_origen, nombre, sexo, "Tierra", edad);
            break;

        case 5:
            cout<<"Trabajo: "<<endl;
            cin>>trabajo;
            cout<<"Fuerza: "<<endl;
            cin>>fuerza;
            cout<<"Velocidad: "<<endl;
            cin>>velocidad;
            nonbender = new NonBender(trabajo, fuerza, velocidad, poder,  nacion_origen, nombre, sexo, "Normal", edad);
            cout<<nonbender->toString()<<endl;
            break;                
        }
        break;

    case 2:    
        break;

    case 3:    
        break;

    case 4:
        cout<<"Saliendo del programa"<<endl;    
        break;
        
    }

    return 0;
}

int menu(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Agregar"<<endl
        <<"2.- Eliminar"<<endl
        <<"3.- Listar"<<endl
        <<"4.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 4"<<endl;
  }
  }//end del while
        return 0;
}

int menu2(){
        while(true){
        cout<<"Tipo de Maestro"<<endl
        <<"1.- Air Bender"<<endl
        <<"2.- Fire Bender"<<endl
        <<"3.- Water Bender"<<endl
        <<"4.- Earth Bender"<<endl
        <<"5.- Non Bender"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 5){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 5"<<endl;
  }
  }//end del while
        return 0;
}

int menu3(){
        while(true){
        cout<<"Poder Especial"<<endl
        <<"1.- Ofensivo"<<endl
        <<"2.- Defensivo"<<endl
        <<"3.- Curativo"<<endl
        <<"4.- Invocacion de Mascota"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 4"<<endl;
  }
  }//end del while
        return 0;
}
