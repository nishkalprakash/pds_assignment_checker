#include<stdio.h>	//this is an standerd input output header file

int main()

{
int a, b, max;
scanf(“%d%d”, &a, &b);
max = FindMax(&a, &b); /* pass pointers */
printf(“The max of two numbers is %d\n”, max);

return 0;

}
