#include<stdio.h>

int main (){
	
	int a, b, r, aux;
	
	scanf("%d",&a);	
	scanf("%d",&b);	
	
	if(a<b){
	aux = a;
	a = b;
	b = aux;
}
	
	while(a%b>0){
	
	aux=a%b;
	a=b;
	b=aux;
	
	}	


	printf("%d",b);
	
	return 0;
	
	}
