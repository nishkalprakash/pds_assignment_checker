#include <stdio.h>
int main()
{
printf("\nenter number of elements in array:");
scanf("%d",&n);
printf("\nenter number of bins:");
scanf("%d",&t);
for(i=0;i<n;i++)
scanf("%d",&a[i]);	//array input


	min=a[0];
	for(j=0;j<n;j++)
	{
	if (a[j]<min)
	min=a[j];
	}
	
	
	max=a[0];
	for(k=0;k<n;k++)
	{
	if (a[k]>max)
	max=a[k];
	}

for(a=1;a<=t;a++)
{
}
return 0;
}

