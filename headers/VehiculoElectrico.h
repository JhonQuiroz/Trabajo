#ifndef VEHICULOELECTRICO_H
#define VEHICULOELECTRICO_H

#include <string>

class VehiculoElectrico {
protected:
    std::string marca;
    std::string modelo;
    int autonomia;
    int nivelBateria;

public:
    VehiculoElectrico(std::string marca, std::string modelo, int autonomia, int nivelBateria);

    virtual ~VehiculoElectrico() {}

    std::string getMarca() const;
    std::string getModelo() const;
    int getAutonomia() const;
    int getNivelBateria() const;

    void setMarca(std::string marca);
    void setModelo(std::string modelo);
    void setAutonomia(int autonomia);
    void setNivelBateria(int nivelBateria);

    virtual void mostrarInformacion() const;
    virtual void mostrarTipoCarga() const = 0; // puro virtual
};

#endif
