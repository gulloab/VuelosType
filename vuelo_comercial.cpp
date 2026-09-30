#include <string>
#include "vuelo.h"
#include "pasajeros.h"
#include "vuelo_comercial.h"

vuelo_comercial::vuelo_comercial(void)
{
}///___________________________________________________________________

void vuelo_comercial::agregarPasajero(string Nombre, long int Id, string Nacionalidad)
{
    pasajero p;
    p.setNombre(Nombre);
    p.setID(Id);
    p.setNat(Nacionalidad);
    pilaPasajeros.apilar(p);
    cout << "Pasajero " << Nombre << " agregado a la pila." << endl;
}///___________________________________________________________________

pasajero vuelo_comercial::obtenerUltimoPasajero()
{
    if (pilaPasajeros.estaVacia()) {
        throw runtime_error("No hay pasajeros en la pila");
    }
    return pilaPasajeros.verCima();
}///___________________________________________________________________

void vuelo_comercial::removerUltimoPasajero()
{
    if (!pilaPasajeros.estaVacia()) {
        pasajero p = pilaPasajeros.sacar();
        cout << "Pasajero " << p.getNombre() << " removido de la pila." << endl;
    } else {
        cout << "No hay pasajeros para remover." << endl;
    }
}///___________________________________________________________________

int vuelo_comercial::obtenerCantidadPasajeros()
{
    return pilaPasajeros.getTamanio();
}///___________________________________________________________________

bool vuelo_comercial::pilaPasjerosVacia()
{
    return pilaPasajeros.estaVacia();
}///___________________________________________________________________

