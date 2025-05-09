#include "headers/VehiculoElectrico.h"
#include <iostream>

VehiculoElectrico::VehiculoElectrico(std::string marca, std::string modelo, int autonomia, int nivelBateria)
    : marca(marca), modelo(modelo), autonomia(autonomia), nivelBateria(nivelBateria) {}

std::string VehiculoElectrico::getMarca() const { return marca; }
std::string VehiculoElectrico::getModelo() const { return modelo; }
int VehiculoElectrico::getAutonomia() const { return autonomia; }
int VehiculoElectrico::getNivelBateria() const { return nivelBateria; }

void VehiculoElectrico::setMarca(std::string marca) { this->marca = marca; }
void VehiculoElectrico::setModelo(std::string modelo) { this->modelo = modelo; }
void VehiculoElectrico::setAutonomia(int autonomia) { this->autonomia = autonomia; }
void VehiculoElectrico::setNivelBateria(int nivelBateria) { this->nivelBateria = nivelBateria; }

void VehiculoElectrico::mostrarInformacion() const {
    std::cout << "Marca: " << marca << ", Modelo: " << modelo
              << ", Autonomia: " << autonomia << " km, Bateria: "
              << nivelBateria << "%" << std::endl;
}
