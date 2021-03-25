#include<iostream>
using namespace std;

int main(){
	int n=0;
	float mayor, menor;
	while(n<1){
		cout<<"Ingrese dimension del arreglo"<<endl;
		cin>>n;
	}
	double *array = new double[n];
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"] = ";
		cin>>array[i];
	}
	mayor=array[0];
	menor=array[0];
	for(int i=0;i<n;i++){
		if(array[i]>mayor){
			mayor=array[i];
		}else if (array[i]<menor){
			menor=array[i];
		}
	}
	cout<<"Mayor es: "<<mayor;
	cout<<"Menor es: "<<menor;
	
	return 0;
}
