#include "headers/Moto.h"
#include <iostream>

Moto::Moto(std::string marca, std::string modelo, int autonomia, int nivelBateria, int cilindrada, std::string freno)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria), cilindradaElectrica(cilindrada), tipoFreno(freno) {}

void Moto::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    std::cout << "Tipo: Moto Electrica | Cilindrada: " << cilindradaElectrica
              << " cc, Freno: " << tipoFreno << std::endl;
}

void Moto::mostrarTipoCarga() const {
    std::cout << "Carga estandar (AC)" << std::endl;
}
