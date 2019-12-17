#pragma once
#include "EtreVivant.h"
#include "Arme.h"
#include <iostream>
#include <string>

#ifndef HEROS_H_INCLUDED
#define HEROS_H_INCLUDED

class Heros : public EtreVivant
{
protected:
	Arme* arme;

public:
	Heros();
	Heros(std::string nomHeros, int pointsDeVie, Arme* arme);
	void Attaquer(EtreVivant cible);
};

#endif