#include "headers/almacen.h"

// Método para agregar un producto
bool almacen::addProduct(product* p) {
    products.push_back(p);  // Agrega el producto al vector
    return true;  // Retorna true cuando el producto se agrega correctamente
}

// Método para obtener los productos
vector<product*> almacen::getProducts() const {
    return products;  // Retorna el vector de productos
}
