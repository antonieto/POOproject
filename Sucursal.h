#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include "Empleado.h" 
using namespace std;

class Sucursal{
    private:
        Empleado* empleados;
        int idSucursal;
        
    public:
        int* cantidades;
        Sucursal();  
        Sucursal(Empleado*, int, int*); 
};
#endif