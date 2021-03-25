#include<iostream>
using namespace std;


// Prototipos de funciones
void Leer_Arreglo(double [ ], int);
void Imprime_Arreglo(double [ ], int);
void Invertir_Arreglo(double [ ],int );


int main(){
	
	//escriba las instrucciones de la funci[on principal]
	int n=0;
	while(n>20 || n<2){
		cout<<"Ingrese el tamaño del arreglo: "<<endl;
		cin >> n;
	}
	double *array = new double[n];
	Leer_Arreglo(array, n);
	
	
	return 0;
}
	
	// Definiciones de funciones
void Leer_Arreglo(double array[], int n){
	cout<<"Ingrese los elementos del arreglo: "<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
		
	}
	Imprime_Arreglo(array, n);
}
void Imprime_Arreglo(double array[ ], int n){
	cout<<"El arreglo inicial es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
		
	}
	cout<<endl<<"\t"<<endl;
	Invertir_Arreglo(array, n);
}
void Invertir_Arreglo(double array[ ],int n){
	cout<<"El arreglo invertido es: "<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<array[i]<<" ";
		
	}
}

