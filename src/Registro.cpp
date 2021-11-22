#include "Registro.h"

   Registro:: Registro(string strNombre){
      this->strNombre = strNombre;
      }
   Registro::~Registro(){
      strNombre.clear();
   }