#include<iostream>
using namespace std;

int main()
{
	cout<<"PROGRAMA NUMERO 59"<<endl;
	int i;
	int A[5];
	int suma=0;
	int media;
	cout<<endl;
 
 cout<<"Porfavor ingrese 5 numeros"<<endl;

  for(int i=0;i<5;i++)
  {
  	cout<<endl;
  	cout<<"Numero->";cin>>A[i];
  	suma=suma+A[i];
  }
	media=suma/5;
	cout<<endl;


  cout<<"La media de los numeros correspondientes es: "<<media<<endl;
	
  system("PAUSE");
  return 0;
	

}
	 
