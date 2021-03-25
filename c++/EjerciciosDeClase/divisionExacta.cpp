#include<iostream>
using namespace std;

//Escriba el prototipo de la función
void division(int a, int b){
	if((a+b)%(a-b) == 0){
		cout <<"ES EXACTA";
	} else{
		cout <<"NO ES EXACTA";
	}
}
	
	int main(){
		int a, b;
		cout<<"Ingrese dos numeros enteros \n";
		cin>>a>>b;
		//Haga el llamado de la función
		division(a,b);
		return 0;
	}
		
		//Escriba la definición de la función
