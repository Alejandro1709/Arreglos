#pragma once
#include <iostream>
using namespace std;

int* Insertar_al_final(int* arreglo, int* ca) {
	int* copia_arr = new int[*ca]; // Tenemos que crear una copia para el arreglo original con la cantidad iguales

	for (int i = 0; i < *ca; i++) { // Recorremos por todos los elementos de ca
		copia_arr[i] = arreglo[i]; // Le asignamos a la copia del arreglo los valores originales del arreglo original
	}

	arreglo = new int[*ca + 1]; // Aqui inicializamos el arreglo original con el numero de cantidades + 1

	for (int i = 0; i < *ca; i++) { // Recorremos por todos los elementos de ca
		arreglo[i] = copia_arr[i]; // Le asignamos al arreglo original los valores de la copia del arreglo
	}

	cout << "Ingrese el nuevo valor: "; // Le pedimos al usuario que entre un valor
	cin >> arreglo[*ca]; // Lo guardamos en la posicion del arreglo ca + 1
	*ca = *ca + 1; // Aqui decimos que ca ha subido + 1
	return arreglo; // lo retornamos
}

int* Insertar_al_inicio(int* arreglo, int* ca) {
	int* copia_arr = new int[*ca]; // Tenemos que crear una copia para el arreglo original con la cantidad iguales

	for (int i = 0; i < *ca; i++) { // Recorremos por todos los elementos de ca
		copia_arr[i] = arreglo[i]; // Le asignamos a la copia del arreglo los valores originales del arreglo original
	}

	arreglo = new int[*ca + 1]; // Aqui inicializamos el arreglo original con el numero de cantidades + 1

	for (int i = 0; i < *ca; i++) { // Recorremos por todos los elementos de ca
		arreglo[i + 1] = copia_arr[i]; // Le asignamos al arreglo original + 1 los valores de la copia del arreglo
	}

	cout << "Ingrese el nuevo valor: "; // Le pedimos al usuario que entre un valor
	cin >> arreglo[0]; // Lo guardamos en la posicion 0 del arreglo original
	*ca = *ca + 1; // Aqui decimos que ca ha subido + 1
	return arreglo; // lo retornamos
}

int* Insertar_en_indice(int* arreglo, int* ca) {

	int valor, indice; // Inicializamos 2 variables para el valor e indice a insertar
	cout << "Ingrese el valor a insertar: "; // Le pedimos al usuario que ingrese un valor
	cin >> valor; // Lo guardamos en la variable valor

	cout << "Ingresa el indice que ocupara el valor: "; // Le pedimos al usuario que ingrese el indice que ocupara el valor ya ingresado
	cin >> indice; // lo guardamos en la variable indice

	int* copia_arr = new int[*ca + 1]; // Creamos una copia del arreglo original con capacidad de ca + 1 elemtos

	for (int i = 0; i < indice - 1; i++) { // Recorremos el arreglo desde 0 hasta indice - 1 
		copia_arr[i] = arreglo[i]; // Guardamos el elemento posicion i en la copia arr posicion i 
	}

	copia_arr[indice] = valor; // Guardamos el valor en el indice escogido

	for (int i = indice; i < *ca; i++) {  // Recorremos el arreglo desde 0 hasta que i sea menor o igual a ca
		copia_arr[i + 1] = arreglo[i];
	}

	*ca = *ca + 1;
	return copia_arr;
}

void Mostrar(int* arreglo, int* ca) {

	for (int i = 0; i < *ca; i++) {
		cout << "Valor " << i << " : " << arreglo[i] << endl;
	}
}

int* Borrar_ultimo(int* arreglo, int* ca) {

	int* copia_arr = new int[*ca - 1];

	for (int i = 0; i < *ca - 1; i++) {
		copia_arr[i] = arreglo[i];
	}

	*ca = *ca - 1;
	return copia_arr;
}

int* Borrar_ocurrencias(int* arr, int* ca) {

	int valor, ocurrencia = 0;

	cout << "Ingrese el dato a eliminar";
	cin >> valor;

	for (int i = 0; i < *ca; i++) {

		if (arr[i] == valor) {
			ocurrencia++;
		}

		int* copia_arr = new int[*ca - ocurrencia];

		int j = 0;

		for (int i = 0; i < *ca; i++) {
			if (arr[i] != valor) {
				copia_arr[j] = arr[i];
				j++;
			}
		}

		*ca = *ca - ocurrencia;
		return copia_arr;
	}
}