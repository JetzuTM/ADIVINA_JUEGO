/*Elaborar dos arreglos a y b los cuales tendrán una dimensión de 10.
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
    int arrayA[10], arrayB[10], arraySuma[10], c;
	
	
    for(c=0; c<=10; c++){
        cout<<"Ingrese un numero para el Arreglo A:"<<endl;
        cin>>arrayA[c];
        
        cout<<"Ingrese un numero para el Arreglo B:"<<endl;
        cin>>arrayB[c];
        
        arraySuma[c]=arrayA[c]+arrayB[c];
        cout<<"Arreglo A+B="<<arraySuma[c]<<endl<<endl;
        
     }
     
    return 0;
}
		       
        
        
        
        
        
        
        
        
        
        
   /*     
        
        for(j=0; j<=3; j++){
            cin>>arreglo[i][j];
        }
    }
    
    for(i=0; i<=2; i++){
        cout<<"Los elementos de la fila "<<i<<endl;
        for(j=0; j<=3; j++){
            cout<<"elemento "<<arreglo[i][j]<<endl;
        }
    }
    
    return 0;
}
*/
