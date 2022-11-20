//
// Created by Key Cortés on 11/4/2022.
//
#include "iostream"
#include "HumanoideManager.h"
#include "Alien.h"
#include "Depredador.h"

int main(){
    Alien alien("Alien1", 200, 24, 10);
    Alien alien1("Alien2", 200, 23, 34);
    Alien alien2("Alien3", 200, 25, 45);

    Depredador depredador1("Depredador1", 400, 200);
    Depredador depredador2("Depredador2", 350, 250);

    HumanoideManager humanoideManager;

    humanoideManager.ingresarHumanoide(&alien);
    humanoideManager.ingresarHumanoide(&alien1);
    humanoideManager.ingresarHumanoide(&alien2);
    humanoideManager.ingresarHumanoide(&depredador1);
    humanoideManager.ingresarHumanoide(&depredador2);


    cout << humanoideManager.retornaSoloAliens();

    return 0;
}
