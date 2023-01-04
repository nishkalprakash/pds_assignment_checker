/*NAME - KRISHNA GUPTA
  SECTION-14
  ROLLNUMBER- 22GG10024
  ASSIGNMENT NUMBER -7
  PROBLEM - PRINTING THE LARGEST POSSIBLE NUMBER THAT CAN BE MADE FROM AN ARRAY
   */
#include <stdio.h>
int main()
{
int i,j,t,n;
printf("Enter the number of values(n) :\n");     // taking the number of values
scanf("%d",&n);
int A[n];
printf("Enter the  values : \n");       // taking the values
for (i=0;i<n;++i)
 {
   scanf("%d ",&A[i]);
   }
for (i=0;i<n;i++)
  {
    for (j=0;j<n;j++)
    {
     if(A[j]>A[i])
      {                                     // sorting the array in ascending order
        t = A[j];
        A[j]=A[i];
        A[i] =t; 
        }
     }
   }
for (i = n-1;i>=0;i--)
   {                                      // printing the sorted array in reverse order
    printf("%d", A[i]);
     }
return 0;
}
