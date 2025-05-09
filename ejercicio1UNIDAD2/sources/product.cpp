#include "headers/product.h"

// Constructor
product::product(string&i,string& n, int& s, double& p)
    : idProduct(i), nameProduct(n), stock(s), price(p) {}

//Getter y setter para idproduct
string product::getIdProduct() const { return idProduct; }
void product::setIdProduct(string& i) { idProduct = i; }

// Getter y Setter para nameProduct
string product::getNameProduct() const { return nameProduct;}

void product::setNameProduct(string& n) {nameProduct = n;}

// Getter y Setter para stock
int product::getStock() const {return stock;}

void product::setStock(int& s) {stock = s;}

// Getter y Setter para price
double product::getPrice() const {return price;}
void product::setPrice(double& p) { price = p;}

string product::infoProduct()const{
    return nameProduct+"\t"+to_string(stock)+"\t"+to_string(price);

}

//se aumento
bool product::isLowStock() const {
    return stock < 5;
}
