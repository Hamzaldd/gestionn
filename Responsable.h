#pragma once
#include "Employe.h"
#include <vector>

class Responsable :
    public Employe
{
public: 

    Responsable(string nom, float indice, string status);
    void add_subor(Employe *E);
    void afficher() const override; // redifinition
    ~Responsable(); 

private: 
    string status; 
    //Employe* subor;
    //int nombresubo;
    vector<Employe*> subor;

};

