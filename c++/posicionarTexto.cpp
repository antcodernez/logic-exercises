#include<iostream> // Parte de la biblioteca standar de c++, para procesar texto
#include <windows.h> // Libreria que contiene metodos para la parte visual de la termianl

using namespace std;

void gotoxy(int x, int y) // funcion para mover mis caracteres en la terminal
	{
		HANDLE hcon;
		hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hcon,dwPos);
	}
	
int main()
	{
		gotoxy(9,7);cout<<"Jesus A"; // output con las cordenadas 9 en x y 7 en y
		for (int i=1;i<=25;i++) // bucle que imprime caracteres con x como variable e y en 1;
	 		{
	 	 		gotoxy(i,1);cout<<"x";	 
			}
		
		for (int i=1;i<=15;i++) // bucle que imprime caracteres con x como 1 e y en variable;
	 		{
	 	 		gotoxy(1,i);cout<<"x";	 
			}
			
		for (int i=2;i<=25;i++) // bucle que imprime caracteres con x como variable e y en 15;
	 		{
	 	 	gotoxy(i,15);cout<<"x";	 
			}
		
		for (int i=2;i<=15;i++) // bucle que imprime caracteres con x como 25 e y como variable;
	 		{
	 	 		gotoxy(25,i);cout<<"x";	 
			}
	}