#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		float num1, num2, suma; // inicializacion de las variables
		
		cout << "Ingrese su primer numero: "; // indica que ingrese el numero en cuestion
		cin >> num1; // se declara la variable con el valor del usuario
		
		system("cls"); // metodo del lenguaje que limpia la pantalla
		
		cout << "Ingrese su segundo numero: "; // indica que ingrese el numero en cuestion
		cin >> num2;// se declara la variable con el valor del usuario
		
		suma = num1 + num2; // la variable suma guarda el valor de la suma de la variable num1 y num2
		
		cout << "El resultado es: "<<suma; // muestra el resultado de la variable suma
	}