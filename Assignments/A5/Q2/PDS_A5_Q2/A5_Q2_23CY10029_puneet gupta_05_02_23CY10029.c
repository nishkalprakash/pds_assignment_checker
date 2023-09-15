#include <stdio.h>

int main ()

	{ int a[50],b,i,j,k;  

printf("enter the num such random number to be generated (maximun 50)");
 scanf("%d",&b);
	for(i=0;i<b;i++)
	{a[i] = rand()%41+10;
        
	printf("random number is %d \n",a[i]);
        
	}
for(i=0;i<b;i++)
{
for(j=1;j<b;j++)
{
for(k=2;k<b;k++)
if(a[i]+a[j]+a[k]==60)
     { printf(" location of the value stored (%d,%d,%d)\n",i,j,k);
      printf("  random number whose sum is 60( %d,%d,%d)\n",a[i],a[j],a[k]);}}

}
  	return 0;
}
