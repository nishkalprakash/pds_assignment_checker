/*NAME - KRISHNA GUPTA 
  SECTION-14
  ROLLNUMBER- 22GG10024
  ASSIGNMENT NUMBER -7
  PROBLEM - PRINTING THE NUMBERS WHICH APPEARS M TIMES 
   */


#include <stdio.h>
#include <stdlib.h>
int main()
 {
           int i,n,c,k=0,m,j;
           int B[100];
           printf("Enter the size of the array :");      // inputing the size of array
           scanf("%d",&n);
           int A[n];
           printf("Enter the elements of the array :");   // inputing the elements of array
           for (i=0;i<n;i++)
                {
                   scanf("%d",&A[i]);
                }
           printf("Enter the value of m :");
           scanf("%d",&m);

           for (i=0;i<n;i++)                   // LINERS SEARCH IN THE ARRAY
                {
                    c=1;
                     for(j=i+1;j<n;j++)
                       {
                          if (A[i]==A[j])
                               {     
                                   c++;       // COUNTING THE NUMBER OF TIMES A NUMBER HAS APPEARED IN THE ARRAY
                               }
                       }
                     if (c==m)
                       { 
                           B[k]=A[i];     // another array B for storing numbers that have appeared m times
                           k++;
                       }
                    }
   
           if (k > 0)
          {
            for (i=0;i< k;i++)
               {
                 printf("%d ",B[i]);        // printing the numbers that have apperaed m times
               }
            printf("appears %d times ",m);
          }
          else 
           {
             printf("NO number appears %d times",m);
  
            }
          return 0;
}
