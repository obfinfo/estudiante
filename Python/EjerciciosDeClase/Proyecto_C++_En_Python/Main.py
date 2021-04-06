import time
import os
import random

def borrarPantalla(): #Definimos la función estableciendo el nombre que queramos
    if os.name == "posix":
        os.system ("clear")
    elif os.name == "ce" or os.name == "nt" or os.name == "dos":
        os.system ("cls")
	
#variables globales
vidas=0
palabraParaMostrar=""
palabraOculta=""
GANADOR=7
PERDEDOR=0
intentos=0

def main():
	i=6	
	for x in range(i):
            print("\t\tJUEGO 'EL AHORCADO'\n")
            print("\n\t\t    Cargando...\n\n\t\t  [" + "##"*x + ".."*(i-x) +"]")
            print("\n\nIntegrantes:")
            print("-Axel Rolando Espinal Calix   20201001102")
            print("-Cesar Obeth Flores Flores    20201001034")
            print("-Jafet Kaleb Romero Romero    20192400032")
            print("-Wilmer David Corea Lopez     20171030657")
            print("-Yency Carolina Matute Amaya  20172000635")
            time.sleep(1)
            borrarPantalla()
	menu()

def menu():
	tema=0
	nivel=0
	print("\n Seleccione un tema\n\n")
	print("1) informatica\n2) deporte\n3) redes Informaticas\n\n")
	print("_____________\n"+"OPCION: ")
	tema = int(input())
	if tema<1 or tema>3 :
		menu()
	else:
		print("\n Seleccione un nivel\n")
		print("1) Facil\n2) Medio \n3) Dificil\n")
		print("_____________\n"+"OPCION: ")
		nivel=int(input())
		if nivel<1 or nivel>3:
			menu()
		else:
		  print("game run")
		  print(GetString(tema-1, nivel))

def GetString(tema, nivel):
	min=(nivel-1)*2+(nivel-1)
	max=(nivel*3)-1
	palabra = ""

	if tema == 0:
		informatica=("USB","CPU","RAM","TECNOLOGIA","DISCO DURO","WEBCAM","SISTEMA OPERATIVO","COMPUTADORA PORTATIL","PLACA MADRE")
		palabra=informatica[random.randint(min, max)]
	if tema==1:
		deporte=("GOLF","TENNIS","FUTBOL","NATACION","GIMNASIA","CICLISMO","BALONCESTO","FUTBOL AMERICANO","VOLEIBOL DE PLAYA")
		palabra=deporte[random.randint(min, max)]
	if tema==2:
		redes=("OSI","RJ45","DHCP","ROUTER","SWITCH","SERVIDOR","PROTOCOLO HTTPS","FIBRA OPTICA","TARJETA DE RED")
		palabra=redes[random.randint(min, max)]

	print(palabra)
	menu()
	return palabra

#def calcularVidas():

#def gameLoop():

#def dibujarMuneco():

#def gameOver():

main()
