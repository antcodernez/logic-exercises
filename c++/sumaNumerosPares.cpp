# include <iostream>

using namespace std;

int main ()
	{
		int i, suma, rango;
		
		suma = 0;
		
		cout << "Ingrese el limite para saber la suma de los numeros pares:";
		cin >> rango;
		
		for (i = 1; i < rango; i++)
			{
				if (i % 2 == 0)
					{
						cout << "\n Numero par: "<<i<<endl;
						suma += i;			
					}
			}
		cout << "El resultado de la suma es: "<<suma;
	}