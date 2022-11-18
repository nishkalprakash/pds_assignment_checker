/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include <stdio.h>
int large_sum; // max sum variable


void largesum(int arr[],int n)// void function for getting max sum
{
    int beg,end,index,sum_i;
    large_sum= arr[0];  //initialising the max_sum for comparision

    // searching all possible sub arrays
    for(beg=0;beg<n;beg++)// for loop
    {
        for(end=beg;end<n;end++)
        {
            int sum_i=0;// initial condition
            for(index=beg;index<=end;index++)
            {
                sum_i=sum_i+arr[index];
            }
            if (sum_i>large_sum)
            {
                large_sum = sum_i;
            }
        }
    }
    printf("Largest sum of the array : %d\n", large_sum);
}
void subarr(int arr[],int n)// void function for sub array
{
    int sum_i,beg,end;
    printf(" Sub arrays : ");

    for(beg=0;beg<n;beg++)
    {
        for(end=beg;end<n;end++)
        {
             int sum=0;
            for(int index =beg;index<=end;index++)
            {
                sum_i= sum_i+arr[index];
            }


            if (sum_i== large_sum)
            {
               for(int index =beg;beg<=end;index++)
               {
                   printf("%d",arr[index]);
               }

            }
        }
    }
}


int main()// main function for returning the void functions
{
    int n,arr[50];
    printf("Enter n : ");
    scanf("%d",&n);

    printf("Enter elements of the array : ");
    scanf("%d",&arr[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largesum(arr,n);
    subarr(arr,n);
    return 0;
}


