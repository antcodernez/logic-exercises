#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		int numero, limite, n, resultado; // Se inicializaron 4 variables
		// numero es la variable que guardará el numero a multiplicar
		// limite es el numero maximo a multiplicar
		// n es la variable a iterar en el bucle
		// resultado guarda la multiplicacion de la variable numero y la variable n mientras ocurre el bucle
		
		cout << "Ingresa el numero que deseas multiplicar: "; // indica al usuario cual numero desea multiplicar
		cin >> numero; // input de la varible numero
		
		cout << "Ingresa el limite de la tabla de multipliacar: "; // indica al usuario el maximo numero a multiplicar
		cin >> limite; // input de la variable limite
		
		while (n <= limite) // Bucle while se ejecutara mientras n sea menor o igual a limite 
			{
				resultado = numero * n; // se multiplicara la variable numero por la variable n y se guardará en la variable resultado 
				cout << numero<<" x "<<n<<" = "<<resultado<<endl; // output con los resultados de cada iteracion del bucle 
				n = n + 1; 	// se itera la variable n cada vez que se ocurre el bucle y se le suma 1 a la variable n 
			}		
	}