//
// Created by Key Cortés on 14/4/2022.
//

#ifndef DOWNCASTING_UPCASTING_DEPREDADOR_H
#define DOWNCASTING_UPCASTING_DEPREDADOR_H

#include <ostream>
#include "Humanoide.h"

class Depredador : virtual public Humanoide{
    double peso;
public:
    Depredador();

    Depredador(const string &name, double velocidad, double peso);

    double getPeso() const;

    void setPeso(double peso);

    friend ostream &operator<<(ostream &os, const Depredador &depredador);

    string toString() final;

    ~Depredador() override;
};


#endif //DOWNCASTING_UPCASTING_DEPREDADOR_H
