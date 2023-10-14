#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto
using namespace std; // evita escribir std, en cada cout

int main ()
	{
		float precio1, precio2, precio3, totalFinal, total1, total2, total3, pago, cambio; // inicializacion de las variables
		int cantidad1, cantidad2, cantidad3; // inicializacion de las variables
		string date, nameUser, employee, name1, name2, name3; // inicializacion de las variables
		
		cout << "\n Bienvenido a tu supermercado \n"; // output del menu
		cout << "Identifiquese empleado: "; // le indica al empleado que se identifique
		cin >> employee; // guarda el nombre del empleado
		
		system("cls"); // metodo del lenguaje, limpia la pantalla
		
		cout << "Nombre del cliente: "; // indica al empleado que ingrese el nombre del cliente
		cin >> nameUser; // guarda el nombre del cliente
		
		system("cls"); // metodo del lenguaje, limpia la pantalla
		
		cout << "Ingrese la fecha (mm/nn/aa): "; // indica que guarde la fecha
		cin >> date; // guarda la fecha
		
		system("cls"); // metodo del lenguaje, limpia la pantalla
	
		cout << "Ingrese el nombre de su primer producto: "; // indica que guarde el nombre del producto
		cin >> name1;	// guarda el nombre del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese el precio por unidad de "<<name1<<" :"; // indica que ingrese el precio por unidad
		cin >> precio1; // guarda el precio por unidad del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese la canditad de "<<name1<<"que desea comprar: "; // indica que ingrese la cantidad a comprar
		cin >> cantidad1; // guarda la cantidad del producto a comprar
	
		system("cls"); // metodo del lenguaje, limpia la pantalla	
	
		cout << "Ingrese el nombre de su segundo producto: "; // indica que guarde el nombre del producto
		cin >> name2; // guarda el nombre del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese el precio por unidad de "<<name2<<" :"; // indica que ingrese el precio por unidad
		cin >> precio2; // guarda el precio por unidad del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese la canditad de "<<name2<<"que desea comprar: "; // indica que ingrese la cantidad a comprar
		cin >> cantidad2; // guarda la cantidad del producto a comprar
	
		system("cls");
		
		cout << "Ingrese el nombre de su tercer producto: "; // indica que guarde el nombre del producto
		cin >> name3; // guarda el nombre del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese el precio por unidad de "<<name3<<" :"; // indica que ingrese el precio por unidad
		cin >> precio3; // guarda el precio por unidad del producto
		system("cls"); // metodo del lenguaje, limpia la pantalla
		cout << "Ingrese la canditad de "<<name3<<"que desea comprar: "; // indica que ingrese la cantidad a comprar
		cin >> cantidad3; // guarda la cantidad del producto a comprar
	
		system("cls"); // metodo del lenguaje, limpia la pantalla
		
		total1 = cantidad1 * precio1; // la variable total guarda la multiplicacion de la cantidad por el precio del producto
		total2 = cantidad2 * precio2;// la variable total guarda la multiplicacion de la cantidad por el precio del producto
		total3 = cantidad3 * precio3;// la variable total guarda la multiplicacion de la cantidad por el precio del producto
		totalFinal = total1 + total2 + total3; // la variable totalFinal guarda la suma del total de los 3 productos
		
		do // un ciclo do while por si el usuario ingresa un valor inferior al que debe pagar 
		{
			cout << "Su cantidad a pagar es de: "<<totalFinal<<endl; // muestra la cantidad a pagar
			cout << "Ingrese su pago: "; //  indica que debe ingresar su pago
			cin >> pago; // guarda la variable pago
			
			if (pago > totalFinal) // valida si el pago es mayor a la cantidad total a pagar 
			{
				cambio = pago - totalFinal; // la variable cambio guarda la diferencia entre el pago y el total a pagar
				cout << "\n Ticket de compra \n"; // output del ticket
				cout << "\n Fecha: "<<date<<endl; // muestra la fecha
				cout << "\n Cliente: "<<nameUser<<endl; // muestra el nombre del cliente
				cout << "\n Atendido por: "<<employee<<endl; // muestra el nombre del empleado
				cout << "\n Producto: "<<name1<<" Cantidad: "<<cantidad1<<" total: "<<total1<<endl; // muestra el nombre del producto, su cantidad y su total
				cout << "\n Producto: "<<name2<<" Cantidad: "<<cantidad2<<" total: "<<total2<<endl; // muestra el nombre del producto, su cantidad y su total
				cout << "\n Producto: "<<name3<<" Cantidad: "<<cantidad3<<" total: "<<total3<<endl; // muestra el nombre del producto, su cantidad y su total
				cout << "\n Pago: "<<pago<<endl; // muestra el pago hecho
				cout << "\n Total :"<<totalFinal<<endl; // muestra el total a pagar
				cout << "\n Su cambio: "<<cambio; // muestra el cambio
			}
			
			else if(pago < totalFinal) // valida si el pago es menor al total a pagar
				{
					totalFinal -= pago; // el total a pagar se le resta lo previamente agregado
					cout << "Ingreso su pago incompleto por favor ingreselo completo "; // muestra que el pago esta incompleto
				}
		}		
		while(pago < totalFinal); // valida que el pago sea menor al total a pagar
	}