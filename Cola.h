#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Queue{//se crea una estructura de tipo Queue
	char letra;//variables de la estructura Queue
	struct Queue *siguiente;
};

struct Queue *front=NULL, *rear=NULL, *aux=NULL;//punteros de tipo Queue

class Cola{//se crea una clase  y en esta contiene las funciones que se utilizaran
	public:
		void Insert(char letter);
		void Imprimir();
		void Front();
		void Delete();
};

void Cola::Insert(char letter){
	if(front==NULL){
	front=new(Queue);
	front->letra=letter;
	rear=front;
	}
	
	else{
		aux=new(Queue);
		rear->siguiente=aux;
		aux->letra=letter;
		rear=aux;
	}
rear->siguiente=NULL;
}

void Cola::Imprimir(){
	aux=front;
	if(front==NULL){
		cout<<"No existen valores."<<endl;
	}
	else{	
		while(aux!=NULL){
			cout<<"      En cola: "<<aux->letra<<endl;
			aux=aux->siguiente;
		}
	}
}

void Cola::Front(){
if(front==NULL){
	cout<<"No hay ningun valor";
}else{
	cout<<"En el Frente: "<<front->letra;
}
}

void Cola::Delete(){
	if(front==NULL){
		cout<<"No hay ningun valor";
	}else{
		front=front->siguiente;
	}
}

