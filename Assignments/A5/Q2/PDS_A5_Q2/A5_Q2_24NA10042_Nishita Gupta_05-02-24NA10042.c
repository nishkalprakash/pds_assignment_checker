// Program to remove duplicate entries
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>
int main()
# define SIZE 100
{ 
	int i,n,x[SIZE],temp;
	printf("\nHOW MANY NUMBERS WILL BE ENTERED;"); //READ HOW MANY NUMBERS TO TAKE
	scanf("%d", &n);
	printf("\n");
	
	     
	for (i=0; i<n; ++i) {
	     scanf("%d", &x[i]);  //READ LIST OF NUMBERS
	    }
	
	printf("Original array:");
	  for (i=0; i<n; ++i) { printf("\t %d", x[i]); //PRINTING THE ORIGINAL RAYS
	                        }
	                         printf("Duplicates:\n");
	   for(i=0; i<n; ++i) {
	   	for(int j=i+1; j<n; ++j) { int count=1;
       						if (x[i]==x[j]) { count++;
       
	              		printf("\n %d [%d]", x[j],count); }}}                  
	                        
                
	   
	     
	 

return 0;
}
