//Roll no:<23MT30029>
//Name:<Tanaya Moghe>
//Set:<Set 1 Q3>

#include <stdio.h>
int main()
{
	int i,j=1,row,s,n;
	printf("Enter scale factor:\n");
	scanf("%d", &s);
	printf("Enter number of lines:\n");
	scanf("%d", &n);
	j=s;
	for(row=0; row<n; row++)
	{
		for(i=0; i<=row; i++)
		{		
			printf("%d", j);
if(j<s+3) j++;
else j=1;
			
		}
			printf("\n");	
	}	
return 0;
}


