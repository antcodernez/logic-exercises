#include <iostream> // parte de la biblioteca estandar de c++, permite el procesamiento de texto

using namespace std; // Evita escribir std antes de cada cout 

int main()
	{
		string name, lastNameP, lastNameM, age, sex, dateBirth, phoneNumber; // inicializacion de las variables que van a guardar los diferentes tipos de datos del usuario
		
		cout << "Introduzca sus Datos \n"; // output del menu
		cout<<"Introduzca su Nombre(s): "; // Indica al usuario el dato que debe ingresar 
		getline(cin, name, '\n'); // permite ingresar dos nombres separados por si el usuario tiene dos nombres
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su Apellido Paterno: " ; // Indica al usuario el dato que debe ingresar 
		cin >> lastNameP; // La variable guarda el apellido paterno del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su Apellido Materno: " ; // Indica al usuario el dato que debe ingresar 
		cin >> lastNameM;  // La variable guarda el apellido materno del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su edad: "; // Indica al usuario el dato que debe ingresar 
		cin >> age;  // La variable guarda la edad del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su sexo: "; // Indica al usuario el dato que debe ingresar 
		cin >> sex;  // La variable guarda el sexo del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su fecha de nacimiento (asi: aa/bb/cc): "; // Indica al usuario el dato que debe ingresar 
		cin >> dateBirth;  // La variable guarda la fecha de nacimiento del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Ingrese su numero de telefono (xxx-xxx-xxxx): "; // Indica al usuario el dato que debe ingresar 
		cin >> phoneNumber;  // La variable guarda el numero de telefono del usuario 
		
		system("cls"); //Metodo del lenguaje que limpia la pantalla 
		
		cout << "Datos del usuario\n";
		cout << "Su nombre es: "<<name<<" "<<lastNameP<<" "<<lastNameM<<endl; // concatena las 3 variables del nombre del usuario
		cout << "Su edad es: "<<age<<endl; // muestra el resultado de la variable age
		cout << "Su sexo es: "<<sex<<endl; // muestra el resultado de la variable sex
		cout << "Su fecha de nacimiento es: "<<dateBirth<<endl; // muestra el resultado de la variable dateBirth
		cout << "Su numero de telefono es: "<<phoneNumber; // muestra el resultado de la variable phoneNumber
	}