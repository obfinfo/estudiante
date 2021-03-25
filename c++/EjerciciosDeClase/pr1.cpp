//N° cuenta: 20201001034

#include <cstdio>
int main(){
	int n,f,i,a;
	printf("Ingrese un numero > 1:");
	scanf("%d", &n);
	f = 2; //f y lo usaremos como numero primo
	while (n>1) {
		a=0; 
		for(i=1;i<=f;i++){
			if(f%i==0){ //si f es divisible a aumentará en 1
				a++;
			}
		}
		if(a==2){ //si f fue disible mas de 2 veces 
			//entonces no es primo y lo aumentamos en 1
			if (n%f==0){
				printf("%d ", f);
				n = n/f;
			} else {
				f++;
			}
		} else{
			f++;
		}
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	int n,f;
	cout <<"Ingrese un numero > 1:";
	cin >>n;
	f = 2;
	
	while (n>1) {
	if (n%f==0) {
	cout << f <<endl;
	n = n/f;
	}
	else {
	f++;
	}
	}
	
	*/
	
