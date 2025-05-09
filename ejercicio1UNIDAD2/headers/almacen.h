#ifndef ALMACEN_H
#define ALMACEN_H
#include "product.h"
#include <vector>

using namespace std;

class almacen {
private:
    vector<product*> products;  // Vector que contiene los productos

public:
    bool addProduct(product*);  // Método para agregar un producto
    vector<product*> getProducts() const;  // Método para obtener los productos
};


#endif // ALMACEN_H
