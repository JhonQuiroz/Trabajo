#ifndef LOGICA_H
#define LOGICA_H
#include <headers/almacen.h>

class logica{
private:
    almacen a;
public:
    void add(string,int,double);
    void addId(string, string, int, double);
    void list();
void searchById(string);
    void nivelStock();
};
#endif // LOGICA_H
