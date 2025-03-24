#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto() {
 ID = "N/A";
 nombre = "Desconocido";
 precio = 0.0;
 cantidadInicial = 0;
}

// Constructor con parámetros
Producto::Producto(string ID, string nombre, float precio, int cantidadInicial) {
  this->ID = ID;
  this->nombre = nombre;
  this->precio = precio;
  this->cantidadInicial = cantidadInicial;
}

// Destructor
Producto::~Producto() {
}


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

float Producto::getPrecio() {
  return this->precio;
}

int Producto::getStock() {
  return this->cantidadInicial;
}

void Producto::imprimirProducto(){
  cout << "ID: " << ID << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Precio: $" << getPrecio() << endl;
  cout << "Stock disponible: " << getStock() << endl;
}