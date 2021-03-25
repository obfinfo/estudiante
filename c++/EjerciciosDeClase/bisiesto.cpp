#include<iostream>
using namespace std;

//Escriba el prototipo de la función

bool bisiesto(int y){
	if((y%4==0 && y%100!=0) || y%400==0){
		return true;
	} else{
		return false;
	}
}
	
	int main(){
		int a;
		cin>>a;
		//Haga el llamado a la función y valide que si la función retorna true
		//muestre en pantalla ES BISIESTO y si retorna false muestre en pantalla 
		//NO ES BISIESTO
		if(bisiesto(a)){
			cout <<"ES BISIESTO";
		}else {
			cout <<"NO ES BISIESTO";
		}
		
		return 0;
	}
		
		//Haga la definición de la función
