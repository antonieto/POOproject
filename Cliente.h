#include <iostream>
#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
using namespace std;

class Cliente{
    private:
        string rfc;
        string nombre;
        string direccion;
        int telefono;
        string nacimiento;
        string sexo;
    public:
        Cliente();
        void setInformacionPersonal(string rfc,string nombre,string direccion,int telefono,string nacimiento,string sexo);
        string imprimirInformacionPersonal();
};
#endif