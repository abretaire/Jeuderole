#pragma once

#include <iostream>
#include<string>
#include"Arme.h"

#ifndef  GOURDIN_H_INCLUDED
#define GOURDIN_H_INCLUDED

class Gourdin : public Arme
{
private :
	double poids;

public :
	Gourdin();
	Gourdin(std::string nom, int degats, double poids);
	virtual void Attaque();
};

#endif