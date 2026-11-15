#pragma once
#include "Employe.h"
class Responsable :public Employe
{
private:
	Employe** sub;
	int mnbrsub;
	int nbr;
public:
	Responsable(string, double, int);
	void afficher() const override;
	void ajouterEmployes(Employe* E);
	~Responsable();
};

