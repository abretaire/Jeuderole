#include "Monstre.h"
#include "Arme.h"
using namespace std;

Monstre::Monstre()
	:EtreVivant()
{
}

Monstre::Monstre(string nomMonstre, int pointsDeVie, Arme* arme)
	: EtreVivant(nomMonstre, pointsDeVie)
{
	this->arme = arme;
}

void Monstre::Attaquer(EtreVivant cible)
{
	Monstre monstre = *this;
	Arme* arme = monstre.arme;
	EtreVivant::Attaque(cible, arme);
}