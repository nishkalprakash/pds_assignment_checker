
/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:4
Discription :To find the factors of numbers

*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n>0)
		{
		for(i=1;i<=n;i++)
			{
				if(n%i==0)
					printf("%d\n",i);
			}
		}

	else
	 {
		if(n==0)
			printf("%d",n);
		else
			n=n*(-1);
			for(i=1;i<=n;i++)
				{
					if(n%i==0)
						printf("%d\n",i);
				}
	   }
	return 0;
}
