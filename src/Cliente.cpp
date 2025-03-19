
#include "Cliente.h"


void Cliente::agregarCompra(Venta* venta){
  }

void Cliente::mostrarHistorialCompras(){
  for(int i = 0; i < compras.size(); i++){
    cout << "----- COMPRA #" << i+1 << " -----" << endl;
    compras[i].mostrarDetalleVenta();
    }
  }

string Cliente::getNombre(){
  return this->nombre;
  }

string Cliente::getId(){
  return this->idCliente;
}