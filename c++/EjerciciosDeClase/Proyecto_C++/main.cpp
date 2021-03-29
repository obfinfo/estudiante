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
//variables globales
int vidas;
string palabraParaMostrar;
string palabraOculta;

//declaracion de funciones
void menu();
string GetString(int, int);
void calcularVidas();
void gameLoop();
void dibujarMuneco();
void gameOver();

int main() {
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
	cout<<"-Axel Rolando Espinal Calix   20201001102"<<endl;
	cout<<"-Cesar Obeth Flores Flores    20201001034"<<endl;
	cout<<"-Jafet Kaleb Romero Romero    20192400032"<<endl;
	cout<<"-Wilmer David Corea Lopez     20171030657"<<endl;
	cout<<"-Yency Carolina Matute Amaya  20172000635"<<endl;
	sleep(1);
	limpiar_pantalla();
	
	}
	
	menu();

	return 0;
}

void menu(){
	int tema=0,nivel=0;
	limpiar_pantalla();
	cout<<"\n Seleccione un tema\n"<<endl;
	cout<<"1) informatica\n2) deporte\n3) redes Informaticas\n"<<endl;
	cout<<"_____________"<<endl<<"OPCION: ";
	cin>>tema;
	if(tema<1||tema>3){
		cout<<"Fuera de rango"<<endl;
		menu();
	}else{
		cout<<"\n Seleccione un nivel\n"<<endl;
		cout<<"1) Facil\n2) Medio \n3) Dificil\n"<<endl;
		cout<<"_____________"<<endl<<"OPCION: ";
		cin>>nivel;
		if(nivel<1||nivel>3){
			cout<<"Fuera de rango"<<endl;
			menu();
		}else{
			palabraOculta = GetString(tema-1,nivel);
			calcularVidas();
			gameLoop();
		}
	}
}

string GetString(int tema, int nivel){
	int min=nivel+nivel-1, max=(nivel*2)+1;
	srand(time(NULL)); 
	string palabra[7][3] =
	{
		{"informatica",		"deporte",      "redes"},
		{"USB",			"golf",		"OSI"},
		{"CPU",			"tennis",	"RJ45"},
		{"tecnologia",		"natacion",     "router"},
		{"memoria RAM",		"gimnasia",     "switch"},
		{"sistema operativo",   "futbol",	"protocolo HTTPS"},
		{"computadora portatil","basketball",	"fibra optica"},
	};
	
	return palabra[min+rand()%(max-min)][tema];
}

void calcularVidas(){
	//funcion disponible
	//clacular las vidas depende del largo de la palabra en la variable global "palabraOculta"
	vidas=0;
}

void gameLoop(){
	//funcion disponible
	dibujarMuneco();
	//pedir un caracter al usuario y verificar si esta en la variable global "palabraOculta"
	//si esta agregarla a la variable global "palabraParaMostrar"
	//si no esta restarle 1 a la variable global "vidas" 
	//si vidas es 0 llamar la funcion gameOver()
}

void dibujarMuneco(){
	//funcion disponible
	//dibujar un muñecoahorcado dependiendo el numero de vidas que tenga
}

// Funcion que se decide si el juego debe continuar
void gameOver() {
	limpiar_pantalla();
	char respuesta;

	cout << "\n-------------------------------------\n" << "\t¡FIN DEL JUEGO!" << "\n-------------------------------------\n" << endl;
	cout << "\n¿Desea jugar de nuevo? (Y/n): ";
	cin >> respuesta;

	if (respuesta == 'N' || respuesta == 'n' ){ 
		cout<<""<<endl;
	} else if (respuesta == 'Y' || respuesta == 'y'){
		menu();
	}

}
