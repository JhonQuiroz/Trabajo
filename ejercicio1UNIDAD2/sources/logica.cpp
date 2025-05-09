#include <headers/logica.h>
#include <iostream>

void logica::add(string n, int s, double p){
     string emptyId = "000";
    a.addProduct(new product(emptyId,n, s, p));
}

//se aumento
void logica::addId(string id, string n, int s, double p) {
    a.addProduct(new product(id, n, s, p)); // COMENTARIO: nuevo método con ID
}

//******
void logica::list(){
    for(product* p : a.getProducts()){
        cout << p->infoProduct() << endl;
    }
}

void logica::searchById(string id) {
    bool found = false;
    for (product* p : a.getProducts()) {
        if (p->getIdProduct() == id) {
            cout << "Producto encontrado: " << p->infoProduct() << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Producto no encontrado con ID: " << id << endl;
    }
}

//se aumento
void logica::nivelStock() {
    cout << "Productos con stock menor a 5 unidades:" << endl;
    bool found = false;
    for (product* p : a.getProducts()) {
        if (p->isLowStock()) {
            cout << p->infoProduct() << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No hay productos con stock bajo." << endl;
    }
}
