
#include "Venta.h"
#include "Venta.h"
Venta::Venta(){
  this-> ID = "N/A";
  this->productosVendidos = nullptr;
}

Venta::Venta(Cliente* cliente){
  this->cliente = cliente;
}
Venta::~Venta(){
     productosVendidos.clear();
}

void Venta::agregaProductoVendido(Producto* producto, int cantidad){
  productosVendidos.push_back(producto);
}

float Venta::calcularTotal(){
    float total = 0;
    for (int i = 0; i < productosVendidos.size(); i++) {
        total += productosVendidos[i]->getPrecio();
    }

  return total;
}

void Venta::mostrarDetalleVenta(){
  cout << "Detalle de venta: " << endl;
  cout << "ID de venta: " << this->ID << endl;
  cout << "Nombre del cliente: " << cliente->getNombre() << endl;

}