#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		int i; // inicialización de la variable i para ser iterada en los ciclos
		int lenght; // inicialización de la variable lenght para que guarde la longitud de mi array 
		int firstValue;// guardara el valor de la primera posicion del array numeritos 
		
		cout << "Ingrese la longitud de su array: ";
		cin >> lenght;
		
		int numeritos[lenght]; // inicialización de un array, su longitud depende de la variable lenght
		
		system("cls");
		
		for (i=0; i < lenght; i++) // realiza el llenado del arreglo 
			{
				cout << "Ingrese el valor de la posicon "<<i<< " de su array: ";
				cin >> numeritos[i];
			}
		
		firstValue = numeritos[0]; // se guarda el valor de la posición 0
		
		for (i=0; i < lenght; i++)	
			{
				if (firstValue < numeritos[i]) // pregunta si la posición n es mayor que la variable firstValue, y si es true la variable se reescribe y...
				// ahora vale lo que la posición en cuestión 
					{
						firstValue = numeritos[i];
					}
			}
		
		cout << "El elemento mayor es: "<< firstValue;
	}