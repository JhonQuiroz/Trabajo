#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "VehiculoElectrico.h"

class Automovil : public VehiculoElectrico {
private:
    int numeroPuertas;
    std::string tipoTraccion;

public:
    Automovil(std::string marca, std::string modelo, int autonomia, int nivelBateria, int puertas, std::string traccion);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif
