#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Escriba el prototipo de las funciones
void llenar(int *, int);
void imprimir(int *, int);
void multiplos5(int *, int);

int main(){
    //Declare las variables necesarias y lea la dimensión del arreglo
    int n =0,arreglo[100],*p;
	cout<<"ingrese la dimension del arreglo ";
	cin>>n;
	p=arreglo;
    //Haga el llamado de las funciones
	llenar(p,n);
}
//Haga la definición de las funciones
	void llenar(int *p, int n){
		srand(time(NULL));
		for(int i=0;i<n;i++){
			p[i]=10+rand()%(116-10);
		}
		imprimir(p,n);
	}
	
	void imprimir(int *p, int n){
		for(int i=0;i<n;i++){
			cout<<p[i]<<" ";
		}
		cout<<endl;
		multiplos5(p,n);
	}
	void multiplos5(int *p, int n){
		int mult = p[0],indice,*posicion;
		for(int i=0;i<n;i++){
			if(p[i]%5==0){
				mult=p[i];
				indice=i+1;
				posicion=&p[i];
				cout<<"Elemento: "<<mult<<" Posicion: "<<indice<<" Direccion: "<<posicion<<endl;
			}
		}
	}
	
	
	
	
