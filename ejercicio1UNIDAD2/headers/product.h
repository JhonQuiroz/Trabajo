#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>

using namespace std;
class product{
private:
    string nameProduct;
    int stock;
    double price;
    //se aumento
    string idProduct;

public:
    product(string&, string&, int&,double&);
    //se aumento
    string getIdProduct() const;
    void setIdProduct(string&);
    //
    string getNameProduct()const;
    void setNameProduct(string&);
    int getStock()const;
    void setStock(int&);
    double getPrice()const;
    void setPrice(double&);
    string infoProduct() const;
    //
    bool isLowStock() const;


};
#endif // PRODUCT_H
