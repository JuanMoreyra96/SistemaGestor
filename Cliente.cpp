#include "cliente.h"
#include <iostream>
#include "cstring"
using namespace std;

Cliente::Cliente()
{
    _dni=0;
    strcpy(_nombre,"");
    strcpy(_direccion,"");
    strcpy(_correo,"");
}
Cliente::Cliente(int dni, std::string nombre, std::string direccion, std::string correo)
{
    int setDni(dni);
    std::string setNombre(nombre);
    std::string setDireccion(direccion);
    std::string setCorreo(correo);
}

