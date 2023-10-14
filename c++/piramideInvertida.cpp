#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto
#include <windows.h> // para implementar mejores interfaces de programas pequeños 
using namespace std; // evita escribir std, en cada cout

void gotoxy(int x, int y) // funcion para mover mis caracteres en la terminal, en eje de las x y las y 
	{
		HANDLE hcon;
		hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X= x;
		dwPos.Y= y;
		SetConsoleCursorPosition(hcon, dwPos);
	}

int main ()
	{
		int i; // inicializacion de la variable i para ser iterada en los bucles
		
		
		for (i=0; i < 5; i++) // Se va a ejecucar el bucle 5 veces
			{
				gotoxy(i, 0);cout << "A"; // output del caracter "A"
			}
		for (i=1; i < 4; i++) // se va a ejecutar el bucle 4 veces
			{
				gotoxy(i, 1);cout << "A"; // output con el caraceter "A"
			}	
				
		gotoxy(2, 2);cout << "A"; // output con el caraceter "A"
	}