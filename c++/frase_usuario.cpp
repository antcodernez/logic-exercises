#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		string frase; // se inicializa la variable frase para que se guarde el input del usuario 
		
		cout << "Ingrese una frase o palabra: "; // Output que indica al usuario que ingrese su frase a desear
		getline(cin, frase, '\n'); //  La función getline() extrae caracteres del flujo de entrada y 
		// lo agrega al objeto de string hasta que se encuentra el carácter delimitador
		
		cout << "Su frase es: "<<frase; // output con la variable frase
	}