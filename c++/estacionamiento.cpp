#include <iostream>
#include <windows.h>

using namespace std;

int main()
	{
		int horaEntrada, horaSalida, minutoEntrada, minutoSalida, horaTotal, minutoTotal, moduloMinuto, divisionMinuto, minutoACondicional;
		char pin;
				
		cout << "El mejor parkeadero del mundo :D \n";
		cout << "Funciona en un formato de 24 hrs \n";
		cout << "Ingrese su hora de entrada en el siguiente formato 00:00 : ";
		cin >> horaEntrada>>pin>>minutoEntrada;
		
		system("cls");
		
		cout << "Ingrese su hora de salida en el siguiente formato 00:00 : ";
		cin >> horaSalida>>pin>>minutoSalida;
		
		if (minutoSalida < minutoEntrada)
			{
				horaTotal = horaSalida - horaEntrada - 1;
				minutoEntrada = 60 - minutoEntrada;
				minutoTotal = minutoEntrada + minutoSalida;				
			}
		else if (minutoSalida == minutoEntrada)
			{
				horaTotal = horaSalida - horaEntrada;
				minutoTotal = minutoSalida;
			}
		else if (minutoSalida > minutoEntrada)
			{
				horaTotal = horaSalida - horaEntrada - 1;
				minutoEntrada = 60 - minutoEntrada;
				minutoACondicional = minutoEntrada + minutoSalida;
				
				if (minutoACondicional > 60)
					{
						moduloMinuto = minutoACondicional % 60;
						divisionMinuto = minutoTotal / 60;
						
						horaTotal = horaTotal + divisionMinuto;
						minutoTotal = moduloMinuto;
					}
			}
			
		cout<< "Tu estacancia fue de: "<<horaTotal<<":"<<minutoTotal;
	}