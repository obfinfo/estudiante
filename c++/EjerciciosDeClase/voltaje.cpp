#include<iostream>
using namespace std;

//Escriba el prototipo de la función
float voltaje(){
	cout<<"Ingrese los cinco voltajes\n";
	//Declare las variables a necesitar y haga el ciclo for con el que se 
	//leeran los voltajes y se irá calculando el promedio
	float v,t;
	for(int i = 1;i<=5;i++){
		cin>>v;
		t+=v;
	}
	t=t/5;
	
	return t;
	
	
	//haga el return de la función
}
	
	int main(){
		//Valide si lo que retorna la función voltaje es mayor que 220
		//y muestre los respectivos mensajes en pantalla
		if(voltaje() > 220){
			cout <<"ALTO VOLTAJE";
		} else {
			cout <<"VOLTAJE CORRECTO";
		}
		
		return 0;
	}
		
		
