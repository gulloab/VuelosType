#include <iostream>
#include <string>
using namespace std;

#include "vuelo.h"
#include "vuelo_carga.h"
#include "pasajeros.h"
#include "vuelo_comercial.h"
#include "pila.h"

///++++++++++++
/// MAIN()
///++++++++++++
int main()
{
    cout << "\n=== PRUEBA DE PILA DINÁMICA CON VUELOS ===" << endl;
    
    // Crear instancias de vuelos
    vuelo vuelo_generico;
    vuelos_carga vuelo_c1(10500, 1500, "DHL OverNight CR-MIA");
    vuelo_comercial vuelo_sj_mia222;
    
    // Demostración de pila dinámica de pasajeros
    cout << "\n--- Agregando pasajeros al vuelo comercial ---" << endl;
    vuelo_sj_mia222.agregarPasajero("Juan", 108008000, "Costarricense");
    vuelo_sj_mia222.agregarPasajero("Carlo", 10340, "Panameño");
    vuelo_sj_mia222.agregarPasajero("Maria", 20504050, "Nicaragüeña");
    
    cout << "\nCantidad de pasajeros en la pila: " << vuelo_sj_mia222.obtenerCantidadPasajeros() << endl;
    
    cout << "\n--- Información del último pasajero (cima de pila) ---" << endl;
    try {
        pasajero ultimoPasajero = vuelo_sj_mia222.obtenerUltimoPasajero();
        cout << "Nombre: " << ultimoPasajero.getNombre() 
             << " | ID: " << ultimoPasajero.getID() 
             << " | Nacionalidad: " << ultimoPasajero.getNat() << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    cout << "\n--- Removiendo pasajeros (desapilando) ---" << endl;
    vuelo_sj_mia222.removerUltimoPasajero();
    vuelo_sj_mia222.removerUltimoPasajero();
    
    cout << "\nCantidad de pasajeros restantes: " << vuelo_sj_mia222.obtenerCantidadPasajeros() << endl;
    
    cout << "\n--- Información de vuelos ---" << endl;
    cout << "Vuelo generico ID: " << vuelo_generico.get_Id() << endl;
    cout << "Vuelo carga ID: " << vuelo_c1.get_Id() << endl;
    vuelo_c1.set_Id(500);
    cout << "Vuelo carga ID (actualizado): " << vuelo_c1.get_Id() << endl;
    
    cout << "\n--- Demostrando pila dinámica de vuelos ---" << endl;
    Pila<vuelo_comercial> pilaVuelos;
    
    vuelo_comercial vuelo1;
    vuelo_comercial vuelo2;
    vuelo_comercial vuelo3;
    
    pilaVuelos.apilar(vuelo1);
    pilaVuelos.apilar(vuelo2);
    pilaVuelos.apilar(vuelo3);
    
    cout << "Cantidad de vuelos en pila: " << pilaVuelos.getTamanio() << endl;
    
    cout << "\n=== FIN DE PRUEBA ===" << endl;
    
    return 0;
}

