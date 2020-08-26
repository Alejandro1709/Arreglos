#include <iostream>
#include "Header.h"

using namespace std;
using namespace System;

int main() {
	int* opt = new int;
	int* arreglo;
	int* ca = new int;
	*ca = 0;

	while (1) {
		system("cls");
		cout << "1. Ingresar al inicio" << endl;
		cout << "2. Ingresar al final" << endl;
		cout << "3. Eliminar el ultimo" << endl;
		cout << "4. Eliminar las ocurrencias de un dato" << endl << endl;
		cout << "Ingrese su opcion: ";
		cin >> *opt;

		if (*opt == 1) arreglo = Insertar_al_inicio(arreglo, ca);
		if (*opt == 2) arreglo = Insertar_al_final(arreglo, ca);
		if (*opt == 3) arreglo = Borrar_ultimo(arreglo, ca);
		if (*opt == 4) arreglo = Borrar_ocurrencias(arreglo, ca);

		Mostrar(arreglo, ca);
		cout << endl;
		system("pause");
	}

	delete opt, ca;
	delete[]arreglo;
	cout << endl;
	system("pause");
	return 0;
}