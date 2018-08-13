#include<iostream>
#include<math.h>
#include <ctime>
# include <stdlib.h>

using namespace std;
// ejercicio 97

const int TAM=5;
struct alumno{
	char nombre[30];
	float parcial[3];
	float final;
};
alumno alumnos[TAM];

void leer_nombre(alumno*a){
	cout<<"ingrese el nombre del alumno:\t";
	cin.getline((*a).nombre,30);
}
void leer_parciales(alumno*a){
	for(int i=0;i<3;i++){
		cout<<"ingrese la nota del parcial "<<i+1<<":\t";
		cin>>(*a).parcial[i];
	}
}
void leer_final(alumno*a){
	(*a).final=0;
	for(int i=0;i<3;i++){
		(*a).final+=(*a).parcial[i];
	}
	(*a).final/=3;
}
int main() {
	system("clear");
	for( int i=0;i<TAM;i++){
		leer_nombre(&alumnos[i]);
	}
	for( int i=0;i<TAM;i++){
		cout<<"para el alumno "<<alumnos[i].nombre<<endl;
		leer_parciales(&alumnos[i]);
		leer_final(&alumnos[i]);
	}
	cout<<endl<<endl;
	for( int i=0;i<TAM;i++){
		if(alumnos[i].final>=3.5){
			cout<<alumnos[i].nombre<<" es apto"<<endl;
		}else{
			cout<<alumnos[i].nombre<<" no es apto"<<endl;
		}
		
	}
	return 0;
}


