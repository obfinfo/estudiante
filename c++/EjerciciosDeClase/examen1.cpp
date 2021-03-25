#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// escriba los prototipos de las funciones
bool puntos(float,float,float,float,float,float);
float distancia(float,float,float,float);

int main() {
	char centinela ='s';
	float xa,ya,xb,yb,xc,yc;
	//escriba el cÃ³digo de la funciÃ³n main
	while (centinela=='s'){
		cout<<"Escriba el primer punto"<<endl;
		cin >> xa>>ya;
		cout<<"Escriba el segundo punto"<<endl;
		cin >> xb>>yb;
		cout<<"Escriba el tercer punto"<<endl;
		cin >> xc>>yc;
		if(puntos(xa,ya,xb,yb,xc,yc)){
			cout<<"los puntos estan en la misma recta"<<endl;
			float dist = distancia( xa, ya, xb, yb);
			if((xc > xa) && (xc<yb)){
				cout<<"El tercer punto esta entre el primero y el segundo"<<endl;
			}else{
				cout<<"El tercer punto no esta entre el primero y el segundo"<<endl;
			}
		}else{
			cout<<"No estan en la misma recta"<<endl;
		}
		
		cout<<"Desea continuar[s/n]"<<endl;
		cin>>centinela;
	}
	return 0;
}

//Escriba la definicion de las funciones
bool puntos(float xa,float ya,float xb,float yb,float xc,float yc){
	if((xa== xb) && (xb==xc)){
		return true;
	}else  {
		float m1,m2;
		m1 = (ya - yb)/(xa - xb);
		m2 = (yb - yc)/(xb - xc);
		if(m1==m2){
			return true;
		}else{
			return false;
		}
	}
}
	float distancia(float xa,float ya,float xb,float yb){
		float dist;
		dist = sqrt((xa- ya)*(xa - ya) + (xb -yb)*(xb - yb));
		return dist;
	}
		
