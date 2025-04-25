#include "clientemanager.h"
#include <iostream>
#include <string>
#include "cliente.h"
#include "clientearchivo.h"
using namespace std;
void ClienteManager::CargarCliente()
{
    Cliente NuevoCliente;
    ClienteArchivo NuevoArchivo;

    int Dni;
    string Nombre, Direccion,Correo;
    cout << "Ingrese DNI del cliente : ";
         cin >> Dni;
    cout << "Ingrese NOMBRE del cliente : ";
         cin.ignore();
         getline(cin,Nombre);
    cout << "Ingrese DIRECCION del cliente : ";
        getline(cin,Direccion);
    cout << "Ingrese CORREO del cliente : ";
         getline(cin,Correo);

    NuevoCliente = Cliente(Dni,Nombre,Direccion, Correo);

    if(NuevoArchivo.Guardar(NuevoCliente))
    {
        cout << "Se guardo correctamente" << endl;
    }else{
        cout << "Hubo un error al guardar" << endl;

    }
    }




