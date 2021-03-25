#include<iostream>
#include<cstdio>
using namespace std;

int fact(int a){
	int b; b=a;
	for(int i=1;i<a;i=i+1){
		b*=i;
	}
	return b;
}
	
	int main(){
		int n;
		cin>>n;
		if(n>0){
			cout<<fact(n);
		} else{
			cout<<"N/A";
		}
		
		return 0;
	}
