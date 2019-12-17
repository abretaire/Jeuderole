#include "EtreVivant.h"
#include "Arme.h"
using namespace std;

EtreVivant::EtreVivant()
{
	this->positionX = 0;
	this->positionY = 0;
}

EtreVivant::EtreVivant(string nomEtreVivant, int pointsDeVie)
{
	this->nomEtreVivant = nomEtreVivant;
	this->pointsDeVie = pointsDeVie;
}

void EtreVivant::SePositionner(int positionX, int positionY)
{
	this->positionX = positionX;
	this->positionY = positionY;
}

void EtreVivant::Attaque(EtreVivant& cible, Arme* arme)
{
	cout << this->nomEtreVivant << " attaque " << cible.nomEtreVivant << endl;
	cible.RecevoirDegats(*this, arme);
}

void EtreVivant::RecevoirDegats(EtreVivant attaquant, Arme* arme)
{
	cout << this->nomEtreVivant << " est attaque par " << attaquant.nomEtreVivant << endl;
	this->pointsDeVie = this->pointsDeVie - arme->GetDegats();
	cout << arme->GetNom() << " a fait " << arme->GetDegats() << " degats" << endl;
}