//
// Created by Key Cortés on 14/4/2022.
//

#ifndef DOWNCASTING_UPCASTING_ALIEN_H
#define DOWNCASTING_UPCASTING_ALIEN_H

#include <ostream>
#include "Humanoide.h"

class Alien : public virtual Humanoide {
    int estatura;
    int valor;
public:
    Alien();

    Alien(const string &name, double velocidad, int estatura, int valor);

    int getEstatura() const;

    void setEstatura(int estatura);

    int getValor() const;

    void setValor(int valor);

    friend ostream &operator<<(ostream &os, const Alien &alien);

    string toString() override ;

    ~Alien() override;
};


#endif //DOWNCASTING_UPCASTING_ALIEN_H
