/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   CodeBlocks
   Windows 10 */
#include<stdio.h>
int maxAlphaValue(int S[],int num);
int main()
{
  int n,i,Sum;
  printf("Enter the number of elemnts\n"); // n is the array size
  scanf("%d",&n);

  printf("Enter Array Elements\n");

  int S[n];
  for(i=0; i<n; i++)  // array elements as input
  {
     scanf("%d",&S[i]);
  }
   Sum = maxAlphaValue(S,n); // stores the max alpha value

  printf("The Maximum Alpha value is %d",Sum);

  return 0;
}


int maxAlphaValue(int S[],int n)
{
  int div[n];
  int count;
  int i,j,max,k=0;

  for(i=1; i<n; i++)
  {
    count=0;
    int num= S[i];

    for(j=0; j<i; j++)
     {
       if(S[j]%num == 0) // checks the divisibility condition
          {
             count++;
          }
     }
  div[k]= count;  /*stores the number of time Sk gets divisible by Si for all k<i for every i */
  k++;
 }

 max = div[0];
 for(i=1; i<k; i++)
 {
   if(div[i]>max)  // finds the maximum element of the array
    {
      max = div[i];
    }
}

return (max);
}
