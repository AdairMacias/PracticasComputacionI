#ifndef MOLECULAS_H
#define MOLECULAS_H

#include <string>
#include <vector>

#include "Grupo.h"

using namespace std;

class Molecula
{

public:
	Molecula(string nom) { nombre = nom; };
	void AgregarGrupo(Grupo grupo);
	void setCargaNeta();
	float CalcularPuntoIsoelectrico();
	

private:
	string nombre;
	vector<Grupo> molecula;
	int cargaNeta = 0;
};

#endif

