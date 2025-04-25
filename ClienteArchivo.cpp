#include "ClienteArchivo.h"


ClienteArchivo::ClienteArchivo()
{
    _NombreArchivo = "Clientes.dat";
}
ClienteArchivo::ClienteArchivo(std::string nombrearchivo)
{
    _NombreArchivo = nombrearchivo;
}
bool ClienteArchivo::Guardar(Cliente Registro){
FILE *pFile;
bool result;
pFile = fopen(_NombreArchivo.c_str(),"ab");

if(pFile==nullptr)
{
return false;
}

result= fwrite(&Registro,sizeof(Cliente),1,pFile);
fclose(pFile);
return result;
}
