#include<iostream>
using namespace std;

//Escriba el prototipo de la función
float Potencia(float , int);

int main(){
    float b;
    int e;
    cin>>b>>e;
    //Haga la validación cuando b=0 y e=0, si eso se cumple entonces muestre
    //el mensaje IND y si no, muestre el valor que retorna la función
	if(e==0&&b==0){
		cout<<"IND";
	}else{
		cout<<Potencia(b,e);
	}
	
    return 0;
}

//Haga la definición de la función considerando el caso cuando el exponente sea cero
float Potencia(float b, int e){
	if(e==0){
		return 1;
	} else {
		float aux = b;
		for(int i=1;i<e;i++){
			aux*=b;
		}
		return aux;
	}
	
}
