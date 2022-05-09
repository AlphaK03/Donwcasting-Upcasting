//
// Created by Key Cortés on 18/4/2022.
//

#include "Monster.h"

Monster::Monster() {}

int Monster::getNumber() const {
    return number;
}

void Monster::setNumber(int number) {
    Monster::number = number;
}


Monster::~Monster() {

}

Monster::Monster(const string &name, double velocidad, int estatura, int valor, const string &name1, double velocidad1,
                 double peso, int number) : Alien(name, velocidad, estatura, valor),
                                            Depredador(name1, velocidad1, peso), number(number) {}

ostream &operator<<(ostream &os, const Monster &monster) {
    os << static_cast<const Alien &>((Alien &&) monster) << ' ' << static_cast<const Depredador &>((const Depredador &) monster) << " number: "
       << monster.number;
    return os;
}
