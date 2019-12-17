#include "Gourdin.h"

using namespace std;

Gourdin::Gourdin()
	:Arme()
{
	this->poids = 0;
}

Gourdin::Gourdin(std::string nom, int degats, double poids)
	: Arme(nom, degats)
{
	this->poids = poids;

}


void Gourdin::Attaque()
{
	cout << "";
	Arme::Attaque();
	cout << "";
}
