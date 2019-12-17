#pragma once
#include "EtreVivant.h"
#include "Arme.h"
#include <iostream>
#include <string>

#ifndef MONSTRE_H_INCLUDED
#define MONSTRE_H_INCLUDED

class Monstre : public EtreVivant
{
protected:
	Arme* arme;

public:
	Monstre();
	Monstre(std::string nomMonstre, int pointsDeVie, Arme* arme);
	void Attaquer(EtreVivant cible);
};

#endif