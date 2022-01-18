// Gestion_Employes_G3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Employe.h"
#include "Responsable.h"
int main()
{
    Responsable *Ceo= new Responsable("Ceo", 300, "Ceo"); 
    Responsable *R1=new Responsable ("Resp1", 200,"chef_equipe");
    Employe *E2= new Employe("Emp2", 100);
    Employe *E3= new Employe("Emp3", 100);
    R1->add_subor(E3);
    Ceo->add_subor(R1);
    Ceo->add_subor(E2);

    Ceo->afficher(); // 
    

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
