//
// Created by Lenovo on 18/03/2025.
//

#ifndef SISTEMAGESTION_H
#define SISTEMAGESTION_H
#include <vector>
#include <string>
#include "Venta.h"
#include "Cliente.h"
#include "Producto.h"
using namespace std;

class SistemaGestion {
      private:
        vector<Cliente> clientes;
        vector<Producto> productos;
        vector<Venta> ventas;

      public:
        void agregarProducto(string codigo, string nombre, float precio, int stockInicial);
        void registrarVenta(string idCliente);
        void reabastecerProducto(string codigoProducto, int cantidad);
        Producto* buscarProducto(string ID);
        Cliente* buscarCliente(string idCliente);
        void listarProductos();
        void mostrarVentas();
        float calcularValorInventario();

};
#endif //SISTEMAGESTION_H
