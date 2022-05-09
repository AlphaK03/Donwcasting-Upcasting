//
// Created by Key Cortés on 14/4/2022.
//

#include "Humanoide.h"

Humanoide::Humanoide() {
    name = "";
    velocidad = 0;
}

Humanoide::Humanoide(const string &name, double velocidad) : name(name), velocidad(velocidad) {}

const string &Humanoide::getName() const {
    return name;
}

void Humanoide::setName(const string &name) {
    Humanoide::name = name;
}

double Humanoide::getVelocidad() const {
    return velocidad;
}

void Humanoide::setVelocidad(double velocidad) {
    Humanoide::velocidad = velocidad;
}

ostream &operator<<(ostream &os, const Humanoide &humanoide) {
    os << "name: " << humanoide.name << " velocidad: " << humanoide.velocidad;
    return os;
}

Humanoide::~Humanoide() {

}
