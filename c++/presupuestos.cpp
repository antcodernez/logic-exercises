#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		float presupuesto, articuloCosto, gasto, i; // Se inicializaron las variables
		
		cout << "Ingrese su presupuesto para gastar: "; // le dice al usuario que ingrese su presupuesto a gastar
		cin >> presupuesto; // se declara la variable presupuesto
		i = 1; // i sera el numero del articulo 
		gasto = 0; // gasto es el gassto de los productos
		do // ciclo do while que se ejecutará una vez y despues se va a hacer una validacion
			{
				cout << "Su presupesto actual es de: "<<presupuesto<<endl; // muestra el valor actual del presupuesto
				cout << "Su gasto actual es de: "<<gasto<<endl; // muestra el valor actual del gasto
				cout << "Ingrese el precio del articulo "<<i<<": "; // indica al usuario que ingrese el precio se su articulo numero n
				cin >> articuloCosto; // articuloCosto guarda el costo de los articulos en cuestion 
				 
				gasto += articuloCosto; // el gasto es igual al gasto mas el costo del articulo
				
				presupuesto -= gasto; // presupuesto es igual al presupuesto menos el gasto
				
				i += 1; // cada vuelta al bucle se le suma 1 a i 
						
				system("cls"); // metodo del lenguaje que limpia la pantalla			
			}
		while(presupuesto >= gasto); // valida si el presupuesto es mayor o igual al gasto
		
		cout << "Excedio el presupuesto, compro de mas :c \n"; // output de la condicion
		cout << "Debe pagar :"<<gasto; // muestra la cantidad a pagar 
	}