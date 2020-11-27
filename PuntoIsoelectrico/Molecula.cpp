
#include "Molecula.h"

void Molecula::AgregarGrupo(Grupo grupo)
{
	molecula.push_back(grupo);
}

void Molecula::setCargaNeta()
{
	for (int i = 0; i < molecula.size(); i++)
	{
		cargaNeta += molecula[i].getCarga();
	}
}

float Molecula::CalcularPuntoIsoelectrico()
{
	// Inicializar las variables temporales
	void setCargaNeta();
	int rep = 1; // indica cuantas veces repetimos el aumento en la carga
	float aux= 0;
	vector<float> temp(molecula.size(),0);
	// Copiar los pka al vector temporal
	for (int i = 0; i< molecula.size();i++)
	{
		temp[i] = molecula[i].getPk();
	}
	// Acomodar la clase molecula de acuerdo al pka mayor al menor
	for (int i = 0; i < molecula.size(); i++)
	{
		for (int j = i+1; j < molecula.size(); j++)
		{
			if (temp[i] < temp[j])
			{
				aux = temp[i];
				temp[i] = temp[j];
				temp[j] = aux;
			}
		}
	}
	temp.insert(temp.begin(), 14);
	temp.push_back(0);

	// volver a la carga Neta 0
	while (cargaNeta != 0)
	{
		cargaNeta++;
		rep++;
	}

	return (temp[rep] + temp[rep + 1]) / 2;

}
