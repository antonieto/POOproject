#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include <Producto.h>

using namespace std;

class Orden{
    private:
        producto carro;
        vendedor empleado;
        cliente cliente;
        

    public:
        Orden();
        Orden(producto,vendedor,cliente);
};
#endif