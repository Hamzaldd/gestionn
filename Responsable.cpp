#include "Responsable.h"

Responsable::Responsable(string nom, float indice, string status)
    : Employe(nom, indice)
{
    this->status = status;
    this->subor =  vector<Employe*>();  // 
    // vecteur des employes dont la taille =0


}

void Responsable::add_subor(Employe *E)
{
    this->subor.push_back(E);

}

void Responsable::afficher() const
{
    this->Employe::afficher();
    cout << "status: " << this->status << endl;
    for (int i = 0; i < this->subor.size(); i++)
    {
        this->subor[i]->afficher(); // polymorphisme
    }
}


Responsable::~Responsable()
{
    this->subor.clear();
}
