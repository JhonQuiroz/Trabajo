#ifndef BICICLETA_H
#define BICICLETA_H

#include "VehiculoElectrico.h"

class Bicicleta : public VehiculoElectrico {
private:
    std::string tipoBateria;
    bool asistenciaPedaleo;

public:
    Bicicleta(std::string marca, std::string modelo, int autonomia, int nivelBateria, std::string tipoBateria, bool asistencia);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif
