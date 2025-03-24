
#ifndef VENTA_H
#define VENTA_H
#include <string>
#include "Cliente.h"
#include "Producto.h"
#include <vector>
#include <iostream>
using namespace std;

class Venta {
  private:
    string ID;
    Cliente* cliente;
    vector<Producto*> productosVendidos;

  public:
    Venta(); //constructor sin parametros
    Venta(Cliente* cliente);
    ~Venta(); //Destrusctor
    void agregaProductoVendido(Producto* producto, int cantidad);
    float calcularTotal();
    void mostrarDetalleVenta();


};

#endif //VENTA_H
