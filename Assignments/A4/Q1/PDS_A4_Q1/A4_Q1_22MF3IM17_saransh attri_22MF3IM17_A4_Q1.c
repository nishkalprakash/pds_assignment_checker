#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,num;
	a=1;
	printf("write the number\n");
	scanf("%d",&num);
	printf("input \t output\n");
	printf("%d \t",num);
    while(num>=a)
    {
    	if(num%a==0)
    		printf(" %d",a);
    	a++;
    }
	return 0;
}