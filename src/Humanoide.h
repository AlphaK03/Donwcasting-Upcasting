//
// Created by Key Cortés on 14/4/2022.
//

#ifndef DOWNCASTING_UPCASTING_HUMANOIDE_H
#define DOWNCASTING_UPCASTING_HUMANOIDE_H
#include "iostream"
#include "sstream"

using namespace std;

class Humanoide {
    string name;
    double velocidad;
public:
    Humanoide();

    Humanoide(const string &name, double velocidad);

    const string &getName() const;

    void setName(const string &name);

    double getVelocidad() const;

    void setVelocidad(double velocidad);

    friend ostream &operator<<(ostream &os, const Humanoide &humanoide);

    virtual string toString() = 0;

    virtual ~Humanoide();
};


#endif //DOWNCASTING_UPCASTING_HUMANOIDE_H
