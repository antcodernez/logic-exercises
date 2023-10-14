#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		float deposito, saldo, retiro; // Se inicilizan las variables
		char desicionATM, repeat; // Se inicilizan las variables
		saldo = 5000; // se declara la variable saldo con un valor inicial de 5000
		
		do  // se va a ejecutar el programa una vez y despues se le preguntara al usuario si quiere salir o hacer algun otro movimiento
			{
				cout << "\n Bienvenido al mejor ATM :D \n"; // output menu
				cout << "\n A ---- Consulta de saldo \n"; // output menu
				cout << "\n B ---- Realizar un deposito \n"; // output menu
				cout << "\n C ---- Realizar un retiro \n"; // output menu
				
				cout << "Ingresa una opcion: "; // indica al usuario que ingrese una de las opciones del menu
				cin >> desicionATM; // se declara la variable desicionATM que guarda el caracter ingresado por el usuario
				
				system("cls"); // metodo del lenguaje que limpia la pantalla
				
				switch (desicionATM) // el switch va a comparar con varios casos la variable desicionATM
					{
						case 'A': case 'a': // se valida si desicionATM es igual a 'A' o 'a'
							cout << "Su saldo actual es de: "<<saldo; // output del caso
						break; // termina el caso
						
						case 'b': case 'B': // se valida si desicionATM es igual a 'b' o 'B'
							cout << "Ingresa la cantidad a depositar: ";// output del caso
							cin>> deposito; // se declara la variable deposito que guarda el deposito del usuario
							saldo += deposito; // se suma la variable saldo + el deposito
							cout << "Deposito realizado con exito :D"<<endl; // output del caso
							cout << "Su saldo actual es de: "<<saldo<<endl; // muestra el saldo despues del deposito
						break; // termina el caso
						
						case 'c': case 'C': // se valida si desicionATM es igual a 'c' o 'C'
							cout << "Ingresa la cantidad a retirar: "; // indica que hay que ingresar la cantidad a depositar
							cin >> retiro; // guarda la variable retiro con la cantidad a retirar de la cuenta
														
							if (retiro > saldo) // valida que el retiro sea mayor a la cantidad de saldo
								{
									cout << "No cuenta con el dinero suficiente para realizar ese deposito."; // output del caso
								}
							else if (retiro < saldo) // valida si el retiro es menor a la cantidad de saldo
								{
									saldo -= retiro; // a la variable saldo se le resta el retiro
									cout << "Su saldo actual es de: "<<saldo; // muestra el saldo despues del retiro
								}
						break; // termina el caso
						
						default: // caso por default en caso de que no se ingrese un caracter valido
							cout << "Ingrese un valor valido por favor"; // output del caso
						break; // termina el caso
					}		
				cout << "\n\n Desea salir del programa precione cualquier tecla \n\n desea repetir presione r"; // indica si quieres repetir o salir 
				cin >> repeat; // se declara la variable r, en base a la desicion del usuario 
				system("cls"); // metodo del lenguaje que limpia la pantalla
			}
		while (repeat == 'r'); // valida si la variable r es igual a 'r'
		
	}