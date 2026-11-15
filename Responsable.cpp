#include "Responsable.h"

Responsable::Responsable(string nom, double salaire, int nbrs) :Employe(nom, salaire)
{
	this->mnbrsub = nbrs;
	this->sub = new Employe * [this->mnbrsub];
	for (int i = 0;i < mnbrsub;i++) {
		sub[i] = nullptr;
	}
}

void Responsable::afficher() const
{
	this->Employe::afficher();
	for (int i = 0; i < nbr; i++) {
		sub[i]->afficher();
	}
}

void Responsable::ajouterEmployes(Employe* E)
{
	if (mnbrsub > nbr && E != nullptr) {
		sub[nbr] = E;
		nbr++;
	}
	else {
		cout << "impossible d'ajouter...." << endl;
	}
}

Responsable::~Responsable()
{
	delete[] sub;
	sub = nullptr;

}
