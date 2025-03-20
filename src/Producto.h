

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
    bool descontarStock(int cantidad);
    void agregarStock(int cantidad);
    string getId();
    void imprimirProducto();
};



#endif //PRODUCTO_H
