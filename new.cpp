// new.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*************************************************************************************************************************
*                                  Universidad Politecnica de Tulancingo
*                                Ingenierìa Electrònica y Telecomuncicaciones
*                                        Programacion de perifericos
*                                         Gustavo Briones Maldonado
***************************************************************************************************************************
*                              Programa que muestra el area de un rectangulo
**************************************************************************************************************************/

#include "pch.h"
#include <iostream>
using namespace std;

class Rectangulo {
	double alto;
	double ancho;
public:
	
		Rectangulo(double, double);
	    double area();
};

Rectangulo::Rectangulo(double h, double i) {
	ancho = i;
	alto = h;
}

double Rectangulo::area(){
	return alto * ancho;
}
class para{
	double longitud;
	Rectangulo base;
public:
	para(double, double, double);
	double volumen();
};
para::para(double h, double l, double a) {
	Rectangulo pivote(h, l);
	base = pivote;
	longitud = a;
}


int main()
{
	Rectangulo figura(3, 4);
	cout << "el area es: " << figura.area() << endl;
	Rectangulo otraFig(5, 5);
	cout << "el area = " << otraFig.area() << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
