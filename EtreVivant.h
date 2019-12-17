#pragma once

#include <iostream>
#include "Arme.h"
#include <string>

#ifndef ETREVIVANT_H_INCLUDED
#define ETREVIVANT_H_INCLUDED

class EtreVivant
{

protected:
	int positionX;
	int positionY;
	std::string nomEtreVivant;
	int pointsDeVie;

public:
	EtreVivant();
	EtreVivant(std::string nomEtreVivant, int pointsDeVie);
	void SePositionner(int positionX, int positionY);
	virtual void Attaque(EtreVivant& cible, Arme* arme);
	void RecevoirDegats(EtreVivant attaquant, Arme* arme);
};

#endif