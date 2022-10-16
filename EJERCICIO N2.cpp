
/*Realizado por Mario Araque 27.630.537
Ejercicio N2: Calcular la cantidad de segundos que están incluidos en el número de horas, minutos y segundos 
ingresados por el usuario.*/




#include<iostream>
using namespace std;

int main()
{
//Declaración de variables	
    int horas,minutos,segundos;

//Imprimir y leer datos del usuario
    cout<<"Ingresar las cantidad de segundos";
    cin>>segundos;
    
//Formula para calcular segundos
    horas=segundos/3600;
    segundos=segundos%3600;  
    minutos=segundos/60;
    segundos=segundos%60;
    
//Imprimir Resultados en Pantalla	
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;
    
    
    return 0;
}
