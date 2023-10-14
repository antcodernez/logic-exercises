#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int option;
		
		cout<<"\n\n   Menu de rutinas de ejercicio"; // output menu
		cout<<"\n\n   1.-Lunes"; // indica que lunes es igual a 1
		cout<<"\n\n   2.-Martes"; // indica que martes es igual 2 
		cout<<"\n\n   3.-Miercoles"; // indica que miercoles es igual a 3
		cout<<"\n\n   4.-Jueves"; // indica que jueves es igual a 4
		cout<<"\n\n   5.-Viernes"; // indica que viernes es igual a 5
		cout<<"\n\n   6.-Sabado"; // indica que sabado es igual a 6
		cout<<"\n\n   Introduzca el numero del dia de acuerdo al dia que deaseas elgir: ";
		cin >> option; // option guarda la elecion del usuario
		
		switch (option) // indica que la variable option sera evaluada en los casos del switch 
			{
				case 1: // caso donde option es igual a 1
					cout << "Realiza el ejercicio 1 y 2"; // output del caso
				break; // termina el caso
				
				case 2: // caso donde option es igual a 2
					cout << "Realiza el ejercicio 3 y 4"; // output del caso
				break; // termina el caso
				
				case 3: // caso donde option es igual a 3
					cout << "Realiza el ejercicio 5 y 6"; // output del caso
				break; // termina el caso
				
				case 4: // caso donde option es igual a 4
					cout << "Realiza el ejercicio 7 y 8"; // output del caso
				break; // termina el caso
				
				case 5: // caso donde option es igual a 5
					cout << "Realiza el ejercicio 9 y 10"; // output del caso
				break; // termina el caso
				
				case 6: // caso donde option es igual a 6
					cout << "Realiza el ejercicio 11 y 12"; // output del caso
				break; // termina el caso
				
				default : // caso default si nunguno es valido
					cout << "Ingreso un valor no valido"; // output del caso
				break; // termina el caso
			}
	}