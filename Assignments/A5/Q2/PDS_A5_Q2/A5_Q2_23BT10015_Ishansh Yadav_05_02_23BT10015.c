//Roll No. - 23BT10015.c
//Name- Ishansh Yadav

#include<stdio.h>
#include<stdlib.h>

int main()
{ int num[50], n, i, k, z, product=1;
    printf("The number of integers to be generated:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
      {
	num[i]=10 + rand() % 40;
	printf("%d\n", num[i]);
      }
    for(i=0;i<n;i++)
      {
	for(k=0;k<n;k++)
	  {
	    for(z=0;z<n;z++)
	      { 
		if((num[i]+num[k]+num[z]==60)&&((((num[i]!=num[k])&&(num[k]!=num[z]))&&(num[i]!=num[z]))&&(product!=num[i]*num[k]*num[z])))
	      {printf("Triplet:%d %d %d\n", num[i], num[k], num[z]);
	        product=num[i]*num[k]*num[z];}
	  }
	  }
      }
    return 0;
}
