#include<iostream>
using namespace std;


int res(int x,int cuadrado,int doble,int resta);


int main()
{
	cout<<"PROGRAMA NUMERO 91"<<endl;
	int num;
	int resta2;
	int cuadrado,doble,resta;
	cout<<"Digite un numero "<<endl;
	cin>>num;
	
	resta2=res(num,cuadrado,doble,resta);
	
	cout<<"la resta del doble  y el cuadrado de "<<num<<" es "<<resta2<<endl;
	return 0;
}

int res(int x,int cuadrado,int doble,int resta)
{
  cuadrado=x*x;
  doble=x*2;
  resta=cuadrado-doble;
return resta;
}
