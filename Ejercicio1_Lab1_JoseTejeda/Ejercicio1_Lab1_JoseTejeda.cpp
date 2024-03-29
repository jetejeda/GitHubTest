// Ejercicio1_Lab1_JoseTejeda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int converBase10(int n, int o, int j);
int converDestino(int n, int d, int h);


int main()
{
	int numero;
	int base;
	int destino, a, b;
    cout << "Ingrese el numero que desea convertir \n";
	cin >> numero;


	cout << "Ingrese la base en la que se encuentra el numero \n";
	cin >> base;

	cout << "Ingrese la base a la que desea convertir \n";
	cin >> destino;

	a = converBase10(numero, base, 1);

	cout << "En base 10 = \n" << a << endl;
	b = converDestino(a, destino, 1);
	cout << "El resultado de la conversion es\n:" << b << endl;

	system("PAUSE");

	return 0;
}

int converBase10(int n, int o, int j )
{
	if (n>=10)
	{
		return (n % 10) *j + converBase10((n/10), o, j*o);
	}
	else
	{
		return n * j;
	}
}

int converDestino(int n, int d, int h)
{
	int Resultado;

	if (n<d)
	{
		Resultado = n * h;
	}
	else
	{
		Resultado = (n % d)*h + converDestino(n/d, d, h*10);
	}
	return Resultado;
}
