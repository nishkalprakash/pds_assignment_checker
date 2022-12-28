#include<stdio.h>	//this is an standerd input output header file
int main()
{
int *a, *b, max;
a = (int *) malloc (sizeof(int));
b = (int *) malloc (sizeof(int));
scanf(“%d%d”, a, b); /*a, b are already pointers */
max = FindMax(a, b);
printf(“The max of two numbers is %d\n”, max);

return 0;
}
	


