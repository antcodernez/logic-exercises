#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int i, x; // se inicializaron las variables i y x
		// i va a ser iterada en cada vuelta al ciclo 
		// x sera el numero maximo a iterar definido por el usuario
		
		cout << "Ingresa un numero para saber de 0 a el numero de tu eleccion para saber si son pares o no \n"; // output del menu
		cout << "Ingresa el numero de tu eleccion: "; // indica al usuario que ingrese el numero maximo a iterar
		cin >> x; // se definen la variable x
		while (i <= x) // valida que la variable i sea menor que la x 
			{
				if ( i % 2 == 0) // valida si el resto entre la variable i y 2 es igual a 0, mostrara el numero par 
					{
						cout << i<<" es numero par \n"; // 	output del numero par					
					}
					
				i += 1; // se le suma 1 a cada vuelta del bucle 
			}
	}
	
