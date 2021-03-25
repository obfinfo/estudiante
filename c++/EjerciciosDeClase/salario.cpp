#include<iostream>
using namespace std;

//Escriba el prototipo de la función
void salario(float horas, float valor){
	cout <<horas*valor;
}
	
	int main(){
		float horas, valor;
		cout<<"Ingrese las horas trabajadas \n";
		cin>>horas;
		cout<<"Ingrese el valor por hora\n";
		cin>>valor;
		cout<<"Su salario es\n";
		//Haga el llamado de la función
		salario(horas,valor);
		
		return 0;
	}
		
		//Escriba la definición de la función
