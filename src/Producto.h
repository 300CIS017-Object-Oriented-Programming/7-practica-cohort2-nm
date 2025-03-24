#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string ID;
    string nombre;
    float precio;
    int cantidadInicial;

public:
    Producto(); // Constructor sin parámetros
    Producto(string ID, string nombre, float precio, int cantidadInicial);
    ~Producto(); // Destructor

    bool descontarStock(int cantidad);
    void agregarStock(int cantidad);
    float getPrecio();
    int getStock();
    string getId();
    void imprimirProducto();
};

#endif // PRODUCTO_H
