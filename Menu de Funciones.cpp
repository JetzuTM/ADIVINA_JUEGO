/* Realizado por Josber Hernández  C.I: 29.554.820

Realice un programa en c++ dónde desarrolle las siguientes funciones concerniente a las calificaciones de 20 estudiantes de una materia:
Debe elaborar un menú con las siguientes opciones:
1-Solicitud de las 20 notas de los estudiantes
2-Promedio de las 20 notas de los estudiantes
3-Cantidad de estudiantes aprobados
4-Cantidad de estudiantes reprobados
5-Nota más baja
6-Nota más alta
Se pide: 
Elaboré funciones para cada opción del menú.
Utilice un arreglo para almacenar las 20 notas*/

#include<iostream>
using namespace std;
int pedirDatos(int x[], int y);
float funpromedio(int x[],int y);
int funaprobados (int x[],int y);
int funreprobados (int x[],int y);
int funnotaAlta (int x[],int y);
int funnotabaja (int x[],int y);

int main(){
	int opc, estudiante[19];
	cout<<"Programa que muestra las calificaciones de 20 estudiantes de una materia: \n  ";
	cout<<"// INGRESE LA OPCION N1 PRIMERO PARA EVITAR ERROES // ";
	while (1==1){
	
	cout<<"\n\nSeleccione Una Opcion:\n \n ";
	cout<<"1-Solicitud de notas \n";
	cout<<" 2-Promedio de notas\n";
	cout<<" 3-Estudiantes aprobados\n";
	cout<<" 4-Estudiantes reprobados\n";
	cout<<" 5-Nota mas baja\n";
	cout<<" 6-Nota mas alta\n",
	cout<<" 7-Salir\n\n";
	cin>>opc;
	
	switch (opc) {
 
            case 1:	opc==1;
            pedirDatos(estudiante, 19);
            break;
   
            case 2:	opc==2;
            cout<<"\n\n//El Promedio es: "<<funpromedio(estudiante,19)<<"//"; 
            break;
           
            case 3:	opc==3;
            cout<<"\n\n//Estudiantes Aprobados: "<<funaprobados(estudiante,19)<<"//";   
            break;
            
            case 4:	opc==4;
            cout<<"\n\n//Estudiantes Reprobados: "<<funreprobados(estudiante,19)<<"//";   
            break; 
            
            case 5:	opc==5;
            cout<<"\n\//Nota Mas baja: "<<funnotabaja(estudiante,19)<<"//";   
            break; 
            
            case 6:	opc==6;
            cout<<"\n\n//Nota Mas Alta: "<<funnotaAlta(estudiante,19)<<"//";   
            break; 
            
            case 7: opc==7;
            cout<<"\n//Ha Salido con Satisfactoriamente//";
            exit(0);
            break;
            
            default:
			cout<<"\n//ERROR, Seleccione una opcion valida//";
			break;			
        }		
		}
}
int pedirDatos(int x[], int y){
	
	for(int i=0; i<=y; i++){
    cout<<"\n Ingrese la Nota N"<<i+1<<": ";
    cin>>x[i]; }
    cout<<":\n";
}

float funpromedio(int x[],int y){
    float suma=0, promedio=0;
	for(int i=0; i<=y; i++){
    suma = suma + x[i];}
promedio=suma/y;
return promedio;

}

int funaprobados (int x[],int y){
	int aprobado=0;
	for(int i=0; i<=y; i++){
	if (x[i]>=56){aprobado= aprobado+1;}

} return aprobado;	
}

int funreprobados (int x[],int y){	
	int reprobado=0;
	for(int i=0; i<=y; i++){
	if (x[i]<56){reprobado= reprobado+1;}
	
}return reprobado;	
}

int funnotaAlta (int x[],int y){
	
	int notaAlta=0;
	for(int i=0; i<=y; i++){
	if (x[i]>notaAlta){notaAlta= x[i];}

}return notaAlta;	
}

int funnotabaja (int x[],int y){
	int notabaja=100;
	for(int i=0; i<=y; i++){
	if (x[i]<notabaja){notabaja= x[i];}

}return notabaja;	

return 0;	
}
