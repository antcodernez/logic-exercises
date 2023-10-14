#include <iostream> // Parte de la biblioteca standar de c++, para procesar texto

using namespace std; // evita escribir std, en cada cout

int main ()
	{
		int numeros [7] = {3,4,6,7,3,56,4}; // Se declaro un array con 7 elementos de longitud, que posee datos de tipo entero
		float calificaciones [6] = {7.9, 4.6, 6.7, 9.1, 10, 9.2}; // Se declaro un array con 6 elementos de longitud, que posee datos de tipo flotante
		char vocales [5] = {'A', 'E', 'I', 'O', 'U'}; // Se declaro un array con 5 elementos de longitud, que posee datos de tipo char
		
		cout << "Elemento del array numeros: "<<numeros[3]<<endl; // Se imprimio el dato con el indice numero 3, del array numeros
		cout << "Elemento del array calificaciones: "<<calificaciones[5]<<endl; // Se imprimio el dato con el indice numero 5, del array Calificaciones
		cout << "Elemento del array vocales: "<<vocales[4]<<endl; // Se imprimio el dato con el indice numero 4, del array vocales
	}