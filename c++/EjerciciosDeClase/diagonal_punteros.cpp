#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

//Escriba el prototipo de las funciones
void llenar(int **, int, int);
void imprimir(int **, int, int);
void diagonal(int **, int, int);

int main(){
    //Cree el arreglo y el apuntador
    int n=10,m=10;
	int **puntero_matriz;
	puntero_matriz=new int*[n];
	for(int i=0;i<n;i++){
		puntero_matriz[i]=new int[m];
	}
    //Llame a la función para llenar el arreglo
	llenar(puntero_matriz,n,m);
    //Llame a la función para imprimir el arreglo
	imprimir(puntero_matriz,n,m);
    //Llame a la función para imprimir la diagonal
	diagonal(puntero_matriz,n,m);
    return 0;
}

//Haga las definiciones de las funciones
	void llenar(int **p, int n, int m){
		srand(time(NULL));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				*(*(p+i)+j)=10+rand()%(81-10);
			}
		}
	}
	
	void imprimir(int **p, int n,int m){
		cout<<"El arreglo es"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<setw(4)<<*(*(p+i)+j);
			}
			cout<<endl;
		}
		cout<<endl;
	}
	void diagonal(int **p, int n, int m){
		cout<<"Diagonal"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==i){
					cout<<*(*(p+i)+j)<<" ";	
				}
			}
		}
	}
