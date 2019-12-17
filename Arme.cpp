#include "Arme.h"

using namespace std;

Arme::Arme()
{
	this->nom = "";
	this->degats = 0;
}


Arme::Arme(std::string nom, int degats)
{
	this->nom = nom;
	this->degats = degats;
}

void Arme::Attaque()
{
	cout << "Le personnage attaque l'ennemi  " + degats << endl;
}