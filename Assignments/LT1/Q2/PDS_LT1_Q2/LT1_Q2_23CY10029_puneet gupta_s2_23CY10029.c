#include <stdio.h>
#include <stdlib.h>
int main ()
{
	 int a[5000],b,i,j,k,low,high;
	 int group[11] = {0};
	float f;
	 printf(" how many random numdom number to generated between 0 to 100\n");
	scanf("%d",&b);
	for(i=0;i<b;i++)
        { a[i]=rand()%100;

	++group[a[i]/10] ;
	printf(" %d",a[i]);
}
	printf("\n");
	for(j=0;j<10;j++)
   {low = 10*j;
	high = low+9;
	f=((group[j]*100)/b);
      printf(" %d-%d : %12.1f\n",low, high,f);}

return 0;

}
