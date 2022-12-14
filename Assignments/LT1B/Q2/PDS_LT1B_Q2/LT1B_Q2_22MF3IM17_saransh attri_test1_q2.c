/*test 1 set B
SARANSH ATTRI
22MF3IM17
SEC 14*/

#include<stdio.h>

int main()
{
	int num,a,b;
printf("enter the number\n");
scanf("%d",&num);

for(a=1;a<=num;a++)
{
	for(b=1;b<=a;b++)
	{
		printf("%d",a);
	}
	printf("\n");
}

}
