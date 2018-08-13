#include <iostream>
#include <windows.h>
#include<time.h>
using namespace std;

 int arregloAleatorios(int a[10]);
 void arregloOriginal(int c[10]);
 void arregloEnfuncion(int d[10]);
 void arregloBurbuja(int e[10]);
 void arregloSeleccion(int f[10]);
 void arregloInsercion(int h[10]);
  
 
int main(){
	
	int alea[10];
	int aleatorio;
	int orig[10]={1,2,3,4,5,6,7,8,9,10};
	int arre[10];
	int burb[10];
	int slecc[10];
	int inser[10];
	
 cout<<"PROGRAMA NUMERO 107"<<endl;
 cout<<endl;
 cout<<"seleccione la accion a realizar"<<endl;
 cout<<endl;
 cout<<"1. Numeros aleatorios"<<endl;
 cout<<"2. Copia del arreglo original"<<endl;
 cout<<"3. Muestra un arreglo x"<<endl;
 cout<<"4. Metodo burbuja"<<endl;
 cout<<"5. Metodo por seleccion"<<endl;
 cout<<"6. Metodo por Insercion"<<endl;
 int x;
 cout<<endl;
 cout<<"Eleccion-> ";cin>> x;
 cout<<endl;
 switch (x)
 {
 	case 1: arregloAleatorios(alea);
 	break;
 	case 2: arregloOriginal(orig);
 	break;
	case 3: arregloEnfuncion(arre); 
 	break;
 	case 4: arregloBurbuja(burb);
 	break;
 	case 5: arregloSeleccion(slecc);
 	break;
 	case 6: arregloInsercion(inser);
 	break;
 	default: cout<<"seleccione una operacion referenciada con un numero del 1-6"<<endl;
 }	
	return 0;
}
//ARREGLO ALEATORIO
int arregloAleatorios(int a[10])
{
	int i;
		srand(time(NULL)); 
		
		cout<<"Arreglo aleatorio"<<endl;
		cout<<endl;
		cout<<"Me muestra un arreglo con numeros aleatorios del 1-20"<<endl;
		cout<<endl;
		for(i=0;i<10;i++)
		{
		   a[i]=1+rand() % (21-1);
		   cout<<a[i]<<"  ";
		}
		cout<<endl;
		return a[i];
}
//ARREGLO COPIA
void arregloOriginal(int c[10])
{
	int i;
	cout<<"Arreglo copia del original"<<endl;
	cout<<endl;
	cout<<"Hace que la funcion copie al arreglo original"<<endl;
	cout<<endl;
	for(i=0;i<10;i++)
	{
       cout<<c[i]<<"  ";
	}
	
	cout<<endl;
}
//ARREGLO EN UNA FUNCION
 void arregloEnfuncion(int d[10])
 {
 	
 	int i;
    d[0]=10; d[1]=20; d[2]=30; d[3]=40; d[4]=60; d[5]=80; d[6]=90; d[7]=100; d[8]=110; d[9]=120;
		
		cout<<"Arreglo en funcion"<<endl;
		cout<<endl;
		cout<<"Simplemente me muestra un arreglo de 10 numeros enteros"<<endl;
		cout<<endl;
		for(i=0;i<10;i++)
		{
		
		   cout<<d[i]<<"  ";
		}
		cout<<endl;
 } 
 //METODO BURBUJA
 void arregloBurbuja(int e[10])
 {
 	int i,temp,j;
 	e[0]=-2; e[1]=-11; e[2]=1; e[3]=-3; e[4]=12; e[5]=9; e[6]=7; e[7]=30; e[8]=31; e[9]=47;
 	cout<<"Metodo burbuja"<<endl;
 	cout<<endl;
 	cout<<"Consiste en ciclar repetidamente a traves de la lista"<<endl;
 	cout<<"comparando elementos adyacentes de dos en dos."<<endl;
	cout<<"Si un elemento es mayor que el que está en la siguiente posicion se intercambian."<<endl;
 	for(i=1; i<10; i++)
	{
		for(j=0; j<10-i; j++)
		{
			if(e[j]>e[j+1])
			{
			    temp=e[j+1];
				e[j+1]=e[j];
				e[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<e[i]<<" ";
	}
	
	cout<<endl;
 }
 //ARREGLO POR SELECCION
 void arregloSeleccion(int f[10])
 {
 	int i,min,j,aux;
 	f[0]=-22; f[1]=-71; f[2]=32; f[3]=-1; f[4]=23; f[5]=9; f[6]=0; f[7]=10; f[8]=61; f[9]=-7;
 	cout<<"Metodo por seleccion"<<endl;
 	cout<<endl;
    cout<<"Este algoritmo tambien es sencillo. Consiste en lo siguiente: "<<endl;
    cout<<endl;

cout<<"1-Buscas el elemento mas pequeño de la lista."<<endl;
cout<<"2-Lo intercambias con el elemento ubicado en la primera posicion de la lista."<<endl;
cout<<"3-Buscas el segundo elemento mas chico de la lista."<<endl;
cout<<"4-Lo intercambias con el elemento que ocupa la segunda posicion en la lista."<<endl;
cout<<"5-Repites este proceso hasta que hayas ordenado toda la lista."<<endl; 
cout<<endl;
 	
 	for(i=0; i<10; i++)
	{
		min=i;
		for(j=i+1; j<10; j++)
		{
			if(f[j]<f[min])
			{
			    min=j;
			}
		}
		aux=f[i];
		f[i]=f[min];
		f[min]=aux;
	}
	for(i=0;i<10;i++)
	{
		cout<<f[i]<<" ";
	}
	
	cout<<endl;
 }
 //ARREGLO POR INSERCION
 void arregloInsercion(int h[10])
 {
 	int i,pos,j,aux;
 	h[0]=22; h[1]=71; h[2]=32; h[3]=1; h[4]=23; h[5]=0; h[6]=20; h[7]=10; h[8]=61; h[9]=7;
 	cout<<"Metodo por Inserccion"<<endl;
 	cout<<endl;
    cout<<"Este algoritmo tambien es bastante sencillo. Es como jugar cartas, yo lo hago deesta manera:"<<endl;
    cout<<endl;
	cout<<"tomo la primera y la coloco en mi mano. Luego tomo la segunda y la comparo con  la que tengo:"<<endl; 
	cout<<"si es mayor, la pongo a la derecha, y si es menor a la izquierda"<<endl;
    cout<<"Despues tomo la tercera y la comparo con las que tengo en la mano, desplazandolahasta que quede en su posicion final."<<endl;
	cout<<"Continuo haciendo esto, insertando cada carta en la posicion que le corresponde"<<endl;
	cout<<"hasta que las tengo todas en orden.  Bueno, pues ese es basicamente el mismo concepto."<<endl;
	cout<<endl;
 	
 	for(i=0; i<10; i++)
	{
		pos=i;
		aux=h[i];
		while((pos>0) && (h[pos-1]>aux))
		{
			h[pos]=h[pos-1];
			pos--;
		}
		
		h[pos]=aux;
		
	}
	for(i=0;i<10;i++)
	{
		cout<<h[i]<<" ";
	}
 }

 
 
 
 


