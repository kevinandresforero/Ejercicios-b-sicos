#include <iostream>
using namespace std;
int a,z,c,x,d,s,A[10],Z[10],H[10],J[10],F[10],SUMA[11],resta,multiplicacion,division,u,l,h,aca,com,j;//se declara el tamaño de los vectores y las variables 
int main () 
{
		cout<<"ingrese dos numeros enteros positivo de maximo 3 cifras a sumar"<<endl;
		cout<<endl;
		cout<<"Recordar que para restar debes poner primero el numero mayor"<<endl;
		cout<<"Numero 1 ->";cin>>a;
		cout<<"Numero 2 ->";cin>>z;
		resta=a-z;
		multiplicacion=a*z;
		division=a/z;
		cout<<endl;
		cout<<"NUMEROS EN BINARIO"<<endl;
		cout<<endl;
	
	
	    
		if (a>0 && a<1000)
		{
			for (int i=0;i<10;i++)
			{
				c=a%2;				
				A[i]=c;
				d=((a-c)/2);
				a=d;							
			}
		}	
	    else
		{				
			cout<<"ingrese un numero entero mayor a 0 y menor que 1000";
			cout<<endl;
		}
	cout<<endl;
	for (int i=9;i>=0;i--)
		cout<<A[i];
	if (z>0 && z<1000)
		{
			for (int i=0;i<10;i++)
			{
				x=z%2;				
				Z[i]=x;
				s=((z-x)/2);
				z=s;							
			}
		}	
	    else
		{						
			cout<<"ingrese un numero entero mayor a 0 y menor que 1000";
		}
		
		
		cout<<endl;
	for (int i=9;i>=0;i--)
		cout<<Z[i];
	cout<<endl;	
		
		if (resta>0)
		{
			for (int i=0;i<10;i++)
			{
				c=resta%2;				
				H[i]=c;
				d=((resta-c)/2);
				resta=d;							
			}
			
	
		cout<<endl;
		cout<<"***************"<<endl;
	    cout<<"RESTA"<<endl;
	    for (int i=9;i>=0;i--)
        {
       	cout<<H[i];
	    }
		}	
		
		else
		{
			cout<<"***************"<<endl;
			cout<<endl;
			cout<<"La resta es negativa y no se puede hacer la operacion"<<endl;
		}
			if (multiplicacion>0 && multiplicacion<1000)
		{
			for (int i=0;i<10;i++)
			{
				c=multiplicacion%2;				
				J[i]=c;
				d=((multiplicacion-c)/2);
				multiplicacion=d;							
			}
		}	
	  
	  
	   if (division>0 && division<1000)
		{
			for (int i=0;i<10;i++)
			{
				c=division%2;				
				F[i]=c;
				d=((division-c)/2);
				division=d;							
			}
		}	
		
       
	   cout<<endl;
	   cout<<"***************"<<endl;
	   cout<<"LA SUMA"<<endl;
		
	
	
	for (int i=0;i<11;i++)
	{
		if(aca!=0)	
		{
		aca=0;
		
		if(A[i]==0 && Z[i]==0)
			{
			SUMA[i]=1;
			
			}
		if(A[i]==1 && Z[i]==0)
			{
			SUMA[i]=0;
			aca++;
			}
		if(A[i]==0 && Z[i]==1)
			{
			SUMA[i]=0;
			aca++;
			}
		if(A[i]==1 && Z[i]==1)
			{
			SUMA[i]=1;
			aca++;
			}		
		}	
		else
		{
		if(A[i]==0 && Z[i]==0)
			{
			SUMA[i]=0;
			
			}
		if(A[i]==1 && Z[i]==0)
			{
			SUMA[i]=1;
			
			}
		if(A[i]==0 && Z[i]==1)
			{
			SUMA[i]=1;
			
			}
		if(A[i]==1 && Z[i]==1)
			{
			SUMA[i]=0;
			aca++;
			}
		}
	}
	for(int i=10;i>=0;i--)
		cout<<SUMA[i];
	

   cout<<endl;
   cout<<"***************"<<endl;
   cout<<"MULTIPLICACION"<<endl;
	for (int i=9;i>=0;i--)
       {
       	cout<<J[i];
	   }
	cout<<endl;
	cout<<"***************"<<endl;
	
	
	 cout<<"DIVISION"<<endl;
	for (int i=9;i>=0;i--)
       {
       	cout<<F[i];
	   }
	return 0;
	

}

