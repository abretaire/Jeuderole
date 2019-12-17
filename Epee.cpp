#include "Epee.h"

using namespace std;


Epee::Epee()
	:Arme()
{
	this->longueur = 0;
}

Epee::Epee(std::string nom, int degats, double longueur)
	:Arme(nom, degats)
{
	this->longueur = longueur;

}


void Epee::Attaque()
{
	cout << "Attaque à l'épée" << endl;
	Arme::Attaque();
	cout << "la longueur de l'épée est de " << longueur << endl;
}