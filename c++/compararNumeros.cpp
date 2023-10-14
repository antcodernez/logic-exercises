#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		int a, b, c; // inicializacion de las variables a, b, c que se usaran para ser evaluadas en base a su declaración
		
		cout << "Programa de estructura de selccion simple\n"; // output del menu principal
		cout << "Ingresa el valor del primer numero: "; // Le indica al usuario que ingrese un numero
		cin >> a; // Se declara la variable a en base a lo que ingreso el usuario
		cout << "Ingresa el valor del segundo numero: "; // Le indica al usuario que ingrese un numero
		cin >> b; // Se declara la variable b en base a lo que ingreso el usuario
		
		system("cls"); // metodo del lenguaje que limpia la pantalla
		
		if (b <= a) // Se hace la comparacion de si la variable b es mejor o igual a a  
			{
				c = a - b; // Se declara la variable c como el resultado de la diferencia entre a y b 
				
				cout << "el resultado es :"<<c; // output de la variable c 
			}
			
		else // si la primera condicion no se cumple, se mostrara el caso por default
			{
				cout << "La variable b es mayo que la variable a, entonces no pasa nada D:"; // output del caso por default
			}
	}