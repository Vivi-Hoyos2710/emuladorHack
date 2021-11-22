#ifndef registro_h
#define regirtro_h

#include <iostream>
#include <string>
#include "Byte.h"

using namespace std;

class Registro: public Byte{
   private:
   string strNombre;

   public:
   Registro(string strNombre);
   ~Registro();

};
#endif