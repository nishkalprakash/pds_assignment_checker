/*SECTION -14
  NAME -KRISHNA GUPTA
  ROLL NUMBER -22GG10024
  PROGRAM - PRINTING ALL THE PERFECT NUMBERS UPTO N 
*/

#include <stdio.h>
int main()
{
    int i,N,j,sum;
    printf("Enter number upto which the perfect numbers have to be printed :");   // Taking the value of N
    scanf("%d",&N);
   if(N<=1)
     {
        printf("Invalid Input");                                   // Invalid input if N<=1
     }
      for (i=2;i<=N;i++)                                        // Outer loop for all numbers between 2 and N
       {
          sum=1; 

        for (j=2;j<=(i/2);j++)                                //  Inner loop for all divisors of i 
          {
           if (i%j==0)                                            //Condition for divisors
              {
                sum =sum + j;                                     // Sum up all the divisors 
              } 
           }

           if (sum==i)                                      // Condition for Perfect number 
           {
            printf("%d ",i);                              //Printing the perfect numbers upto N
           }
        }

return 0;
}
