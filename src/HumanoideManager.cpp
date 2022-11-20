//
// Created by Key Cortés on 14/4/2022.
//

#include "HumanoideManager.h"

void HumanoideManager::ingresarHumanoide(Humanoide * humanoide) {
    humanoideLista.push_back(humanoide);

}

HumanoideManager::HumanoideManager(const vector<Humanoide *> &humanoideLista) : humanoideLista(humanoideLista) {}

HumanoideManager::HumanoideManager() {}

const vector<Humanoide *> &HumanoideManager::getHumanoideLista() const {
    return humanoideLista;
}

void HumanoideManager::setHumanoideLista(const vector<Humanoide *> &humanoideLista) {
    HumanoideManager::humanoideLista = humanoideLista;
}

string HumanoideManager::retornaSoloAliens() const {
    stringstream ss;
    for(auto &alien : getHumanoideLista()) {
        if(dynamic_cast<Alien*>(alien)){
        ss << alien->toString() << endl;
    }}
    return ss.str();
}
