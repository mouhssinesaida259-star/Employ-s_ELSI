#pragma once
#include<iostream>
using namespace std;
class Employe

{

	protected:
		string nom;
		const int matricule;
		double indice;
		static float valeurAug;
		static int compteur;
	public:
		Employe(string, double);
		virtual void afficher() const;
		virtual double CalculerSalaire() const;
		~Employe();
	};


