#ifndef REGISTER_H
#define REGISTER_H
#include <headers/logica.h>
//#include <iostream>
//using namespace std;

class Register{
private:
    logica l;
    char opt;
public:
    Register();
    void menu(char&);
    void ejecutar(char&);

};

#endif // REGISTER_H
