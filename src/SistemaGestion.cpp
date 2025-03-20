#include "SistemaGestion.h"


void SistemaGestion:: agregarProducto(string codigo, string nombre, float precio, int stockInicial){
 // push back vector productos de una instancia creada de producto
}

void SistemaGestion::rergistrarVenta(string idCliente){
  for(int i = 0; i < clientes.size(); i++){
    if(clientes[i].getId() == idCliente){
      /// crear una instancia de venta y agregarla al vector del cliente
    }
  }
}

void SistemaGestion:: reabastecerProducto(string codigoProducto, int cantidad){
  for(int i = 0; i < productos.size(); i++){
    if(productos[i]->getId() == codigoProducto){
      productos[i];
      // modificar el atributo cantidadInicial de una instancia de producto
    }
}

}

Producto* SistemaGestion::buscarProducto(string ID){
  // recorrer vector de productos
}

Cliente* SistemaGestion::buscarCliente(string idCliente){
  // recorrer vector de clientes
}

void SistemaGestion::listarProductos(){
  // iterar sobre vector de productos y usar imprimirProducto
}

void SistemaGestion::mostrarVentas(){
  for(int i = 0; i < this->ventas.size(); i++){
    ventas[i].mostrarDetalleVenta();
    // iterar sobre vector de ventzs y usar mostrarDetalleVenta
  }
}

float SistemaGestion::calcularValorInventario(){
  // Iterar sobre productos y obtener cantidad y multiplicarlo por obtener stock
}
