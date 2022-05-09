//
// Created by Key Cortés on 14/4/2022.
//

#include "Depredador.h"

Depredador::Depredador() {
    peso = 100;
}

double Depredador::getPeso() const {
    return peso;
}

void Depredador::setPeso(double peso) {
    Depredador::peso = peso;
}

ostream &operator<<(ostream &os, const Depredador &depredador) {
    os << static_cast<const Humanoide &>(depredador) << " peso: " << depredador.peso;
    return os;
}

string Depredador::toString() {
    stringstream os;
    os << *this;
    return os.str();
}

Depredador::~Depredador() = default;

Depredador::Depredador(const string &name, double velocidad, double peso) : Humanoide(name, velocidad), peso(peso) {}
