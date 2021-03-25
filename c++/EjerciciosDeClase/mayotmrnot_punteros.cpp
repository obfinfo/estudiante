#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

//Escriba el prototipo de las funciones
void llenar(int *, int);
void imprimir(int *, int);
void menor(int *, int);
void mayor(int *, int);

int main(){
	//Cree el arreglo, el puntero y las variables necesarias
	int n =0,arreglo[100],*p;
	
	//Pida al usuario que ingrese el tamaño del arreglo
	cout<<"ingrese la dimension del arreglo ";
	cin>>n;
	p=arreglo;
	//Haga los llamados a las funciones
	llenar(p,n);
	
	return 0;
}
	
	//Haga las definiciones de las funciones
	void llenar(int *p, int n){
		srand(time(NULL));
		for(int i=0;i<n;i++){
			p[i]=1+rand()%(201-1);
		}
		imprimir(p,n);
	}
	
	void imprimir(int *p, int n){
		for(int i=0;i<n;i++){
			cout<<p[i]<<" ";
		}
		cout<<endl;
		menor(p,n);
	}
		
	void menor(int *p, int n){
		int men = p[0],indice,*posicion;
		for(int i=0;i<n;i++){
			if(p[i]<men){
				men=p[i];
				indice=i+1;
				posicion=&p[i];
			}
		}
		cout<<"El menor elemento es: "<<men<<" en la posicion "<<indice<<" y esta en la direccion "<<posicion<<endl;
		mayor(p,n);
	}
		
	void mayor(int *p, int n){
		int may = p[0],indice,*posicion;
		for(int i=0;i<n;i++){
			if(p[i]>may){
				may=p[i];
				indice=i+1;
				posicion=&p[i];
			}
		}
		cout<<"El mayor elemento es: "<<may<<" en la posicion "<<indice<<" y esta en la direccion "<<posicion<<endl;
		
	}
