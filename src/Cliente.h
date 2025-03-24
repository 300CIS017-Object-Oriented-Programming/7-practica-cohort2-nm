
#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include <string>
#include "Cliente.h"
#include "Venta.h"
using namespace std;

class Venta;

class Cliente {
  private:
    string nombre;
    string idCliente;
    vector<Venta*> compras;

  public:
    Cliente(); //constructor sin parametros
    Cliente(string nombre, string idCliente);
    ~Cliente(); //destructor
    void agregarCompra(Venta* venta);
    void mostrarHistorialCompras();
    string getNombre();
    string getIdCliente();
};



#endif //CLIENTE_H
