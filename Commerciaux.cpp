#include "Commerciaux.h"
Commerciaux::Commerciaux(string nom, float indice)
	: Employe(nom, indice)
{
	this->vente = vector<float>();
}

void Commerciaux::mettre_a_jour_vente(float vente_jour)
{
	this->vente.push_back(vente_jour);
}

float Commerciaux::cal_salaire() const
{
	float sal_fix;
	float vente_mois = 0;
	float sal_prop;

	sal_fix = this->Employe::cal_salaire(); 

	for (int i = 0; i < this->vente.size(); i++)
	{
		vente_mois += this->vente[i];
	}

	sal_prop = vente_mois * 0.1; 

	return sal_fix + sal_prop; 
}

Commerciaux::~Commerciaux()
{
	this->vente.clear();
}