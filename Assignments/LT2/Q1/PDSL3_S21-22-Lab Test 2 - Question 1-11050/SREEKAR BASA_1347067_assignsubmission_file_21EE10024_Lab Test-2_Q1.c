/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_2
Question    : 1
*/
#include <stdio.h>

void largestsum(int s[],int n)         // Function with parameters - array of integers and no.of integers in arrays //
{
    int i,j,k,l1,l2;
    int sum=0;
    int max=0;
    for(i=0;i<n;i++)  // initially taking max. as sum of all elements //
    {
        sum = sum + s[i];
    }
    max = sum;
    sum =0;

    for(i=0;i<n;i++)     //checking with individual element //
    {
        if(s[i]>max)
        {
            max = s[i];
            l1=i;
            l2=i;
        }
    }

    for(k=0;k<n;k++)     // checking with all possible combinations //
    {
     for(j=k+1;j<n;j++)
     {
      for(i=k,sum=0;i<j+1;i++)
        {
            sum = sum + s[i];
            if(sum>max)
            {
                max = sum;
                l1 = k;
                l2 = j;
            }
        }
     }
    }

    printf(" Maximum sum = %d \n",max);
    printf(" Sequence : ");
    for(i=l1;i<=l2;i++) printf("%d ",s[i]);

}

int main()
{
    int n,i,k;
    int a[20]; //declaring a array with size 20 //
    printf(" No.of integers (1-20) : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)   //taking integer inputs in the array //
    {
        printf(" Enter a integer :");
        scanf("%d",&a[i]);
    }

    largestsum(a,n); //calling the function //
    return 0;
}
