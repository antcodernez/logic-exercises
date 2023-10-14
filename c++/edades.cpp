#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		int age; // Se inicializa la variable edad, para despues ser validada en diferentes casos 
		
		cout << "En base a su edad, se va a determinar si es un infante, un joven, un adulto o un anciano \n"; // output del menu principal
		cout << "Ingrese su edad: "; // string que indica al usuario que ingrese su edad
		cin >> age; // se guarda la variable age y guarda la edad introducida por el usuario
		
		if (age <= 12) // caso 1, se valida si la edad es menor o igual a 12
			{
				cout << "El usuario es un infante"; // output del caso 1
			}
		else if (age > 13 && age <= 21) // caso 2, se valida si la edad es mayor a 13 y si es mejor o igual a 21
			{
				cout << "El usuario es un joven"; // output del caso 2
			}
		else if (age >= 22 && age <= 59) // caso 3, se valida si la edad es mayor a 22 y si es menor o igual a 59
			{
				cout << "El usuario es un adulto"; // output del caso 3
			}
		else if (age > 60) // caso 4, se valida si la variable es mayor o igual a 60
			{
				cout << "El usuario es un anciano"; // output del caso 4
			}
	}
