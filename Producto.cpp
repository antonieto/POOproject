#include <iostream>
#include "Producto.h"
using namespace std;
Producto:: Producto(){
    this->codigo="";
    this->nombre="";
    this->precioCompra=0.0;
    this->precioVenta=0.0;
    this->cantidadExistente=0;
    this->peso=0.0;
}

Producto:: Producto(string codigo, string nombre,float precioCompra, float precioVenta,int cantidadExistente,float peso,float tamaño){
    this->codigo=codigo;
    this->nombre=nombre;
    this->precioCompra=precioCompra;
    this->precioVenta=precioVenta;
    this->cantidadExistente=cantidadExistente;
    this->peso=peso;
}