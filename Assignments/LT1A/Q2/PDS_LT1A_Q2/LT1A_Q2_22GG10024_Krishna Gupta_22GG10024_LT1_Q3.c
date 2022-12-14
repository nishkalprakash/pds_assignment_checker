/*SECTION -14
  NAME -KRISHNA GUPTA
  ROLL NUMBER -22GG10024
  ASSIGNMENT - PRINTING THE PATTERN BASED ON THE USER INPUT
*/

#include <stdio.h>
int main()
{
   int n,i,j,c=1;
   printf("Enter the value of n(no of rows) :");     // Taking the value of n from user assuming 2<=n<=10
   scanf("%d",&n);

   for(i=1;i<=n;i++)                                 //  Outer loop for the no. of rows 
       {

         for(j=1;j<=i;j++)                            // Inner loop for columns
            {
              printf("%d ",c);
              c++;                                    // Increasing the value of c after each iteration of inner loop 
             }

         printf("\n");                                // Changing to new line after each iteration of outer loop  
        } 

   return 0;
}
