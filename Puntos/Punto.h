#include <string>
#include <iostream>

using namespace std;

class Punto2D
{
public:
	//Son las funciones de mi código (Void) prácticamente lo que se encuentra después de 
	// mi objeto (miPunto), que es precisamente lo que quiero que este haga (atributos y métodos)
	void SetPosicion(float Psn_x, float Psn_y);
	// En los paretesis coloco el tipo y las variables que necesito para que mi objeto cumpla su función
	// les pongo el nombre que quiera, a menos que ya esten definidas en el main
	void Trasladar(float temp1, float temp2);
	void RotarRespectoAlOrigen(float temp1);
	void Escalar(float temp1, float temp2);
	float GetX();
	float GetY();

private:
	float x, y;

};
