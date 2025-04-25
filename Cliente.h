#pragma once
#include <iostream>
#include <string>

class Cliente{


private:
    int _dni;
    char _nombre[30];
    char _direccion[30];
    char _correo[30];
public:
    Cliente();
    Cliente(int dni, std::string nombre, std::string direccion, std::string correo);

    int getDni();
    std::string getNombre();
    std::string getDireccion();
    std::string getCorreo();

    void setDni(int dni);
    void setNombre(std::string nombre);
    void setDireccion(std::string direccion);
    void setCorreo(std::string correo);

};
