#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

#ifdef __linux__
#define SO "Linux"
#define limpiar_pantalla() ( system("clear") )
#include <unistd.h>
#elif _WIN32
#include <Windows.h>
#define SO "Windows"
#define limpiar_pantalla() ( system("cls") )
#endif


void menu();
string GetString(int tema, int nivel);

int main(int argc, char *argv[]) {
	//pantalla de carga 
	for(int i=1;i<=6;i++){
	cout<<"\t\tJUEGO 'EL AHORCADO'\n";
	cout<<"\n\t\t    Cargando...\n\n\t\t  [";
	for(int x=0;x<i;x++){
	    cout<<setw(2)<<"##";
	}
	for(int y=5;y>=i;y--){
	    cout<<setw(2)<<"..";
	}
	cout<<"]\n\nIntegrantes:"<<endl;
	cout<<"-Cesar Obeth Flores Flores    20201001034"<<endl;
	cout<<"-Yency Carolina Matute Amaya  20172000635"<<endl;
	cout<<"-Jafet Kaleb Romero Romero    20192400032"<<endl;
	cout<<"-Axel Rolando Espinal Calix   20201001102"<<endl;
	cout<<"-"<<endl;
	sleep(1);
	limpiar_pantalla();
	
	}
	
	menu();

	return 0;
}

void menu(){
	int a=5,tema=0,nivel=0;
	while (a>0) {
		limpiar_pantalla();
		cout<<"\n Seleccione un tema\n"<<endl;
		cout<<"1 informatica\n2 historia \n3 arte\n4 deporte\n5 redes\n"<<endl;
		cout<<"_____________"<<endl<<"OPCION: ";
		cin>>tema;
		if(tema<1||tema>5){
			cout<<"Fuera de rango"<<endl;
		}else{
			cout<<"\n Seleccione un nivel\n"<<endl;
			cout<<"1 Facil\n2 Medio \n3 Dificil\n"<<endl;
			cout<<"_____________"<<endl<<"OPCION: ";
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
}

string GetString(int tema, int nivel){
	int min=nivel+nivel-1, max=(nivel*2)+1;
	srand(time(NULL)); 
	string palabra[7][5] =
	{
		{"informatica",		"historia",		"arte",		 "deporte",    "redes"},
		{"USB",			"911",	  	 	"teatro",	 "golf",	"OSI"},
		{"CPU",			"muro",			"escultura",	 "tennis",	"RJ45"},
		{"tecnologia",		"prueba nuclear",	"pintura",	 "natacion",   "router"},
		{"memoria RAM",		"guerra mundial",	"el grito",	 "gimnasia",   "switch"},
		{"sistema operativo",	"peste negra",	   	"mona lisa",	  "futbol",	"protocolo HTTPS"},
		{"computadora portatil","pandemia mundial",	"el juicio final","basketball","fibra optica"},
	};
	
	return palabra[min+rand()%(max-min)][tema];
}
