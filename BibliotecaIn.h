#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Estudiante{
	string Nombre;
	int Edad;
	Estudiante *Psiguiente;
}e1;
Estudiante *Pinicio=NULL;
Estudiante *Final;

struct lista{
	void Insertar(Estudiante){
		Pinicio = (struct Estudiante *)malloc(sizeof(struct Estudiante));
		Pinicio->Psiguiente=Final;
		cout<<"Ingrese Nombre del Estudiante:"<<endl;
		cin>>e1.Nombre;
		cout<<"Ingrese la Edad del Estudiante:"<<endl<<endl;
		cin>>e1.Edad;
		Pinicio->Nombre=e1.Nombre;
		Pinicio->Edad=e1.Edad;
		Final=Pinicio;
		cout<<"se ha guardado con éxito";
	}
}l1;


