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

Cliente::Cliente(string rfc,string nombre,string direccion,int telefono,string nacimiento,string sexo){
    this->rfc = rfc;
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->nacimiento = nacimiento;
    this->sexo = sexo;
}


//podemos poner en el main un for donde en un arreglo que contenga 
//los clientes haga lo siguiente:
//for (blabla bla){
 //     cout<<"********************"<<endl;
 //    cout<<"Información del cliente "<<cliente[i]<<" :"<<endl;
//    cliente[i].imprimirInformacionPersonal();
//}
string Cliente::imprimirInformacionPersonal(){
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"RFC: "<<this->rfc<<endl;
    cout<<"Dirección: "<<this->direccion<<endl;
    cout<<"Teléfono: "<<this->telefono<<endl;
    cout<<"Nacimiento: "<<this->nacimiento<<endl;
    cout<<"Sexo: "<<this->sexo<<endl;
}