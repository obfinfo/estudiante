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
	srand(time(NULL));
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
	int min=(nivel-1)*2+(nivel-1), max=(nivel*3);
	string palabra;
	
	switch (tema){
		case 0:{
			string informatica[9]={"USB","CPU","RAM","tecnologia","disco duro","webcam","sistema operativo","computadora portatil","placa madre"};
			palabra=informatica[min+rand()%(max-min)];
		}
		break;
		case 1:{
			string deporte[9]={"golf","tennis","futbol","natacion","gimnasia","ciclismo","baloncesto","futbol americano","voleibol de playa"};
			palabra=deporte[min+rand()%(max-min)];
		}
		break;
		case 2:{
			string redes[9]={"OSI","RJ45","DHCP","router","switch","servidor","protocolo HTTPS","fibra optica","tarjeta de red"};
			palabra=redes[min+rand()%(max-min)];
		}
		break;
	}
	return palabra;
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

	cout << "\n-------------------------------------\n" << "\tFIN DEL JUEGO!" << "\n-------------------------------------\n" << endl;
	cout << "\nDesea jugar de nuevo? (Y/n): ";
	cin >> respuesta;

	if (respuesta == 'N' || respuesta == 'n' ){ 
		cout<<""<<endl;
	} else if (respuesta == 'Y' || respuesta == 'y'){
		menu();
	}

}
