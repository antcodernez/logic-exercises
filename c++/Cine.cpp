#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		char opcion; // inicalizacion de la variable opcion de tipo char 
		
		cout << "\n Bienvenido al cine UTXJ :D \n"; // output del menu principal
		cout << "\n Elije que deseas comprar \n"; // output del menu principal
		cout << "\n a ---- Palomitas\n"; // output del menu principal
		cout << "\n b ---- Refresco\n"; // output del menu principal
		cout << "\n c ---- Dulces\n"; // output del menu principal
		cout << "\n d ---- 	Agua\n"; // output del menu principal
		cout << "\n e ---- nachos\n"; // output del menu principal
		cout << "\n f ---- Ice\n"; // output del menu principal
		cout << "\n Ingresa el valor que deseas elejir \n"; // output que indica que ingrese uno de los valores correspondientes
		cin >> opcion; // input de la variable opcion
		
		system("cls"); // metodo del lenguaje que limpia la pantalla
		
		switch(opcion) // Se indica que la variable opcion va a ser evaluada en el switch
			{
				case 'a': case 'A': // Se valida si la variable opcion es igual a 'a' o 'A'
					cout << "Seleccionaste las palomitas \n Debes pagar 35$";
				break; // termina el caso del switch
				
				case 'b': case 'B': // Se valida si la variable opcion es igual a 'b' o 'B'
					cout << "Seleccionaste refresco \n Debes pagar 16$";
				break; // termina el caso del switch
				
				case 'c': case 'C': // Se valida si la variable opcion es igual a 'c' o 'C'
					cout << "Seleccionaste los dulces \n Debes pagar 10$";
				break; // termina el caso del switch
				
				case 'd': case 'D': // Se valida si la variable opcion es igual a 'd' o 'D'
					cout << "Seleccionaste agua\n Debes pagar 12$";
				break; // termina el caso del switch
				
				case 'E': case 'e': // Se valida si la variable opcion es igual a 'e' o 'E'
					cout << "Seleccionaste los nachos \n Debes pagar 45$";
				break; // termina el caso del switch
				
				case 'f': case 'F': // Se valida si la variable opcion es igual a 'f' o 'F'
					cout << "Seleccionaste un Ice\n Debes pagar 55$";
				break; // termina el caso del switch
				
				default: // Si ninguna validacion es verdadera, se ejecutara este bloque de codigo
					cout << "Seleccionaste un valor invalido :c";
				break; // termina el caso del switch
			}
	}