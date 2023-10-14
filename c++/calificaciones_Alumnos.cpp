#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		char cal, x; //  Inicialización de las variables cal y x 
		do // el programa se ejecuta en un ciclo do while, para poder repetir el programa n cantidad de veces
			{
				cout << "Bienvenido \n Ingrese su calificacion entre A y F: "; // output del menu principal 
				cin >> cal; // Esta variable será evaluada en distintos casos en un switch
				system ("cls");		// metodo del lenguaje que limpia la pantalla
				
				switch (cal) // Sentencia switch que va a evaluar la variable cal y en base a eso, devolvera un output
					{
						case 'A': case 'a': // Se valida si la variable cal es igual a "a" o "A"
								cout << "Excelente, aprobado con honores :D";
						break; 
						
						case 'B': case 'b': // Se valida si la variable cal es igual a "b" o "B"
							cout << "Aprobado de forma sobresaliente uwu"; 
						break;				
						
						case 'C': case 'c': // Se valida si la variable cal es igual a "c" o "C"
							cout << "Aprobado con buen desempeño 7u7";
						break;
						
						case 'D': case 'd': // Se valida si la variable cal es igual a "d" o "D"
							cout << "Aprovado de manera regular ñ.ñ";
						break;
						
						case 'E': case 'e': // Se valida si la variable cal es igual a "e" o "E"
							cout << "Aprovado, pero se sugiere mejorar :/";
						break;
						
						case 'F': case 'f': // Se valida si la variable cal es igual a "f" o "F"
							cout << "Reprobado, con un rendimiento pobre :c";
						break;
						
						default: // si nungún caso es verdad, entrara en default
							cout << "Ingresaste un valor no valido ";
						break;
					}
				cout << "\n Desea repetir el programa ? \n r ---- repetir \n Desea salir presione cualquien tecla: ";
				// output que indicara al usuario si desea repetir el programa o desea salir
				cin >> x;	// input de la variable x 
				system("cls"); // metodo del lenguaje 
			}
		while (x == 'r'); // Se valida si la variable x es igual a 'r' si retorna true, se repite el ciclo
	}
	
	