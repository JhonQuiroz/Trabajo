#include "headers/Automovil.h"
#include <iostream>

Automovil::Automovil(std::string marca, std::string modelo, int autonomia, int nivelBateria, int puertas, std::string traccion)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria), numeroPuertas(puertas), tipoTraccion(traccion) {}

void Automovil::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    std::cout << "Tipo: Automovil | Puertas: " << numeroPuertas
              << ", Tracción: " << tipoTraccion << std::endl;
}

void Automovil::mostrarTipoCarga() const {
    std::cout << "Carga rapida (DC)" << std::endl;
}
