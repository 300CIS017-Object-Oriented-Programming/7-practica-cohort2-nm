#include "SistemaGestion.h"


void SistemaGestion:: agregarProducto(string codigo, string nombre, float precio, int stockInicial){

}

void SistemaGestion::registrarVenta(string idCliente){
  for(int i = 0; i < clientes.size(); i++){
    if(clientes[i].getId() == idCliente){
      ///
    }
  }
}

void SistemaGestion:: reabastecerProducto(string codigoProducto, int cantidad){
  for(int i = 0; i < productos.size(); i++){
    if(productos[i]->getId() == codigoProducto){
      productos[i];
    }
}

}

Producto* SistemaGestion::buscarProducto(string ID){
}

Cliente* SistemaGestion::buscarCliente(string idCliente){
}

void SistemaGestion::listarProductos(){
}

void SistemaGestion::mostrarVentas(){
  for(int i = 0; i < this->ventas.size(); i++){
    ventas[i].mostrarDetalleVenta();
  }
}

float SistemaGestion::calcularValorInventario(){
}
