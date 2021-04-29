#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(){
    this->rfc = "";
    this->nombre = "";
    this->direccion = "";
    this->telefono = 0;
    this->nacimiento = "";
    this->sexo = "";
}

void Cliente::setInformacionPersonal(string rfc,string nombre,string direccion,int telefono,string nacimiento,string sexo){
    this->rfc = rfc;
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->nacimiento = nacimiento;
    this->sexo = sexo;
}