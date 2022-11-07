/*Realizado por Jesus Cardenas 29.857.641 y Mario Araque 27.630.537

Elaborar dos arreglos a y b los cuales tendrán una dimensión de 10.
usted debe hacer lo siguiente:
1). Llenar los dos arreglos solicitando valores al usuario.
2). Obtener un tercer arreglo con la suma de esos dos arreglos previos
3). Obtener obtener la multiplicación de los arreglos cuyos elementos llenó el usuario
4). Obtener el promedio de cada uno de los arreglos cuyos elementos lleno el usuario
5). Obtener del primer arreglo introducido por el usuario el menor de los elementos 
6). Obtener del segundo arreglo cuyos elementos lleno el usuario, el mayor de los elementos 
7). Muestre todo en pantalla 
*/

#include<iostream>
using namespace std;

int main()
{
    int arrayA[9], arrayB[9], arraySuma[9], arrayMulti[9], c;
    int promedio=0, MenorA=900, MayorB=0 ;
	
	
    for(c=0; c<=9; c++){
        cout<<"Ingrese un Valor para el Arreglo A:"<<endl;
        cin>>arrayA[c];
        
        cout<<"Ingrese un Valor para el Arreglo B:"<<endl;
        cin>>arrayB[c];
        
        arraySuma[c]=arrayA[c]+arrayB[c];
        cout<<"Arreglo A+B= "<<arraySuma[c]<<endl;
        arrayMulti[c]=arrayA[c]*arrayB[c];
        cout<<"Arreglo A*B= "<<arrayMulti[c]<<endl<<endl;
        
        promedio= promedio+arraySuma[c];
        
        if (arrayA[c]<MenorA ) {MenorA=arrayA[c];}
        if (arrayB[c]>MayorB ) {MayorB=arrayB[c];}   
     }
     
     cout<<"Suma Total de los Arreglos A y B: "<<promedio<<endl;
     cout<<"El Promedio de los Arreglos A y B es..."<<promedio/10<<endl;
     cout<<"El menor de los elementos de A es..."<<MenorA<<endl;
     cout<<"El Mayor de los elementos de B es..."<<MayorB<<endl;

    return 0;
}
		  
