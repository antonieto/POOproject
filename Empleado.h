#include <iostream> 
#ifndef EMPLEADO_H
#define EMPLEADO_H 
using namespace std;

class Empleado{
    private:
        string cargo;
        string nombre;
        string direccion;
        int telefono;
        string nacimiento;
        string sexo;
        int id;
        int sucursal;

    //Revisado 

    public:
        Empleado();
        Empleado(string, string, string, int, string, string, int,int);
        string imprimirInformacionPersonal();
};
#endif