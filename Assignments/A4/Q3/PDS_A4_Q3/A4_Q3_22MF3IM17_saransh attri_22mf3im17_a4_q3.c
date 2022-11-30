#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,num,revnum;
	printf("write the non neg number(less than 11 digs)\n");
	scanf("%d",&num);
	revnum=0;
	while((num>9999999999)||(num<0))
	{
		printf("input not in range write correct num\n");
		scanf("%d",&num);
	}
	while(num!=0)
	{
		revnum=(num%10);
		num=num/10;
		switch(revnum)
		{
			case 1:
			printf(" one");
			break;
			case 2:
			printf(" two ");
			break;
			case 3:
			printf(" three ");
			break;
			case 4:
			printf(" four ");
			break;
			case 5:
			printf(" five ");
			break;
			case 6:
			printf(" six ");
			break;
			case 7:
			printf(" seven ");
			break;
			case 8:
			printf(" eight ");
			break;
			case 9:
			printf(" nine ");
			break;
			case 0:
			printf(" zero ");
		}
	}

	
	return 0;
}
