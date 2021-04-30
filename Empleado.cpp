#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(){
    cargo = "";
    nombre = "";
    direccion = "";
    telefono = 0;
    nacimiento = "";
    sexo = "";
    id = 0;
    sucursal = 0;
}

Empleado::Empleado(string _cargo, string _nombre , string _direccion, int _telefono, string _nacimiento, string _sexo, int _id,int _sucursal){
    cargo = _cargo;
    nombre = _nombre;
    direccion = _direccion;
    telefono = _telefono;
    nacimiento = _nacimiento;
    sexo = _sexo;
    id = _id;
    sucursal = _sucursal;
}
string Empleado::imprimirInformacionPersonal(){
    cout<<"Cargo: "<<cargo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dirección: "<<direccion<<endl;
    cout<<"Teléfono: "<<telefono<<endl;
    cout<<"Nacimiento: "<<nacimiento<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Sucursal: "<<sucursal<<endl;
}
    