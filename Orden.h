#include "Producto.h" 
#include "Cliente.h"
#include "Inventario.h"

class Ordenes
{
//private:


public:
    int id;
    Inventario inventarios;
    Cliente cliente;
    float total;
    string formapago;
    Ordenes();
    Ordenes(int i, Inventario in, Cliente cl, float t, string fp);
    void agregarProducto(string c, int cant, Inventario in_total);
    void quitarProducto(string c);
    void totalOrden();
    void muestraDatos();   

};