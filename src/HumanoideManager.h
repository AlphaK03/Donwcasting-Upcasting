//
// Created by Key Cortés on 14/4/2022.
//

#ifndef DOWNCASTING_UPCASTING_HUMANOIDEMANAGER_H
#define DOWNCASTING_UPCASTING_HUMANOIDEMANAGER_H
#include "Humanoide.h"
#include "Alien.h"
#include "Depredador.h"
#include "vector"

class HumanoideManager {
    vector<Humanoide*> humanoideLista;
public:
    HumanoideManager();

    HumanoideManager(const vector<Humanoide *> &humanoideLista);

    const vector<Humanoide *> &getHumanoideLista() const;

    void setHumanoideLista(const vector<Humanoide *> &humanoideLista);

    void ingresarHumanoide(Humanoide*);

    string retornaSoloAliens() const;
};


#endif //DOWNCASTING_UPCASTING_HUMANOIDEMANAGER_H
