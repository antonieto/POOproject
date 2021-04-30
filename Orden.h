#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include "Producto.h" 
#include "Empleado.h" 
#include "Cliente.h"

using namespace std;

class Orden{
    private:
        Producto carro;
        Empleado vendedor;
        Cliente cliente;
        

    public:
        Orden();
        Orden(Producto,Empleado,Cliente);
};
#endif