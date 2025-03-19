
#include "Venta.h"
#include "Venta.h"

Venta::Venta(Cliente* cliente){
  this->cliente = *cliente;
}

void Venta::agregaProductoVendido(Producto* producto, int cantidad){
  this->productosVendidos.push_back(*producto);
}

float Venta::calcularTotal(){

  return 0.0;
}

void Venta::mostrarDetalleVenta(){
  cout << "Detalle de venta: " << endl;
  cout << "ID de venta: " << this->ID << endl;
  cout << "Nombre del cliente: " << cliente.getNombre() << endl;

}