#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include "Producto.h" 
#include "Empleado.h" 
#include "Cliente.h"

using namespace std;

class Orden{
    private:
        Producto* carro;
        Empleado vendedor;
        Cliente cliente;
        

    public:
        Orden();
        Orden(Producto*,Empleado,Cliente); 
        void agregaAddProducto(Producto);
};
#endif 

/* public:
    int id;
    Inventario inventarios;
    Clientes cliente;
    float total;
    string formapago;
    Ordenes();
    Ordenes(int i, Inventario in, Clientes cl, float t, string fp);
    void agregarProducto(string c, int cant, Inventario in_total);
    void quitarProducto(string c);
    void totalOrden();
    void muestraDatos();   

}; */
