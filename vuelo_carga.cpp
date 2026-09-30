#include <string>
#include "vuelo.h"
#include "vuelo_carga.h"
vuelos_carga::vuelos_carga(float peso,int numero_vuelo,string name): peso_maximo_soportado(peso)
{
 numero_de_vuelo=numero_vuelo;
 setFlyName(name);
}///___________________________________________________________________


void vuelos_carga::set_Id(int nuevo_valor)
{
  numero_de_vuelo=nuevo_valor;
}///___________________________________________________________________
