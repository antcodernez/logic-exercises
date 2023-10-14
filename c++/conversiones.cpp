#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int desicion, kilometros; // se inicializan las variables
		float pesos, dolar; // se inicializan las variables
		 	
		cout << "Este programa realiza conversiones"<<endl; // output menu
		cout << "1 ---- pesos a dolares"<<endl;// output menu
		cout << "2 ---- Kilometros a metros"<<endl;// output menu
		cout << "Ingrese uno de los valores: "; // indica que ingrese uno de los valores del menu
		cin >> desicion; // se declara la variable desicion que guarda el valor introducido por el usuario
		
		system("cls"); // metodo del lenguaje que limpia la terminal
		
		if (desicion == 1) // valida si desicion es igual a 1 
			{
				cout << "Pesos a dolares"<<endl; // output menu caso 1
				cout << "Ingrese el tipo de cambio actual: "; // ingresa el valor actual del dolar
				cin >> dolar; // se declara la variable dolar y guarda el valor actual del dolar
				cout << "Ingrese su cantidada de pesos: "; // ingresa tu cantidad de pesos
				cin >> pesos; // se declara la variable pesos
				pesos /= dolar; // La variable pesos se divide entre la variable dolar
				
				cout <<"Su cantidad a dolares es igual a: "<<pesos<<" usd"; // muestra el resultado de la conversion
			}
		else if (desicion == 2) // valida si desicion es igual a 2
			{
				cout << "De kilometros a metros"<<endl; // output menu caso 2
				cout << "Ingrese su cantidad a kilometros: "; // Ingresa tus kilometros a convertir
				cin >> kilometros; // de declara la variable kilometros que guarda los kilometros dados por mi usuario
				
				kilometros *= 1000; // La variable kilometros se multiplica por 1000
				
				cout << "Su kilometros a metros da un total de: "<<kilometros<<" metros"; // muestra el resultado de la conversion 		
			}
		else // caso por defecto
			{
				cout << "Ingreso un valor no valido :c"; // muestra que el valor ingresado no es valido
			}
	}