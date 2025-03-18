//
// Created by Lenovo on 18/03/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include <string>

class Cliente {
  private:
    string nombre;
    string idCliente;
    vector<Producto> compras;

  public:
    void agregarCompra(Venta* venta);
    void mostrarHistorialCompras();
    string getNombre();
};



#endif //CLIENTE_H
