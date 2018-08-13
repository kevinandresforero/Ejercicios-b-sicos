#include<iostream>
using namespace std;


int fact(int x);


int main()
{
	cout<<"PROGRAMA NUMERO 89"<<endl;
	int num;
	int factorial;
	cout<<"Digite el numero para hallar su factorial "<<endl;
	cin>>num;
	
	factorial=fact(num);
	
	cout<<"El numero factorial de "<<num<<" es "<<factorial<<endl;
	return 0;
}

int fact(int x)
{
int fact=1;
int i;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
return fact;
}
