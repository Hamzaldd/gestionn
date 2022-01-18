#include "Employe.h"
int Employe::count = 0;
float Employe::augmentation = 50;

Employe::Employe(string nom, float indice)
    : matricule(++Employe::count)
{
    this->nom = nom; 
    this->indice_sal = indice;
}

void Employe::afficher() const
{
    std::cout << "nom :" << this->nom << std::endl;
    std::cout << "matricule :" << this->matricule << std::endl;
    std::cout << "indice_sal :" << this->indice_sal << std::endl;
    std::cout << " augmentation:" << Employe::augmentation<< std::endl;
}

float Employe::calcul_sal() const
{
    float salaire = this->indice_sal * Employe::augmentation;
    return salaire;
}

Employe::~Employe()
{
    // 
}
