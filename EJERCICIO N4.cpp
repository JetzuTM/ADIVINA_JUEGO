
/*Realizado por Josber Hernández  29.554.820

Ejercicio N4:Dada la nota de matemática, estadística e informática de un grupo de 25 alumnos, realice un
programa que permita calcular y dar como salida lo siguiente: 
a) promedio de notas deinformática, b) cantidad de estudiantes aprobados en matemática, 
c) nota mayor de estadística y d) nota mayor de informática. */


#include<iostream>
using namespace std;

int main()
{
//Declaración de variables 	
    int a,c,x,p,b,n,ne,ni;
    n=0;
  
//Sentencia de ciclo For  
    for (int x=1; x<=25; x++ ) {
 
//Imprimir y leer datos del usuario	   	
    cout<<"\nAlumno N"<<x;
	cout<<"\nNota de informatica: ";

    cin>>a; //Leer nota de informática

    
    cout<<"Nota de matematica: ";
    cin>>b; //Leer nota de matemática
    
    cout<<"Nota de estadistica: ";
    cin>>c; //Leer nota de estadística

//Sentencia condicional IF
    if ( b>=56) {n= n + 1;}
    
    if ( c>ne) {ne=c;}
	
	if ( a>ni) {ni=a;}
	
//Declarar valor de p    
    p=p+a; 
}

//Imprimir Resultados en Pantalla
	cout<<"\nEl Promedio de la notas de informatica es: " <<p/25;
	cout<<"\nEstudiantes aprobados en matematica: " <<n;
	cout<<"\nNota Mayor de estadistica: " <<ne;
	cout<<"\nNota Mayor de informatica: " <<ni;
	return 0;
	}
