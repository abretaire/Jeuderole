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
	cout << "Attaque � l'�p�e" << endl;
	Arme::Attaque();
	cout << "la longueur de l'�p�e est de " << longueur << endl;
}