#include <iostream>
#include <cstdio>
#include <stdlib.h>
 
using namespace std;

#ifdef __linux__
#define SO "Linux"
#elif _WIN32
#define SO "Windows"
#endif

int main(int argc, char *argv[]) {

	cout<<"Hola Mundo! in "<<SO;
	
	
	cout<<"adios mundo!!"<<SO;
	return 0;
}
