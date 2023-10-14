# include <iostream>

using namespace std;

int main ()
	{
		int usuarios; 
		float precioCamaron, precioArroz, cantidadArroz, cantidadCamaron, unidadCamaron, unidadArroz;
		float precioUnidadArroz, valorTotalArroz, precioUnidadCamaron, valorTotalCamaron;
		float cuentaTotal, precioUsuarios, plusvalia;
		
		unidadArroz = 125;
		unidadCamaron = 62.5;
		
		cout << "Ingrese el precio del kilo de arroz: ";
		cin >> precioArroz;
		
		cout << "Ingrese el precio del kilo de camaron: ";
		cin >> precioCamaron;
		
		cout << "Ingrese el numero de comensales : ";
		cin >> usuarios;
		
		system("cls");
		
		cantidadArroz = unidadArroz * usuarios;
		cantidadCamaron = unidadCamaron * usuarios;
		
		precioUnidadArroz = precioArroz / 1000;
		precioUnidadCamaron = precioCamaron / 1000;	
		
		valorTotalArroz = precioUnidadArroz * cantidadArroz;
		valorTotalCamaron = precioUnidadCamaron * cantidadCamaron;
		
		cuentaTotal = valorTotalCamaron + valorTotalArroz;
		plusvalia = (cuentaTotal * 10) / 100;
		precioUsuarios = cuentaTotal + plusvalia;
		
		cout <<cantidadArroz<<" gr"<<" de arroz para "<<usuarios<<" personas"<<endl;
		cout <<cantidadCamaron<<" gr"<<" de camaron para "<<usuarios<<" personas"<<endl;
		
		cout << valorTotalArroz<<"$ valor del arroz para "<<usuarios<<" personas "<<endl;
		cout << valorTotalCamaron<< "$ valor del camaron para "<<usuarios<<" personas "<<endl;
		
		cout << "Este platillo le va a costar al restaurante: "<<cuentaTotal<<" $"<<endl;
		cout << "A los usuarios se les debe vender en: "<<precioUsuarios<<" $ teniendo una plusvalia del 10%";
	}