#include <iostream>
#include <cstdio>
#include <stdlib.h>
 
using namespace std;

#ifdef __linux__
#define SO "Linux"
#define limpiar_pantalla() ( system("clear") )
#elif _WIN32
#define SO "Windows"
#define limpiar_pantalla() ( system("cls") )
#endif

int main(int argc, char *argv[]) {

	cout<<"Hola Mundo!!";
	getchar();
	limpiar_pantalla();
	
	cout<<"adios mundo!!"<<SO;
	return 0;
}

