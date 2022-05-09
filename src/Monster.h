//
// Created by Key Cortés on 18/4/2022.
//
#include <ostream>
#include "Alien.h"
#include "Depredador.h"
#ifndef DOWNCASTING_UPCASTING_MONSTER_H
#define DOWNCASTING_UPCASTING_MONSTER_H


class Monster : public  Depredador, public Alien{
private:
    int number;
public:

};


#endif //DOWNCASTING_UPCASTING_MONSTER_H
