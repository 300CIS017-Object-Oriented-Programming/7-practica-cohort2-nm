
#include "Cliente.h"

Cliente::Cliente() : nombre(""), idCliente("") {}

Cliente::Cliente(std::string nombre, std::string idCliente) {
    this->nombre = nombre;
    this->idCliente = idCliente;
}

Cliente::~Cliente() {
    for (int i = 0; i < compras.size(); i++) {
        delete compras[i];  // Libera la memoria de cada compra
    }
    compras.clear();
}
void Cliente::agregarCompra(Venta* venta){
  compras.push_back(venta);
  }

void Cliente::mostrarHistorialCompras(){
  for(int i = 0; i < compras.size(); i++){
    cout << "----- COMPRA #" << i+1 << " -----" << endl;
    compras[i]->mostrarDetalleVenta();
    }
  }

string Cliente::getNombre(){
  return this->nombre;
  }

string Cliente::getIdCliente(){
  return this->idCliente;
}