#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int lenght, i; // se declararon 2 de las 3 variables a utilizar en el programa
		cout << "Ingresa la longitud el numero de valores de tu array: "; // string que le dice al usuario que ingrese la longitud a desear de su arreglo
		cin >> lenght; // input de la variable lenght para definir la longitud del arreglo
		
		int valores[lenght]; // declaracion del arreglo y su longitud en base a la variable lenght
		
		system("cls"); // metodo del lenguaje para limpiar la pantalla
		
		for (i = 0; i < lenght; i++) // declaracion de la variable i y después se incrementa en 1 por ciclo, y se... 
		// usa un operador de comparacion para que el ciclo se ejecute el numero de veces menor que la variable lenght  
			{
				cout << "Ingresa el valor "<<i<<" de tu array: "; // output que indica al usuario que ingrese el valor de la posición n en el array
				cin >> valores[i]; // input de la posición n en el arreglo
				
				system("cls"); // metodo del lenguaje que limpia la pantalla
			}
		
		for (int x = 0; x < lenght; x++) // ciclo for que imprime el indice y el valor de la posición n del arreglo
			{
				cout << "\n El valor de la posicion "<<x<<" de tu array es: "<<valores[x]<<endl; // output del indice y del arreglo
			}
	}