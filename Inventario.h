#include <iostream> 
#ifndef INVENTARIO_H
#define INVENTARIO_H  

#include "Producto.h"

class Inventario 
{ 
    private:  
        Producto* productos;   
    public: 
        Inventario(); 
        Inventario(Producto*);
};

#endif