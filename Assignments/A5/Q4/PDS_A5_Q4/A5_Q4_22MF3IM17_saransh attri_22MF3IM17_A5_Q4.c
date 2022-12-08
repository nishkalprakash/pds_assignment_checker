#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[101];
   int bin,i,hah;

printf("how many number you want to enter \n");
scanf("%d",&hah);

int i=0;
   while(i<hah)
  { printf("write number %d :\n",i);
scanf("%d",&a[i]);
}
 printf("how many bins?\n");
 scanf("%d",&bin);

 int max,min,j,k;

 min = a[0];
 for (j=1; j<n; j++)
 	{ 
 		if (a[j] < min) 
 			min = a[j];
 	} 
 	//printf(“Minimum  is %d\n”, count); 

 	 max = a[0];
 for (k=1; k<n; k++)
 	{ 
 		if (a[k] > max) 
 			max = a[k];
 	} 
 	//printf(“Max is %d\n”, count); 
  
  int sec=(max-min)/bin;
i=0;
  while(i<bin)
  { 
printf("bin %d ",(i+1))
    
  	for (j=0; j<=hah; j++)
  		{
  			if( (a[j]>(min+(i*sec)))&& (a[j]<((i+1)*sec))))
              printf("%d\n",a[j] );


  }
}
