/* 
  NAME - KRISHNA GUPTA
  ROLL N0.- 22GG10024
  SECTION -14
  QUESTION -2
  */


#include <stdio.h>
#include <stdlib.h>
   int main()
    {   
     int m,n,i,j; 
     printf("Enter the number of rows - m = ");
     scanf("%d",&m);
     printf("Enter the number of columns - n = ");
     scanf("%d",&n);
     int A[m][n];
     printf("enter %d elements :",m*n);        // taking input
     for (i=0;i<m;i++)
       {
         for (j=0;j<n;j++)
          {
            scanf("%d",&A[i][j]);
          }
       }
   
     for (i=0;i<m;i++)              // printing the elements in the given form
       {
         for (j=0;j<n;j++)
          {
            printf("%d ",A[i][j]);
          }
           printf("\n");
       }
     return 0;
   }
  
        

