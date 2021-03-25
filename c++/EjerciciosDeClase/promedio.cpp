#include<iostream>
using namespace std;

//Escriba el prototipo de la función
void promedio(float a,float b,float c){
	float d; d =(a+b+c)/3;
	if(d>65){
		cout <<"APROBADO";
	}else {
		cout<<"MEJORE LA NOTA";
	}
}
	
	int main(){
		float a,b,c;
		cout<<"Ingrese las tres notas \n";
		cin>>a>>b>>c;
		if(a>=0&&b>=0&&c>=0){
			promedio(a,b,c);
		}
		//Haga la validación de las notas
		return 0;
	}
		
		//Haga la definición de la función
