#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		float num1,num2, suma, resta, mult, div; // se inicializaron las variables  
		
		cout << "Este programa realiza las operaciones basicas entre dos numeros \n"; // output del menu
		
		cout << "Ingresa tu primer numero :"; // indica ingreses tu numero a elegir 
		cin >> num1; // se declara la variable num1
		cout << "Ingresa tu segundo numero :"; // indica ingreses tu numero a elegir 
		cin >> num2; // se declara la variable num2
		
		suma = num1 + num2; // La variable suma guarda el resultado de la suma de la variable num1 y num2 
		resta = num1 - num2; // La variable resta guarda el resultado de la resta de la variable num1 y num2 
		mult = num1 * num2; // La variable mult guarda el resultado de la multiplicacion de la variable num1 y num2 
		div = num1 / num2; // La variable div guarda el resultado de la divison de la variable num1 y num2 
		
		cout << "La suma de tus numeros es: "<<suma<<endl; // muestra la variable suma
		cout << "La resta de tus numeros es: "<<suma<<endl; // muestra la variable resta
		cout << "La division de tus numeros es: "<<suma<<endl; // muestra la variable divison
		cout << "La multiplicacion de tus numeros es: "<<suma<<endl; // muestra la variable multiplicacion
	}