
/*Realizado por Josber Hern�ndez  29.554.820

Ejercicio N4:Dada la nota de matem�tica, estad�stica e inform�tica de un grupo de 25 alumnos, realice un
programa que permita calcular y dar como salida lo siguiente: 
a) promedio de notas deinform�tica, b) cantidad de estudiantes aprobados en matem�tica, 
c) nota mayor de estad�stica y d) nota mayor de inform�tica. */


#include<iostream>
using namespace std;

int main()
{
//Declaraci�n de variables 	
    int a,c,x,p,b,n,ne,ni;
    n=0;
  
//Sentencia de ciclo For  
    for (int x=1; x<=25; x++ ) {
 
//Imprimir y leer datos del usuario	   	
    cout<<"\nAlumno N"<<x;
	cout<<"\nNota de informatica: ";

    cin>>a; //Leer nota de inform�tica

    
    cout<<"Nota de matematica: ";
    cin>>b; //Leer nota de matem�tica
    
    cout<<"Nota de estadistica: ";
    cin>>c; //Leer nota de estad�stica

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
