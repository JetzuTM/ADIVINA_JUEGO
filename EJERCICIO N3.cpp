
/*Realizado por Jesus Cardenas 29.857.641

Ejercicio N3: Hacer un programa que pida por pantalla una temperatura en grados Celsius, muestre un menú 
para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por pantalla:
a. Celsius a Fahrenheit: F = (9*C)/5 + 32;
b. Celsius a Kelvin: K = C + 273.15; */



#include<iostream>
using namespace std;

int main()
{
//Declaración de variables
    int temperatura,opc,celcius;
    float f,k;
    const float KELVIN = 273.15;
 
//Sentencia condicinal Do-While
    do {
    	
    	//Orden
        cout << "Ingrese temperatura >= 0: ";
        cin >> temperatura;
        if (temperatura < 0)
            cout << "Error, la temperatura debe ser >= 0" << endl;
            
    //Condición
    } while (temperatura < 0);
    
    do {
    	//Orden
        cout << "\n1. Convertir de grados Celcuis a Kelvin" << endl;
        cout << "2. Convertir de grados Celcuis a Fahrenheit" << endl;
        cout << "3. Salir";
        cout << endl << "Digite una opcion: ";
        cin >>opc;
 
 
 //Sentencia condicinal Swicth
        switch (opc) {
        	
        	//Transformar valor dado en grados kelvin
            case 1:	
                k = temperatura + KELVIN;
                cout << "Temperatura en kelvin = " << k << endl;
            break;
            
            //Transformar valor dado en grados Fahrenheit
            case 2:
                f = (temperatura * 9 / 5) + 32;
                cout << "Temperatura en Fahrenheit = " << f << endl;
            break;
        }
        
       //Condición
       } while (opc < 3);
    
    return 0;
}
