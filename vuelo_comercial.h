#ifndef VUELO_COMERCIAL_H_INCLUDED
#define VUELO_COMERCIAL_H_INCLUDED

#include "pila.h"

class vuelo_comercial: public vuelo{
private:
  Pila<pasajero> pilaPasajeros;  // Pila dinámica de pasajeros
protected:

public:
  vuelo_comercial(void);
  void agregarPasajero(string, long int, string);
  pasajero obtenerUltimoPasajero();
  void removerUltimoPasajero();
  int obtenerCantidadPasajeros();
  bool pilaPasjerosVacia();
};///______________________________________________________________
#endif // VUELO_COMERCIAL_H_INCLUDED
