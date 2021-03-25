#include <iostream>
#include<iomanip>
using namespace std;

float arreglo[40][40];
void llenar(int, int);
void imprimir(int);

int main() {
	int n;
	cout<<"Ingrese un numero positivo <20"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		llenar(i,n);
	}
	imprimir(n);
	return 0;
}

void llenar(int cont, int n){
	for(int j=cont;j<n+n-cont-1;j++){
		for(int i=cont;i<n+n-cont-1;i++){
			arreglo[i][j]=cont+1;
		}		
	}
	
}
void imprimir(int n){
	for(int i=0;i<n+n-1;i++){
		for(int j=0;j<n+n-1;j++){
			cout<<setw(2)<<arreglo[i][j];
		}
		cout<<endl;
	}
}
