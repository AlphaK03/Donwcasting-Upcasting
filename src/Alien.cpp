//
// Created by Key Cortés on 14/4/2022.
//

#include "Alien.h"

Alien::Alien() {
    estatura = 0;
    valor = 10;
}

int Alien::getEstatura() const {
    return estatura;
}

void Alien::setEstatura(int estatura) {
    Alien::estatura = estatura;
}

int Alien::getValor() const {
    return valor;
}

void Alien::setValor(int valor) {
    Alien::valor = valor;
}


string Alien::toString() {
    stringstream os;
    os << *this;
    return os.str();
}

Alien::Alien(const string &name, double velocidad, int estatura, int valor) : Humanoide(name, velocidad),
                                                                              estatura(estatura), valor(valor) {}

ostream &operator<<(ostream &os, const Alien &alien) {
    os << static_cast<const Humanoide &>(alien) << " estatura: " << alien.estatura << " valor: " << alien.valor;
    return os;
}

Alien::~Alien() {

}
