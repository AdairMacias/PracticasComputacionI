#include <string>
using namespace std;


class Grupo
{
private:
	string nombre;
	float pka;
	int carga;

public:
	Grupo()
	{
		nombre = "";
		pka = 0;
		carga = 0;
	};

	Grupo(string nom, float pk, int car)
	{
		nombre = nom;
		pka = pk;
		carga = car;
	}
		int GetCarga(float ph);
	
};
