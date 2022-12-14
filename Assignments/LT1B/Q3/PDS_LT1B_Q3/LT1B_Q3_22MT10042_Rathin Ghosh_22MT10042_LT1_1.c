/*Name : Rathin Ghosh
Roll no. : 22MT10042
Lab Test 1(Set B)
The program prints the largest and the second largest elements at any time, from the values entered so far. A negative input from the user terminates the program.
*/
#include<stdio.h>
int main()   //main function
{
   int n,i=0,j,k,l=0,ar[]={};
   printf("Enter numbers : ");
   while(1)
   {
      scanf("%d",&n);      //inputs are taken from the user
      if (n<0)             //negative input terminates the program
         break;
      else
      {
         ar[i]=n;
         i++;
         if (i==1)
         {
            printf("Largest number: %d\n",ar[0]);
            printf("Second largest number : Value not yet entered\n");
         }
         else
         {
            for (j=0;j<i-1;j++)           //the array is sorted after each input
            {
               for(k=j+1;k<i;k++)
               {
                  if (ar[j]>ar[k])
                  {
                     l=ar[k];
                     ar[k]=ar[j];
                     ar[j]=l;
                  }
               }
            }
            printf("Largest number : %d\n",ar[i-1]);          //the largest number is printed
            printf("Second largest number : %d\n",ar[i-2]);   //the second largest number is printed
         }
      }
   }
   return 0;
}

