#pragma once
#include <math.h>
struct figuras {
	double longitud; 
	double apotema;
	int lado;
	double calcPerimetro() {
		double Perimetro;
		Perimetro = lado * longitud;
		return Perimetro;
	}
	double calcArea() {
		double Area; 
		if (lado == 3) {
			Area = (sqrt(3) / 4) * pow(longitud, 2);
		}
		else if (lado == 4) {
			Area = pow(longitud, 2);
		}
		else {
			Area = ((apotema * longitud) / 2) * lado; 
		}
		return Area;
	}
};
