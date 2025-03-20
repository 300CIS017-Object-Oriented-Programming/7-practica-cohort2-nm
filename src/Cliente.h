//
// Created by Lenovo on 18/03/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include <string>
#include "Producto.h"
#include "Venta.h"
using namespace std;

class Cliente {
  private:
    string nombre;
    string idCliente;
    vector<Venta> compras;

  public:
    void agregarCompra(Venta* venta);
    void mostrarHistorialCompras();
    string getNombre();
    string getId();
};



#endif //CLIENTE_H
