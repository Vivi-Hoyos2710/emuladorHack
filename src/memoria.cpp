#include "memoria.h"

Memoria::Memoria(int numCapacidad)
{

    for (int i = 0; i < numCapacidad; i++)
    {
        arrMemoria.push_back(0);//puede llenarse de lo que sea que no cumpla las condiciones de 16 bits
    }
    
}

Memoria::~Memoria()
{
}

string Memoria::leer(int numPosicion)
{
    //if(arrMemoria[numPosicion].leer.length() < 16){
    if(to_string(arrMemoria[numPosicion]).length() < 16){
        throw "la dirección a la que se intenta acceder presenta un error";
    }
    else{
        return to_string(arrMemoria[numPosicion]);
        //return arrMemoria[numPosicion].leer; cuando sea un byte se accederá directamente al string que contiene
    }
}

void Memoria::escribir(int numPosicion, string valor)
{
    arrMemoria[numPosicion]=stoi(valor);
    //arrMemoria[numPosicion].escribir(valor); cuando sea un byte se accederá directamente al string que contiene
}