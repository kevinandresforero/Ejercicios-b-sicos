#include<iostream>
using namespace std;

int main()
{
	cout<<"PROGRAMA NUMERO 25"<<endl;
	int x,y,z;
	
	cout<<"Introduzca tres numeros en orden creciente"<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	
	if(z>y && y>x)
	{
		cout<<"LOS TRES DIGITOS SON CRECIENTES"<<endl;
	}
	else
	{
		cout<<"NO SON NUMEROS CRECIENTES"<<endl;
	}
}
