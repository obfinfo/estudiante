//20201001034

#include <iostream>
using namespace std;
bool validarNumero(int [], int, int);
void leerArreglo(int [], int);
void escribirArreglo(int [], int);

int main(int argc, char *argv[]) {
	int t=0;
	do{
		cout<<"Ingrese cantidad de elementos (minimo 5, maximo 10) ";
		cin >>t;
	}while(t<4||t>11);
	int *v = new int[t];
	leerArreglo(v,t);
	return 0;
}

bool validarNumero(int v[], int t, int indice){
	int aux =0;
	for(int i=0;i<t;i++){
		if(indice == v[i]){
			aux++;
		} 
	}
	if(aux>0){
		return true;
	}else{
		return false;
	}
}

void leerArreglo(int v[], int t){
	float n;
	for(int i=0;i<t;i++){
		cout<<"Ingrese numero ";
		cin>>n;
		if(validarNumero(v,t,n)){
			i-=1;
			cout<<"numero ya almacenado"<<endl;
		}else{
			v[i]=n;
		}
	}
	escribirArreglo(v,t);
}

void escribirArreglo(int v[], int t){
	cout<<endl<<endl;
	for(int i=0;i<t;i++){
		cout<<v[i]<<"  ";
	}
}
