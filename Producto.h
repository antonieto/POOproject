#include <iostream> 
#ifndef PRODUCTO_H
#define PRODUCTO_H 
using namespace std;

class Producto{
    private:
        string codigo;
        string nombre;
        float precioCompra;
        float precioVenta;
        int cantidadExistente;
        float peso;
        float tamaño;

    public:
        Producto();
        Producto(string codigo, string nombre,float precioCompra, float precioVenta,int cantidadExistente,float peso,float tamaño);
};
#endif