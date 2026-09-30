#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <iostream>
using namespace std;

// Estructura del nodo para la pila dinámica
template <typename T>
struct Nodo {
    T dato;
    Nodo<T>* siguiente;
    
    Nodo(T d) : dato(d), siguiente(nullptr) {}
};

// Clase Pila genérica basada en punteros
template <typename T>
class Pila {
private:
    Nodo<T>* cima;  // Puntero a la cima de la pila
    int tamanio;    // Número de elementos en la pila
    
public:
    // Constructor
    Pila() : cima(nullptr), tamanio(0) {}
    
    // Destructor - libera memoria dinámicamente
    ~Pila() {
        while (!estaVacia()) {
            sacar();
        }
    }
    
    // Método para apilar un elemento
    void apilar(T dato) {
        Nodo<T>* nuevoNodo = new Nodo<T>(dato);
        nuevoNodo->siguiente = cima;
        cima = nuevoNodo;
        tamanio++;
    }
    
    // Método para desapilar un elemento
    T sacar() {
        if (estaVacia()) {
            throw runtime_error("Error: Intento de desapilar en pila vacía");
        }
        
        Nodo<T>* temp = cima;
        T dato = cima->dato;
        cima = cima->siguiente;
        delete temp;
        tamanio--;
        
        return dato;
    }
    
    // Método para ver la cima sin desapilar
    T verCima() const {
        if (estaVacia()) {
            throw runtime_error("Error: Intento de ver cima en pila vacía");
        }
        return cima->dato;
    }
    
    // Verificar si la pila está vacía
    bool estaVacia() const {
        return cima == nullptr;
    }
    
    // Obtener el tamaño de la pila
    int getTamanio() const {
        return tamanio;
    }
    
    // Vaciar la pila
    void vaciar() {
        while (!estaVacia()) {
            sacar();
        }
    }
    
    // Mostrar contenido de la pila (para debugging)
    void mostrar() const {
        if (estaVacia()) {
            cout << "Pila vacía" << endl;
            return;
        }
        
        cout << "Contenido de la pila (de arriba a abajo): ";
        Nodo<T>* actual = cima;
        while (actual != nullptr) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }
};

#endif // PILA_H_INCLUDED
