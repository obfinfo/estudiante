#include<iostream>
#include<math.h>
using namespace std;

//variables globales
float a,b,c;

// Prototipos de funciones
float f(int);
void promedio(double [],int);

int main(){
	
	//escriba las instrucciones de la funci[on principal]
	int n=0;
	cout<<"Ingrese el tamaño del arreglo: "<<endl;
	cin >> n;
	double *array = new double[n];
	cout<<"a="; cin >>a;
	cout<<"b="; cin >>b;
	cout<<"c="; cin >>c;
	
	for(int i=0;i<n;i++){
		array[i]=f(i);
	}
	for(int i=0;i<n;i++){
		cout<<array[i]<<"\t";
	}
	promedio(array,n);
	return 0;
}
	
	// Definiciones de funciones
	float f(int i){
		float result;
		result = (a*pow(i,2))+(b*i)+(c);
		return result;
	}
		
		void promedio(double array[], int n){
			float suma=0;
			for(int i=0;i<n;i++){
				suma += array[i];
			}
			cout<<endl << suma/n;
		}
