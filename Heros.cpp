#include "Heros.h"
#include "Arme.h"
using namespace std;

Heros::Heros()
	:EtreVivant()
{
	this->arme = NULL;
}

Heros::Heros(string nomHeros, int pointsDeVie, Arme* arme)
	: EtreVivant(nomHeros, pointsDeVie)
{
	this->arme = arme;
}

void Heros::Attaquer(EtreVivant cible)
{
	Heros  heros = *this;
	Arme* arme = heros.arme;
	EtreVivant::Attaque(cible, arme);

}