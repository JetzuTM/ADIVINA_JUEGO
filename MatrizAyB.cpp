/*Realizado por Josber Hernández 29.554.820

Realice un arreglo que lea dos matrices A y B,  cuadradas 3x3; que permita lo siguiente:
1) Sumar los elementos y guardar los resultados en la matriz Suma
2) Restar los elementos y guardar los resultados en la matriz Resta
3) Mostrar todas las matrices
Usar el gotoxi (en lo posible)*/


#include<iostream>
#include <windows.h>   
using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}
int main()
{
    int matriza[3][3], matrizb[3][3], matrizsuma[3][3], matrizresta[3][3],i,j;
    
   gotoxy(15,1);cout<<"Introduzca Datos de la Matriz A: "<<endl<<endl;
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    	
        cout<<" A ["<<i<<"] ["<<j<<"]: ";
    	cin>>matriza[i][j];
}
}
    cout<<endl;
   gotoxy(15,14);cout<<"Introduzca Datos de la Matriz B: "<<endl<<endl;
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    	
        cout<<" B ["<<i<<"] ["<<j<<"]: ";
    	cin>>matrizb[i][j];	
}
}
    cout<<endl;
gotoxy(15,27);cout<<"Los Resultados son los siguientes..."<<endl<<endl;
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    matrizsuma[i][j]= matriza[i][j]+matrizb[i][j];	
    cout<<"  Suma ["<<i<<"] ["<<j<<"]: "<<matrizsuma[i][j]<<endl;
	
}
}
    cout<<endl;
	for(i=0; i<3; i++){
    for(j=0; j<3; j++){
	matrizresta[i][j]= matriza[i][j]-matrizb[i][j];	
	cout<<" Resta ["<<i<<"] ["<<j<<"]: "<<matrizresta[i][j]<<endl;
}
}
    return 0;
}
