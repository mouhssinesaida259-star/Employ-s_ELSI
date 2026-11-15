#include "Employe.h"
int Employe::compteur = 0;
float Employe::valeurAug = 0.0;
Employe::Employe(string nom, double i) :matricule(++compteur)
{
    this->nom = nom;
    this->indice = i;
}

double Employe::CalculerSalaire() const
{
    cout << "donner valeur d'augmetation" << endl;
    cin >> Employe::valeurAug;
    return indice + ((indice * Employe::valeurAug) / 100);
}



void Employe::afficher() const
{
    cout << "le nom de l'employes est : " << this->nom << endl;
    cout << "le matricule est : " << this->matricule << endl;
    cout << "le salaire est : " << CalculerSalaire() << endl;


}


Employe::~Employe()
{
    compteur--;
}
