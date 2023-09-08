#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a=0,i, max=0;  
	printf("enter the variable between 1 -100  \n");
        for( i=1;i<=20;i++){
        a = rand()%100+1;
        printf("enter the number  %d \n" ,a);
        if (max<a)
         max=a;
        }
	printf("max num is  %d \n",max);
        return 0;

}
