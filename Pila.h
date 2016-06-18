#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Pila{//se crea la esctructura
	char Letraa;//variables de la estructura
	struct Pila *siguiente;
};

struct Pila *auxi, *Tope, *iniciar;//punteros de tipo pila

class Cpila{// se crea una clase y en esta contiene las funciones
	public:
		void Push(char lyric);
		void Imprimir();
		void Top();
		void Pop();
};

void Cpila::Push(char lyric){
	if(Tope == NULL){
		Tope=new(Pila);//se crea el nodo
		Tope->Letraa=lyric;//se le asigna al nodo lo que contiene la variable llamada lyric
		iniciar=Tope;
		iniciar->siguiente=NULL;
	}else{
		auxi=new(Pila);
		auxi->Letraa=lyric;
		auxi->siguiente=Tope;
		Tope=auxi;
	}
}

void Cpila::Imprimir(){
	auxi=Tope;
	if(Tope==NULL){
		cout<<"No existen valores";
	}else{
		while(auxi!=NULL){
			cout<<"En pila: "<<auxi->Letraa<<endl;
			auxi=auxi->siguiente;
		}
	}
}

void Cpila::Top(){
	if(Tope==NULL){
		cout<<"No existe ningun valor"<<endl;
	}else{
		cout<<"El Top es: "<<Tope->Letraa<<endl;
	}
}

void Cpila::Pop(){
	if(Tope==NULL){
		cout<<"No existen valores"<<endl;
	}else{
		auxi=Tope->siguiente;
		Tope=auxi;
	}
}
