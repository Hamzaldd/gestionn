#pragma once
#include<iostream>
using namespace std;
class Employe
{
public: 
	Employe(string nom, float indice); 
	virtual void afficher() const; 
	float calcul_sal() const;
	~Employe();


private: 
	string nom; 
	float indice_sal; 
	const int matricule;
	static int count;
	static float augmentation;
};

