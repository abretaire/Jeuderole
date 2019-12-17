#include <iostream>
#include "Arme.h"
#include "EtreVivant.h"
#include "Gourdin.h"
#include "Epee.h"
#include "Heros.h"
#include "Monstre.h"

using namespace std;

int main()
{

	Epee Epee1("JC", 4, 1.2);
	Gourdin Gourdin1("AB", 6, 4);
	Heros QC ("QC", 40, &Epee1);
	Monstre RN("RN", 50, &Gourdin1);

	QC.Attaquer(RN);

	RN.Attaquer(QC);

	QC.SePositionner(10, 20);
	RN.SePositionner(12, 22);

	system("pause");

	return 0;
}