#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	int n, h;
	float vh, s;
	
	setlocale(LC_ALL, "Portuguese");

	scanf("%d",&n);
	scanf("%d",&h);
	scanf("%f",&vh);
	
	s = h * vh;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f \n",n,s);

	
	
	return 0;
}
