#include<iostream>
#include<ctime>
using namespace std;

void LlenarArreglo(int *prtA, int dim);
void ImprimirArreglo(int *ptrA, int dim);
void Suma(int *ptrA, int *ptrB, int dim);

int main(){
    //Declare los arreglos y variables necesarias
    srand(time(0));
	int dim;
    //Lea la dimension ingresada por el usuario
    cout<<"Ingrese la dimension de los arreglos ";cin>>dim;
    //Declare los punteros necesarios
    int *arreglo = new int[dim];
	int *arreglo2 = new int[dim];
    //Haga el llamado a la funcion LlenarArreglo para el puntero de A
    LlenarArreglo(arreglo,dim);
    //Haga el llamado a la funcion LlenarArreglo para el puntero de B
	LlenarArreglo(arreglo2,dim);
    cout<<"El primer arreglo es\n";
    //Haga el llamado de la función ImprimirArreglo
	ImprimirArreglo(arreglo,dim);
    cout<<"El segundo arreglo es\n";
    //Haga el llamado de la función ImprimirArreglo
	ImprimirArreglo(arreglo2,dim);
    cout<<"La suma de los dos arreglos es\n";
    //Haga el llamado de la función Suma
	Suma(arreglo, arreglo2, dim);
    return 0;
}

//Haga las definiciones de las funciones
void LlenarArreglo(int *prtA, int dim){
	for(int i=0;i<dim;i++){
		prtA[i]=1+rand()%(31-1);
	}
}
void ImprimirArreglo(int *ptrA, int dim){
	for(int i=0;i<dim;i++){
		cout<<ptrA[i]<<" ";
	}
	cout<<endl;
}
void Suma(int *ptrA, int *ptrB, int dim){
	for(int i=0;i<dim;i++){
		cout<<ptrA[i]+ptrB[i]<<" ";
	}
}
