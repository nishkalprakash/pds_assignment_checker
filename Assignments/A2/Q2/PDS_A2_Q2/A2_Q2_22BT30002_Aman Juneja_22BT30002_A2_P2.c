#include<stdio.h>

//declaration of three global variables
unsigned int a;
char c;
long double f;

int main(){
	scanf("%u %c %Lf",&a,&c,&f);
	
	printf("%2d ",a);
	printf("%d ",c); //printing ascii value of character 
	printf("%.3Le ",f); //printing the long double
	
	return 0;
}
