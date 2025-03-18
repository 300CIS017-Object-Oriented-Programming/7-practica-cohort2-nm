//
// Created by Lenovo on 18/03/2025.
//

#ifndef SISTEMAGESTION_H
#define SISTEMAGESTION_H
#include <vector>

class SistemaGestion {
      private:
        vector<cliente> Clientes;
        vector<producto> Productos;
        vector<venta> Ventas;

      public:
        void agregarProducto(string codigo, string nombre, float precio, int stockInicial);
        void registrarVenta(int idCliente);
        void reabastecerProducto(string codigoProducto, int cantidad);
        Producto* buscarProducto(string ID);
        Cliente* buscarCliente(string idCliente);
        void listarProductos();
        void mostrarVentas();
        float calcularValorInventario();

};



#endif //SISTEMAGESTION_H
