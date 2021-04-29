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

    public:
        Empleado();
        void setInformacionPersonal(string, string, string, int, string, string, int,int);
        void transferir(int);
};
#endif