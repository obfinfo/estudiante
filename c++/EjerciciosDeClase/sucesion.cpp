#include <iostream>
using namespace std;

float suma(double [], int);
void imprimir(double [], int);

int main() {
	int n=0;
	while(n<=0 || n>100){
		cout<<"Ingrese el tamaño del arreglo: ";
		cin >> n;
	}
	double *array = new double[n];
	cout<<"suma= "<<suma(array,n)<<endl;
	imprimir(array,n);
	return 0;
}

float suma(double array[], int n){
	double suma=1;
	array[0]=1;
	for(int i=1;i<n;i++){
		array[i]=(array[i-1]*2)+1;
		suma=suma+array[i];
	}
	return suma;
}

void imprimir(double array[], int n){
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
}
