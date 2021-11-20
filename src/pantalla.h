#ifndef pantalla_h
#define pantalla_h
#include <string>
#include "Registro.h"
#include "Memoria.h"
using namespace std;
class Pantalla
{
private:
    int posX;
    int posY;
    string strColor;
    Registro objRegistro; 
    //Memoria memoria;
public:
    Pantalla(int x,int y,string strColor,Registro* objRegistro);
    //Pantalla(int x,int y,string strColor,Memoria* memoria);
    ~Pantalla()
    void pintar();
}
#endif