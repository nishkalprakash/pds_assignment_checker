//shritik jaiswal
//sec - 3 ROLL= 21BT30026
//LAB TEST 2
//MAC OS.
#include <stdio.h>
void maxAlphaValue(int n);
//taking A as a global array.
int A[100];
int MAX=0;
int main()
{
    int n;
    //scanning the number of inputs "n"
    printf(" enter n :");
    scanf("%d",&n);
    //scanning the SET "S"
    printf("enter array S[]");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
        maxAlphaValue(n);
}
//assuming that if there is a input "1" the max value of alpha is n. 
//Hence, the user should not input 1 in the code to get proper answer.
void maxAlphaValue(int n)
{
   for (int k =0;k<n;k++)
   {
       //initializing count = -1 as the number itself divides it
       
       int count=-1;
       for (int j=0;j<n;j++)
       {
           //here we have the real count OR alpha as 1 lesser since, the number itself divides it
           //when the number divide the number in the array the count increases by 1 each time.
           if (A[j]%A[k]==0)
           {
               count=count+1;
           }
       }

       if(count>=MAX)
       {
           MAX= count;
       }
   }  
   //printing the max value of alpha
   printf("max value of alpha is : %d ",MAX);
}
