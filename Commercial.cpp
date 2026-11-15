#include "Commercial.h"

Commercial::Commercial(string n, double s, double v, double t)
    : Employe(n, s)
{
    this->ventes = v;
    this->taux = t;
}

void Commercial::mettreAJour(double v)
{
    this->ventes = v;
}

double Commercial::CalculerSalaire() const
{
    //Salaire = Fixe + Commission
    return Employe::CalculerSalaire() +
        (this->ventes * this->taux) / 100;
}

void Commercial::afficher() const
{
    Employe::afficher();

    cout << "Les ventes du dernier mois : "
        << ventes << endl;

    cout << "Le taux de commission : "
        << taux << "%" << endl;
}
