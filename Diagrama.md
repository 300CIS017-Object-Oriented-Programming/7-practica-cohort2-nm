classDiagram
class SistemaGestion{
-list <producto> Productos
-list <cliente> Clientes
-list <inventario> Inventario

    +void agregarProducto(string codigo, string nombre, float precio, int stockInicial)
    +void registrarVenta(int idCliente)
    +void reabastecerProducto(string codigoProducto, int cantidad)
    +Producto* buscarProducto(string codigo)
    +Cliente* buscarCliente(int idCliente)
    +void listarProductos()
    +void mostrarVentas()
    +float calcularValorInventario()

}
class Producto{
-string ID
-string nombre
-float precio
-int cantidadInicial

    +bool descontarStock(int cantidad)
    +bool agregarStock(int cantidad)
}


class Cliente{
- Espacio espacio
-int duracion

    +void agregarCompra(Venta*venta)
    +void mostrarHistorialCompras()
}

class Venta{
-string ID
-Cliente cliente
-vector <Productos> productosVendidos

    +venta(Cliente* cliente)
    +void agregarProductoVendido(Producto*producto, int cantidad)
    +float calcularTotal()
    +void mostrarDetalleVenta()
}


SistemaGestion o-- Producto
SistemaGestion o-- Cliente
SistemaGestion o-- Venta
Venta --> Cliente
Venta --> Producto
