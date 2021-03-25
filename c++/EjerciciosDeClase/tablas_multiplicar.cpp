#include<iostream>
using namespace std;

void tablaMul(int a){
	for(int i = 1;i<=12;i++){
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
	}
}
	
	int main(){
		int n;
		cin>>n;
		//Valide que n sea mayor o igual que 1 y si eso es cierto haga el llamado 
		//de la función y si no es cierto, muestre el mensaje: ERROR
		if(n>=1)
			tablaMul(n);
		else
			cout<<"ERROR";
		
		return 0;
	}
		
		//Haga la definición de la función
