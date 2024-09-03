// Program to 
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>
#define N 100
int main()
{ 
	int i,n,x[N],temp,c;
	printf("/nHOW MANY NUMBERS WILL BE ENTERED;");
	scanf("%d", &n);
	printf("\n");
	
	     
	for (i=0; i<n; ++i) {
	     scanf("%d", &x[i]);
	    }
	
	printf("Original array:");
	  for (i=0; i<n; ++i) { printf("\t %d", x[i]);
	                        }

      
	
	printf("\nRearrange array:");
             for (c=0; c<n-1; ++c)
             for (i=c + 1; i<n; ++i)
             if (x[i] < x[c]) {
                  temp = x[c];
                  x[c]=x[i];
                  x[c]=temp;
                 printf("\t %d", x[i]); }   
	   
	     
	 return 0;
}








