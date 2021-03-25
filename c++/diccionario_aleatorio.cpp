#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include<ctime>

using namespace std;

#ifdef __linux__
#define SO "Linux"
#define limpiar_pantalla() ( system("clear") )
#elif _WIN32
#define SO "Windows"
#define limpiar_pantalla() ( system("cls") )
#endif

string GetString(int tema, int nivel){
	int min = nivel+nivel-1,max =(nivel*2)+1;
	srand(time(NULL));
	string palabra[7][5] =
	{
		{"informatica",			"historia",			"arte",			  "deporte",   "redes"},
		{"USB",					"911",		  	 	"teatro",		  "golf",	   "OSI"},
		{"CPU",					"muro",				"escultura",	  "tennis",	   "RJ45"},
		{"tecnologia",			"prueba nuclear",	"pintura",		  "natacion",  "router"},
		{"memoria RAM",			"guerra mundial",	"el grito",		  "gimnasia",  "switch"},
		{"sistema operativo",	"peste negra",	   	"mona lisa",	  "futbol",	   "HTTPS protocolo"},
		{"computadora portatil","pandemia mundial",	"el juicio final","basketball","fibra optica"},
	};
	
	return palabra[min+rand()%(max-min)][tema];
}

int main(int argc, char *argv[]) {
	int a=5,tema=0,nivel=0;
	while (a>0) {
		limpiar_pantalla();
		cout<<"\n   elija un tema\n"<<endl;
		cout<<"1 informatica\n2 historia \n3 arte\n4 deporte\n5 redes\n"<<endl;
		cout<<"____________________"<<endl<<"OPCION: ";
		cin>>tema;
		if(tema<1||tema>5){
			cout<<"Fuera de rango"<<endl;
		}else{
			cout<<"\n   elija un nivel\n"<<endl;
			cout<<"1 Facil\n2 Medio \n3 Dificil\n"<<endl;
			cout<<"____________________"<<endl<<"OPCION: ";
			cin>>nivel;
			if(nivel<1||nivel>3){
				cout<<"Fuera de rango"<<endl;
			}else{
				cout<<GetString(tema-1,nivel)<<endl;
				getchar();
				getchar();
				
			}
		}
	}

	return 0;
}

