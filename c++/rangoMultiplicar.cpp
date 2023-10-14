#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int numeroMult, rangoInicio, rangoFin, resultado; // se inicializan las variables
		
		cout << "Ingresa el numero a multiplicar: "; // ingresas el numero a multiplicar
		cin >> numeroMult; // guarda el numero a multiplicar
		
		cout << "Ingresa el primer rango: "; // ingresas el rango inicial
		cin >> rangoInicio; // guarda el valor donde comienza el rango
		
		cout << "Ingresa el fin de tu rango: "; // ingresas el rango final
		cin >> rangoFin; // Guarda el valor donde acaba el rango
		
		while (rangoInicio <= rangoFin) // valida que el rango sea menor o igual al rangoFin
			{
				resultado = numeroMult * rangoInicio; // La variable resultado guarda el valor de la multiplicacion entre el numero a multiplicar y el rango inicio
				
				cout << numeroMult<<" x "<<rangoInicio<<" = "<<resultado<<endl; // muestra el resultado de la multiplicacion
				
				rangoInicio += 1; // Incrementa en 1 el valor rango de inicio
			}		
	}	
