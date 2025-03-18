
#include "Venta.h"
#include "Venta.h"

Venta::Venta(Cliente* cliente){
  this->cliente = *cliente;
}

void Venta::agregaProductoVendido(Producto* producto, int cantidad){
  this->productosVendidos.push_back(*producto);
}

float calcularTotal(){}
void mostrarDetalleVenta(){
  cout << "Detalle de venta: " << endl;
  cout << "ID de venta: " << ID << endl;
  cout << "Nombre del cliente: " << this->cliente.getNombre() << endl;


}