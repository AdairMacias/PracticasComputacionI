
#ifndef GRUPO_H
#define GRUPO_H

#include <iostream>
#include <string>

using namespace std;

class Grupo
{
public:
	Grupo() { nombreGrupo = " "; pkGrupo = 0; cargaGrupo = 0; };
	Grupo(string nom, float pkG, int cG) { nombreGrupo = nom; pkGrupo = pkG; cargaGrupo = cG; }
	float getPk();
	void anadirCarga();
	int getCarga();
	

private:
	string nombreGrupo;
	float pkGrupo;
	int cargaGrupo;
};

#endif

