/* 
Name: Rathin Ghosh
Roll no. - 22MT10042
Lab Test- 1(Set B)
The program prints a given pattern
*/
#include<stdio.h>
int main()
{
   int i,j,n;
   printf("Enter the number of lines to be printed in the pattern : "); //takes input from the user
   scanf("%d",&n);
   for(i=1;i<=n;i++)  //outer loop determines the number of lines to be printed
   {
      for(j=1;j<=i;j++)
         {
         printf("%d",i);  //prints each line of the pattern
         }
   printf("\n");     //changes the line for the next iteration
   }
   return 0;
}
