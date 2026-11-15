// Employes_SaidaMhs.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

// entrpriseMain.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"
#include "Personnel.h"

int main()
{
    Employe* E1 = new Employe("Mlle ghita", 3000);
    Employe* E2 = new Employe("Mlle saida", 4000);

    E1->afficher();
    E2->afficher();

    Responsable* R1 = new Responsable("Mme laila", 5000, 2);
    R1->ajouterEmployes(E1);
    R1->ajouterEmployes(E2);

    R1->afficher();

    Responsable* R2 = new Responsable("Mme Nadia", 6000, 3);
    R2->ajouterEmployes(R1);
    R2->afficher();

    Commercial* C1 = new Commercial("Yassmine", 1000, 5000, 5);
    C1->afficher();
    C1->mettreAJour(7000);
    C1->afficher();

    Personnel* P = new Personnel(10);
    P->ajouterEmploye(E1);
    P->ajouterEmploye(E2);
    P->ajouterEmploye(R1);
    P->ajouterEmploye(R2);
    P->ajouterEmploye(C1);

    cout << "Somme des salaires : "
        << P->sommeSalaires() << endl;

    delete P;
    delete R2;
    delete R1;
    delete E1;
    delete E2;
    delete C1;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
