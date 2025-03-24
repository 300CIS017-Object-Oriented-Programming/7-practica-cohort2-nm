#include <iostream>
#include "src/SistemaGestion.h"

using std::cin;
using std::cout;
using std::string;

using namespace std;

void mostrarMenu() {
    cout << "\n--- Sistema de Gestión ---\n";
    cout << "1. Agregar producto\n";
    cout << "2. Listar productos\n";
    cout << "3. Registrar venta\n";
    cout << "4. Reabastecer producto\n";
    cout << "5. Mostrar ventas\n";
    cout << "6. Calcular valor del inventario\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    SistemaGestion sistema;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                string codigo, nombre;
                float precio;
                int stock;

                cout << "Código del producto: ";
                getline(cin, codigo);
                cout << "Nombre del producto: ";
                getline(cin, nombre);
                cout << "Precio: ";
                cin >> precio;
                cout << "Stock inicial: ";
                cin >> stock;
                cin.ignore();

                sistema.agregarProducto(codigo, nombre, precio, stock);
                cout << "Producto agregado.\n";
                break;
            }
            case 2:
                sistema.listarProductos();
                break;
            case 3: {
                string idCliente;
                cout << "ID del cliente: ";
                getline(cin, idCliente);
                sistema.registrarVenta(idCliente);
                break;
            }
            case 4: {
                string codigo;
                int cantidad;
                cout << "Código del producto: ";
                getline(cin, codigo);
                cout << "Cantidad a reabastecer: ";
                cin >> cantidad;
                cin.ignore();
                sistema.reabastecerProducto(codigo, cantidad);
                break;
            }
            case 5:
                sistema.mostrarVentas();
                break;
            case 6:
                cout << "Valor total del inventario: $" << sistema.calcularValorInventario() << endl;
                break;
            case 7:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción no válida, intenta de nuevo.\n";
                break;
        }
    } while (opcion != 7);

    return 0;
}
