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
            print("\n\n ###   #   #   ###   ####    ####   ###   ###     ###\n#   #  #   #  #   #  #   #  #      #   #  #  #   #   #\n#####  #####  #   #  #####  #      #####  #   #  #   #\n#   #  #   #  #   #  #  #   #      #   #  #  #   #   #\n#   #  #   #   ###   #   #   ####  #   #  ###     ###\n")
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

def dibujarMuneco():
	PERDEDOR = 0
	GANADOR = 7

	if intentos == 1:
		print("""
 __________\n|         |\n|         0\n|        /|\\\n|        /\n|\n|
		""")
	elif intentos == 2:
		print("""
 __________\n|         |\n|         0\n|        /|\\\n|\n|\n|
		""")
	elif intentos == 3:
		print("""
 __________\n|         |\n|         0\n|        /|\n|\n|\n|
		""")
	elif intentos == 4:
		print("""
 __________\n|         |\n|         0\n|         |\n|\n|\n|
		""")
	elif intentos == 5:
		print("""
 __________\n|         |\n|         0\n|\n|\n|\n|
		""")
	elif intentos == 6:
		print("""
 __________\n|         |\n|\n|\n|\n|\n|
		""")
	elif intentos == PERDEDOR:
		print("""
 _________\n|         |\n|         0\n|        /|\\\n|        / \\\n|\n|\n
			""")
	elif intentos == 7:
		print("""
			\n|         |\n|         \n|        \n|      0\n|     \\|/\n|     / \\\n
			""")

def gameOver():
	respuesta = str
	borrarPantalla()

	print("\n-------------------------------------\n\t¡FIN DEL JUEGO! \n-------------------------------------\n")
	intentos = PERDEDOR
	dibujarMuneco()
	
	print("La palabra oculta es: {}".format(palabraOculta))
	respuesta = input("\n¿Desea intentar jugar de nuevo? (Y/n):")

	if respuesta == "N" or respuesta == "n":
		borrarPantalla()
		quit()
	elif respuesta == "Y" or respuesta == "y":
		borrarPantalla()
		menu()

main()
