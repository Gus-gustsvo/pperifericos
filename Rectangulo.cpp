// Rectangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*********************************************************************************************
*                       Universidad Politecnica de Tulancingo                                *
*        	       Ingenieria en Electronica y Telecomunicaciones                            *
*                          ALUMNO: GUSTAVO BRIONE MALDONADO                                 *
*                             Programacion De Periféricos                                    *
*                              Arturo Negrete Medellin                                       *
**********************************************************************************************
*                calcula el volumen y area total de un paralelepipedo                        *
*********************************************************************************************/
#include "pch.h"
# include  < iostream >
using namespace  std;

class Rectangulo {
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double Area();
	double getLadoH();
	double getLadoL();
};

class Volumen : public Rectangulo {
	double longitud;
public:
	Volumen(double, double, double);
	double vol();
	double AreaTotal();
};

Rectangulo::Rectangulo(double h, double l) {
	alto = h;
	ancho = l;
}

Volumen::Volumen(double h, double l, double x) : Rectangulo(h, l) {
	longitud = x / 2;
}

double Rectangulo::getLadoH() {
	return alto;
}
double Rectangulo::getLadoL() {
	return ancho;
}

double Rectangulo::Area() {
	return alto * ancho;
}

double Volumen::vol() {
	return /*Area()*/ getLadoH() * longitud;
}

double Volumen::AreaTotal() {
	return /*2 */ (/*(getLadoH() * getLadoL()) + */(getLadoL() * longitud)/* + (getLadoH() * longitud)*/);
}

int main()
{

	double base, ancho, altura;
	cout << "INTRODUCIR LAS MEDIDAS PARA LA FIGURA: " << endl;
	cout << " BASE: ";
	cin >> base;
	cout << " ANCHO: ";
	cin >> ancho;
	cout << "ALTURA: ";
	cin >> altura;

	Volumen figura(base, ancho, altura);
	Rectangulo lado(base, ancho);
	cout << endl;
	cout << " EL AREA DE LA BASE= " << lado.Area() << " cm2" << endl;
	cout << " EL VOLUMEN= " << figura.vol() << " cm3" << endl;
	cout << " EL AREA DE UNA CARA= " << figura.AreaTotal() << " cm2" << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
