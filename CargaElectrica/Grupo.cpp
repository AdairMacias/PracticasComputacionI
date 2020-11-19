#include "Grupo.h"
using namespace std;


int Grupo::GetCarga(float ph)
{
	return carga + (ph <= pka);
}
