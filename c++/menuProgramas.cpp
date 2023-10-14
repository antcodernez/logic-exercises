#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int desicion; // inicializacion de la variable desicion
		
		cout << "Menu de programas"<<endl; // output menu
		cout << "\n 1 ----- conversiones\n";// output menu
		cout << "\n 2 ----- Calificaciones Alumnos\n";// output menu
		cout << "\n 3 ----- Figuras Geometricas\n";// output menu
		cout << "\n 4 ----- operaciones basicas\n";// output menu
		cout << "Selecciona el programa que quieras usar :"; // output menu
		cin >> desicion; // Se declara la variable desicion para ser evaluada en diferentes casos
		
		system("cls"); // metodo del lenguaje, limpia la pantalla
		
		if (desicion == 1) // se valida si desicion es igual 1 
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
		else if (desicion == 2) // se valida si desicion es igual 2 
			{
				char cal; //  Inicialización de las variables cal
				 
				cout << "Bienvenido \n Ingrese su calificacion entre A y F: "; // output del menu principal 
				cin >> cal; // Esta variable será evaluada en distintos casos en un switch
				system ("cls");		// metodo del lenguaje que limpia la pantalla
				
				switch (cal) // Sentencia switch que va a evaluar la variable cal y en base a eso, devolvera un output
					{
						case 'A': case 'a': // Se valida si la variable cal es igual a "a" o "A"
								cout << "Excelente, aprobado con honores :D";
						break; 
						
						case 'B': case 'b': // Se valida si la variable cal es igual a "b" o "B"
							cout << "Aprobado de forma sobresaliente uwu"; 
						break;				
						
						case 'C': case 'c': // Se valida si la variable cal es igual a "c" o "C"
							cout << "Aprobado con buen desempeño 7u7";
							break;
						
						case 'D': case 'd': // Se valida si la variable cal es igual a "d" o "D"
							cout << "Aprovado de manera regular ñ.ñ";
						break;
						
						case 'E': case 'e': // Se valida si la variable cal es igual a "e" o "E"
							cout << "Aprovado, pero se sugiere mejorar :/";
						break;
						
						case 'F': case 'f': // Se valida si la variable cal es igual a "f" o "F"
							cout << "Reprobado, con un rendimiento pobre :c";
						break;
						
						default: // si nungún caso es verdad, entrara en default
							cout << "Ingresaste un valor no valido ";
						break;
					}
			}
		else if (desicion == 3) // se valida si desicion es igual 3 
			{
				int l, desicion2, h, a; // inicializacion de las varioables 
				
				cout << "Calculadora de figuras geometricas"<<endl; // output menu opcion 3
				cout << "\n 1 ---- Cuadrado \n"; // output menu opcion 3
				cout << "\n 2 ---- Rectangulo \n"; // output menu opcion 3
				cout << "\n 3 ---- Triangulo \n"; // output menu opcion 3
				cout << "Ingresa el valor de la figura que deseas calcular: "; // indica que ingrese la opcion a elegir 
				cin >> desicion2; // variable que guarda el valor de la desicion del usuario
				
				system("cls"); // metodo del lenguaje que limpia la pantalla
				
				if (desicion2 == 1) // valida si la variable desicion2 es igual a 1
					{
						cout << "Ingrese el valor del lado de su cuadrado: "; // indica al usuario que hacer
						cin >> l; // se declara la variable l
						l *= l;	 // la variable l es igual a la variable l multiplicada por la variable l
							
						cout << "El area de su cuadrado es: "<<l<<" cm2"; // muestra el resultado
					}
				else if (desicion2 == 2) // valida si la variable desicion2 es igual a 2
					{
						cout << "Ingresa la base de tu rectangulo: "; // indica al usuario que hacer
						cin >> l; // se declara la variable l, guarda la base del rectangulo
						cout << "Ingresa la altura de tu rectangulo :"; // indica al usuario que hacer
						cin >> h; // se declara la variable h que guarda la altura del rectangulo
						
						h *= l; // la variable h es igual a la variable h por la varriable l
 
						cout << "Es area de tu rectangulo es: "<<h; // muestra el resultado
					}
				else if (desicion2 == 3) // valida si la variable desicion2 es igual a 3
					{
						cout << "Ingresa la base de tu triangulo: "; // indica al usuario que hacer
						cin >> l;// se declara la variable l que guarda el valor de la base del rectangulo
						cout << "Ingresa la altura de tu triangulo: "; // indica al usuario que hacer
						cin >> h; // se declara la variable h que guarda la altura el triangulo
						
						a = (l * h) / 2; // se declara la variable a que guarda el resultado de multiplicar l por h entre 2 
						
						cout << "Es area de tu rectangulo es: "<<a;	// muestra el resultado
					}
				else  // valor por default
					{
						cout << "Ingresaste un valor no valido D:"; // output del caso
					}		
			}	
		else if (desicion == 4) // se valida si desicion es igual 4 
			{
				float num1, num2, operacion; // inicializacion de las varioables 
				int desicion; // inicializacion de las varioables 
				
				cout << "Calculadora de operaciones basica \n"; // output menu
				cout << "Ingrese el valor del primer numero: "; // indica al usuario que hacer
				cin >> num1; // se declara la variable num1 que guarda el valor del numero 1
				cout << "Ingrese el valor del segundo numero: "; // indica al usuario que hacer
				cin >> num2; // se declara la variable num1 que guarda el valor del numero 2
				
				system("cls"); // metodo del lenguaje, limpia la pantalla
				
				cout << "1 ---- suma \n";  // output menu 2
				cout << "2 ---- resta\n";// output menu 2
				cout << "3 ---- multiplicacion\n";// output menu 2
				cout << "4 ---- divison \n";// output menu 2
				cout << "Elige la opcion de la operacion que quieras :";// indica al usuario que hacer
				cin >> desicion; // se declara la variable desicion en base al input del usuario
				
				if (desicion == 1) // se valida si desicion es igual 1
					{
						operacion = num1 + num2; // la variable operacion guarda el resultado de la suma de los dos numeros 
						cout << "El resultado de tu suma es: "<<operacion; // muestra el resultado
					}
				if (desicion == 2) // se valida si desicion es igual 2
					{
						operacion = num1 - num2; // la variable operacion guarda el resultado de la resta de los dos numeros 
						cout << "El resultado de tu resta es: "<<operacion; // muestra el resultado
					}
				if (desicion == 3) // se valida si desicion es igual 3
					{
						operacion = num1 * num2; // la variable operacion guarda el resultado de la multiplicacion de los dos numeros 
						cout << "El resultado de tu multiplicacion es: "<<operacion; // muestra el resultado
					}
				if (desicion == 4) // se valida si desicion es igual 4
					{
						operacion = num1 / num2; // la variable operacion guarda el resultado de la divison de los dos numeros 
						cout << "El resultado de tu division es: "<<operacion; // muestra el resultado
					}
				else 
					{
						cout << "Ingreso un valor no valido D:"; // output del caso
					}
			}

		else 
			{
				cout << "Ingresaste un valor no valido"; // output del caso
			}	
	}