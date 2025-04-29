#pragma once
#include "Cliente.h"
#include <string>


class ClienteArchivo
{
private:
    std::string _NombreArchivo;
public:
    ClienteArchivo();
    ClienteArchivo(std::string _NombreArchivo);
    bool Guardar(Cliente Registro);
    void Buscar();
};
