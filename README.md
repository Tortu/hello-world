# hello-world // primer repositorio
//============================================================================
// Name        : Primer_Clase.cpp
// Author      : Franklin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>//incluyendo biblioteca
using namespace std;
//Método Saludar
void saludar(char* nombre){
	cout << "Hola" << nombre << endl; // prints Hola
}
//Método principal
int main() {
	saludar(" Peter");
	return 0;
}


