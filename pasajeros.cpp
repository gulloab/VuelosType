#include <string>
using namespace std;
#include "pasajeros.h"

bool pasajero::setNombre(string Nombre)
{
    nombre=Nombre;
    return true;
}///________________________________________

void pasajero::setID(long int id)
{
  ID=id;
}///________________________________________

bool pasajero::setNat(string Nacionalidad)
{
   nacionalidad=Nacionalidad;
  return true;
}///________________________________________

string pasajero::getNombre(void)
{
    return nombre;
}///________________________________________

long int pasajero::getID(void)
{
  return ID;
}///________________________________________

string pasajero::getNat(void)
{
   return nacionalidad;
}///________________________________________




