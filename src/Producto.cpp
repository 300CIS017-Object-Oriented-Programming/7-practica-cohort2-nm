
#include "Producto.h"

bool Producto::descontarStock(int cantidad){
  int stock = this->cantidadInicial;
  bool resultado = false;
  if (cantidad <= stock){
    resultado = true;
    this->cantidadInicial -= cantidad;
  }
  return resultado;
}
void Producto::agregarStock(int cantidad){
  this->cantidadInicial += cantidad;
}

string Producto::getId(){
  return this->ID;
 }

void imprimirProducto(){}