
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <time.h>
 
using namespace std;
 
void inicio();
void primer_error();
void segundo_error();
void tercer_error();
void cuarto_error();
void quinto_error();
void jugar();
void rellenar(string n);
void intentos(int intento);
 

int main(){
	int opcion;
	srand(time(NULL));
	do{
		cout << "\n1. JUGAR" << endl;
		cout << "2. SALIR\n" << endl;
		cin >> opcion;
		system("cls");
		switch(opcion){
			case 1: jugar(); break;
			case 2: cout << "HASTA LUEGO" << endl; break;
			default: cout << "OPCION INCORRECTA, Intente de nuevo" << endl;
		}
	}while(opcion!=2);
	system("pause");
	return 0;
}
 
void inicio()
{
	cout << "**********" << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;	
}
 
void primer_error()
{
	system("cls");
	cout << "**********" << endl;
	cout << "*        |  " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;	
}
 
void segundo_error()
{
	system("cls");
	cout << "**********" << endl;
	cout << "*        |  " << endl;
	cout << "*      (x-x)" << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;	
}
 
void tercer_error()
{
	system("cls");
	cout << "**********" << endl;
	cout << "*        |  " << endl;
	cout << "*      (x-x)" << endl;
	cout << "*       /|\\" << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;
	cout << "*           " << endl;	
}
 
void cuarto_error()
{
	system("cls");
	cout << "**********" << endl;
	cout << "*        |  " << endl;
	cout << "*      (x-x)" << endl;
	cout << "*       /|\\" << endl;
	cout << "*        -  " << endl;
	cout << "*       / \\" << endl;
	cout << "*           " << endl;	
}

void quinto_error()
{
	system("cls");
	cout << "**********   " << endl;
	cout << "*        |   " << endl;
	cout << "*      (x-x)" << endl;
	cout << "*       /|\\ " << endl;
	cout << "*        -   " << endl;
	cout << "*       / \\ " << endl;
	cout << "*            " << endl;
	cout << "     PERDISTE" << endl;	
}
 
void jugar()
{
	int aleatorio;
	string a="ARBOL", b="PIZZAA", c="MONOPATIN";
   	aleatorio=rand()%3+1;
	switch(aleatorio){
		case 1:cout<<"\n\nPista: Bebe agua con los pies.\n\n", rellenar(a); break;
		case 2:cout<<"\nPista: Cuadro de envase, Base Redonda, Porcion Triangular.\n\n", rellenar(b); break;
		case 3:cout<<"\nPista: Soy mono pero no estoy en la selva tambien soy patin pero no pato.\n\n", rellenar(c); break;	
	}	
}
 
void rellenar(string n)
{
	int contador=0, aux=0, aux2, MAX=n.length(),aleatorio;
	char letra, contenedor[MAX];
	for(int i=0;i<MAX;i++){
		contenedor[i]='_';
		
	}
	inicio();
	cout << endl;
	cout << "Ingrese letra: ";
	cout << endl;
	while(contador<5){
		aux2=0;
		
		
		for(int j=0;j<MAX;j++){
		cout << contenedor[j] << " ";
		}
		
		
		
		cin >> letra;
		for(int k=0;k<MAX;k++){
			if(letra==n[k] && contenedor[k]=='_'){
				contenedor[k]=letra;
				aux++;
				break;
			}
			else{
				aux2++;
			}
		}
		if(aux==MAX){
			cout << "GANASTE! La palabra oculta es: " << n << endl;
			break;
		}
		if(aux2==MAX){
			contador++;
			intentos(contador);
		}
	}
}
 
void intentos(int intento)
{
	switch(intento){
		case 1: primer_error(); break;
		case 2: segundo_error(); break;
		case 3: tercer_error(); break;
		case 4: cuarto_error(); break;
		case 5: quinto_error(); break;
	}
}
