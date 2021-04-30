#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include "Empleado.h"git
using namespace std;

class Sucursal{
    private:
        empleado empleados;
        int idSucursal;
        producto inventario;
        
    public:
        Sucursal();
        Sucursal(empleado,int,producto);
        void agregaProducto();
        void eliminaProducto(string);
        void cantidadProductos(int);
        void eliminarEmpleado(id);
        void agregarEmpleado(id);

};
#endif