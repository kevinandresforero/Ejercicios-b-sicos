#include <stdio.h>
#include <stdlib.h>
using namespace std;
FILE *f;
int main(){
	f= fopen("h.txt","wt");
	if(f==NULL){
		printf("No sirve");
		return (1);
	}
	else{
		fprintf(f,"Hola Mundo");
	}
	system ("PAUSE");
	return 0;
}	
