#ifndef memoria_h
#define memoria_h

#include <string>
#include <vector>

using namespace std;

class Memoria
{
private:

    int numCapacidad;
    vector<int> arrMemoria;
    //vector<Byte> arrMemoria;

public:
    Memoria(int numCapacidad);
    ~Memoria();
    string leer(int numPosicion);
    void escribir(int numPosicion, string valor);
};

#endif