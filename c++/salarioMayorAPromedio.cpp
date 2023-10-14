#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int numSalarios, sumaTotal, i; // inicializacion de las variables
		float promedio; // inicializacion de la variables
		char repeat; // inicializacion de las variables
		
		cout << "Ingrese la cantidad de salarios que desea cuantificar: ";
		cin >> numSalarios; // guarda el numeros de salarios a definir
		
		float sueldos[numSalarios]; // se crea el array llamado sueltos donde se van a guardar los sueldos
		
		system("cls"); // metodo del lenguaje, limpia la pantalla
		
		for (i = 0; i < numSalarios; i++) // ciclo for que se va a ejecutar mientras i sea menor a el numero de salarios
		// i va a ser la variable que se va a iterar en cada vuelta del bucle 
			{
				cout << "Ingrese el valor de la posicion "<<i<<": "; // indica que ingrese el valor del sueldo en la posicion n
				cin >> sueldos[i]; // guarda el valor de los sueldos en el array
			}
		for (i=0; i < numSalarios; i++) // se va a ejecutar mientras i sea menor a el numero de salarios
		// i va a ser la variable que se va a iterar en cada vuelta del bucle 
			{
				sumaTotal += sueldos[i]; // suma cada elemento del array y lo guarda en la variable suma total
			}
		
		promedio = sumaTotal / numSalarios; // promedio guarda el promedio que es la sumatotal entre el numero de salarios
		
		for (i=0; i < numSalarios; i++) // se va a ejecutar mientras i sea menor a el numero de salarios 
		// i va a ser la variable que se va a iterar en cada vuelta del bucle 
			{
				if (promedio < sueldos[i]) // valida si un elemento dentro del array es mayor a el promedio
					{
						cout << "El promedio general es: "<<promedio<<endl; // muestra el promedio general del arreglo
						cout << "\n El sueldo de la posicion "<<i<<" es mayor al promedio general \n su valor es: "<<sueldos[i]<<endl;
						// muestra el sueldo mayor al promedio junto con su posicion detro del arreglo 
					}
			}
	}