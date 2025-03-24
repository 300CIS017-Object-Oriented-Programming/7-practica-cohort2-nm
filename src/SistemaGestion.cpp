#include "SistemaGestion.h"

using namespace std;

SistemaGestion::SistemaGestion() {}

SistemaGestion::~SistemaGestion() {
    for (int i = 0; i < clientes.size(); i++) {
        delete clientes[i];
    }
    for (int i = 0; i < productos.size(); i++) {
        delete productos[i];
    }
    for (int i = 0; i < ventas.size(); i++) {
        delete ventas[i];
    }
}

void SistemaGestion:: agregarProducto(string codigo, string nombre, float precio, int stockInicial){
  productos.push_back(new Producto(codigo, nombre, precio, stockInicial));
 // push back vector productos de una instancia creada de producto
}

void SistemaGestion::registrarVenta(string idCliente){
Cliente* cliente = buscarCliente(idCliente);
    if(cliente){
      Venta* nuevaVenta = new Venta(cliente);
      ventas.push_back(nuevaVenta);
      cliente->agregarCompra(nuevaVenta);
      }else {
        cout << "No se encontro el cliente" << endl;
      }

      /// crear una instancia de venta y agregarla al vector del cliente
    }

void SistemaGestion:: reabastecerProducto(string codigoProducto, int cantidad){
  Producto* producto = buscarProducto(codigoProducto);
    if(producto){
      producto->agregarStock(cantidad);
      }else{
        cout <<"No se encontro el producto" << endl;
      }
}


Producto* SistemaGestion::buscarProducto(string ID){
  for(int i = 0; i < productos.size(); i++){
    if(productos[i]->getId() == ID){
      return productos[i];
    }
  }
  return nullptr; // recorrer vector de productos
}

Cliente* SistemaGestion::buscarCliente(string idCliente){
  for(int i = 0; i < clientes.size(); i++){
    if(clientes[i]->getIdCliente() == idCliente){
      return clientes[i];
    }
  }
  return nullptr;
  // recorrer vector de clientes
}

void SistemaGestion::listarProductos(){
  for (int i = 0; i < productos.size(); i++){
    productos[i]->imprimirProducto();
  // iterar sobre vector de productos y usar imprimirProducto
}
}

void SistemaGestion::mostrarVentas(){
  for(int i = 0; i < ventas.size(); i++){
    ventas[i]->mostrarDetalleVenta();
    // iterar sobre vector de ventzs y usar mostrarDetalleVenta
  }
}

float SistemaGestion::calcularValorInventario() {
    float total = 0;
    for (int i = 0; i < productos.size(); i++) {
        total += productos[i]->getPrecio() * productos[i]->getStock();
    }
    return total;
}
// Iterar sobre productos y obtener cantidad y multiplicarlo por obtener stock