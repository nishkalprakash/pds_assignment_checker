#include<stdio.h>
#include<stdlib.h>
int main(){
	int max= -1;
	for(int i=1; i<=20; i++){ 
	   int a;
	   printf ("%d\n", a = rand()%100 + 1 );
	   if ( max < a ) max = a;
	}
   	printf("Maximum number is %d", max);
   	return 0;
}
