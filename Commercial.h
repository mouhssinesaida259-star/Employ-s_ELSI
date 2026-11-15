#pragma once
#include "Employe.h"
class Commercial : public Employe
{
private:
    double ventes;
    double taux;

public:
    Commercial(string, double, double, double);
    void mettreAJour(double v);
    double CalculerSalaire() const override;
    void afficher() const override;
};

