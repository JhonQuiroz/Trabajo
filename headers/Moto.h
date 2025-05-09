#ifndef MOTO_H
#define MOTO_H

#include "VehiculoElectrico.h"

class Moto : public VehiculoElectrico {
private:
    int cilindradaElectrica;
    std::string tipoFreno;

public:
    Moto(std::string marca, std::string modelo, int autonomia, int nivelBateria, int cilindrada, std::string freno);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif
