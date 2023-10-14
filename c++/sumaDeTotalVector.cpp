#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int suma, i, numeritos[5] = {34, 56, 2, 36, 4}; // declaración de la variable suma, i, y del vector llamado numeritos
		
		for (i = 0; i < 5; i ++) // declaración del ciclo for que realizara la suma de cada elemento del arreglo
			{
				suma += numeritos[i]; // aqui se ejecuta el algoritmo de la suma de cada valor del vector, comenzando en 0 hasta 5 
			}
		cout << "El resultado de la suma de tu vector es: "<<suma; // output de la variable suma concatenada con un string
	}