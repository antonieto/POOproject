#include "Producto.h" 
#include "Cliente.h"
#include "Inventario.h"

class Ordenes
{
//private:


<<<<<<< HEAD
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
=======
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
>>>>>>> 858f9d9e153de144277aaacb9d1317c6496ac558
