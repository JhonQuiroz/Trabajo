#include "headers/Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(std::string marca, std::string modelo, int autonomia, int nivelBateria, std::string tipoBateria, bool asistencia)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria), tipoBateria(tipoBateria), asistenciaPedaleo(asistencia) {}

void Bicicleta::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    std::cout << "Tipo: Bicicleta Electrica | Bateria: " << tipoBateria
              << ", Asistencia al pedaleo: " << (asistenciaPedaleo ? "Si" : "No") << std::endl;
}

void Bicicleta::mostrarTipoCarga() const {
    std::cout << "Carga por panel solar" << std::endl;
}
