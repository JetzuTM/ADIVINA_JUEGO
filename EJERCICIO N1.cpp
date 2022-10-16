
/*Realizado por Mario Araque 27.630.537
Ejercicio N1: Escribir un programa que lea un número y muestre en pantalla el valor de su factorial.*/


#include <iostream>
using namespace std;

int main (){

//Declaración de variables	
	int N, fact=1;
	
//Imprimir y leer datos del usuario	
	cout<<"Digite un numero: "; 
	cin>>N;

//Sentencia de ciclo For	
	for(int i=1; i<=N; i++){
	fact=fact * i;
	}

//Imprimir Resultados en Pantalla	
	cout<<"\n El factorial es: "<<fact;
	return 0;
}


