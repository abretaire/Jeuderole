#pragma once

#include <iostream>
#include<string>
#include"Arme.h"

#ifndef  EPEE_H_INCLUDED
#define EPEE_H_INCLUDED

class Epee: public Arme
{
private :
	double longueur;

public :
	Epee();
	Epee(std::string nom, int degats, double longueur);
	virtual void Attaque();


};

#endif