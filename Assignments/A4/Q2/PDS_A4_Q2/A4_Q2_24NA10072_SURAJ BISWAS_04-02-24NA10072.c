#include<stdio.h>

int main()
{
	int a,b,l1,l2,temp1,temp2;
	
	scanf("%d",&a);
	if(a<0)
	{
		printf("Program terminated");
		return 0;
	}
	printf("Largest number:%d",a);
	printf("Second largest number:value not entered");
	l1=a;
	
	while(a>=0)
	{
		scanf("%d",&b);
		if(b>l1)
		{
			temp=l1;
			l1=b;
			l2=temp;
		}
		else if(b>l2)
		{
			l2=b;
		}
		printf("largest number:%d",l1);
		printf("Second largest number:%d",l2);
		if(b<0)
		{
			printf("Program terminated");
			return 0;
		}
	}
	
	
	return 0;
}
