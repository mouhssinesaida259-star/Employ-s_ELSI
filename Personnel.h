#pragma once
#include"Employe.h"
class Personnel
{
private:
    Employe** tab;
    int nbrMax;
    int nbr;

public:
    Personnel(int);
    void ajouterEmploye(Employe* e);
    double sommeSalaires() const;
    ~Personnel();
};

