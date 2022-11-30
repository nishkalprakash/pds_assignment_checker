#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num,number,sum;
	printf("write the number\n");
	scanf("%d",&number);
	printf("%d\n",number);
        num=number;
	sum=0;
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("input \t output\n");
	printf("%d \t %d\n",number,sum);
	return 0;

}
