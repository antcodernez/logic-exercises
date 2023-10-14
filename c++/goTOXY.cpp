#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto
#include<windows.h> // Ique contiene declaraciones para todas las funciones en la API de Windows
using namespace std; // evita escribir std, en cada cout

void gotoxy(int x, int y) // se declara la funcion para moverse en eje x y y
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X= x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);
}

int main ()
	{
		gotoxy(6,3);cout << "Hola mundo"; // output del programa 		
	}