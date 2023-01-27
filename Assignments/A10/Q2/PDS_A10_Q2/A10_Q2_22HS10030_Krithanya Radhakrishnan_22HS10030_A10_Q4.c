#include <stdio.h>
int main()
{
int ar[5],a,i;
for(i=0;i<5;i++)
{
	printf("Enter element %d \n",i+1);
	scanf("%d",&ar[i]);
}
{
	if (ar[0]<ar[1] && ar[1]<ar[2] && ar[2]<ar[3] && ar[3]<ar[4])
	{
	printf("Ascending order");
	}
	else if (ar[0]>ar[1] && ar[1]>ar[2] && ar[2]>ar[3] && ar[3]>ar[4])
	{
	printf("descending order");
	}
	else
	{
	printf("not sorted");
	}
}
return 0;
}

