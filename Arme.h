#pragma once

#include <iostream>
#include<string>

#ifndef  ARME_H_INCLUDED
#define ARME_H_INCLUDED



class Arme
{
protected:

	std::string nom;
	int degats;

public: 
	Arme();
	Arme(std::string nom, int degats);
	virtual void Attaque();


	//Accesseurs
	std::string GetNom() { return this->nom; }
	void SetNom(std::string nom) { this->nom = nom; }
	int GetDegats() { return this->degats; }
	void SetDegats(int degats) { this->degats = degats; }

};


#endif // ! ARME_H_INCLUDED
