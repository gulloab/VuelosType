# Sistema de Gestión de Vuelos en C++

Este repositorio contiene un sistema de gestión de vuelos implementado en C++ basado en Programación Orientada a Objetos (POO) y estructuras de datos dinámicas. El sistema permite administrar diferentes tipos de vuelos e incluye una implementación de pila dinámica personalizada para la gestión de pasajeros.

## Arquitectura del Proyecto

El proyecto está estructurado utilizando clases modulares y herencia para diferenciar los tipos de vuelos y gestionar sus datos correspondientes:

*   **`vuelo`**: Es la clase base del sistema que gestiona el identificador (`numero_de_vuelo`) y el nombre genérico del vuelo.
*   **`vuelos_carga`**: Hereda de la clase `vuelo` y añade la capacidad de registrar el peso máximo soportado para operaciones de carga.
*   **`vuelo_comercial`**: Hereda de la clase `vuelo` y se encarga de gestionar a los pasajeros a través de una estructura de pila dinámica. 
*   **`pasajero`**: Almacena los datos personales de un viajero, específicamente su nombre, ID y nacionalidad.
*   **`Pila<T>`**: Es una clase template genérica que implementa una pila dinámica basada en punteros y nodos enlazados.

## Características de la Pila Dinámica

Recientemente, el sistema fue actualizado para reemplazar los arreglos estáticos (con límite de capacidad de 100) por una estructura dinámica. Esta actualización proporciona las siguientes ventajas:

*   **Memoria dinámica**: La estructura crece según la necesidad del programa sin un límite de capacidad predefinido.
*   **Comportamiento LIFO**: La gestión de los elementos sigue un orden explícito de "Último en entrar, primero en salir" (Last In, First Out).
*   **Operaciones O(1)**: Todos los métodos principales (`apilar()`, `sacar()`, `verCima()`) se ejecutan en tiempo constante, garantizando alta eficiencia.
*   **Gestión segura**: Cuenta con manejo automático de memoria mediante su destructor para prevenir fugas y lanza excepciones de tipo `runtime_error` en caso de operaciones inválidas, como intentar desapilar una estructura vacía.
*   **Reutilización**: Al estar diseñada como un template, permite apilar cualquier tipo de dato u objeto, incluso instancias enteras de la clase `vuelo_comercial`.

## Uso y Demostración

El archivo principal provee una demostración exhaustiva del comportamiento del sistema. Al ejecutar el programa, se realiza lo siguiente:

1.  Creación de instancias de `vuelo`, `vuelos_carga` y `vuelo_comercial`.
2.  Agregación sucesiva de instancias de `pasajero` al vuelo comercial utilizando el método `agregarPasajero()`.
3.  Extracción de la información del pasajero en la cima de la pila mediante el método `obtenerUltimoPasajero()`.
4.  Remoción de elementos demostrando el flujo de desapilado seguro mediante `removerUltimoPasajero()`.
5.  Demostración de la versatilidad de la pila instanciando una `Pila<vuelo_comercial>` para apilar múltiples vuelos.

## Compilación

Para compilar el proyecto utilizando `g++`, ejecuta el siguiente comando en tu terminal:

```bash
g++ main.cpp pasajeros.cpp vuelo_carga.cpp vuelo_comercial.cpp -o sistema_vuelos
```

Para ejecutar el programa compilado:

```bash
./sistema_vuelos
```
