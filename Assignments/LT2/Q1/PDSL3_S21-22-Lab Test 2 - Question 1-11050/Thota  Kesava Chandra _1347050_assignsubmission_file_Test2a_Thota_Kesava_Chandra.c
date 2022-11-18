/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

int max_sum;

//finding the maximum sum
void maxi(int elements[],int n)
{
    int start,end,k,sum;
    max_sum=elements[0];  //initialising the max_sum for comparision

    // searching all possible sub arrays
    for(start=0;start<n;start++)
    {
        for(end=start;end<n;end++)
        {
            sum=0;
            for(k=start;k<=end;k++)
            {
                sum+=elements[k];
            }
            if (sum>max_sum)
            {
                max_sum = sum;
            }
        }
    }
    printf("Largest sum : %d\n", max_sum);
}


//printing of all sub arrays
void printing(int elements[],int n)
{
    int sum,start,end;
    printf("\nSub Arrays : \n");
    for(start=0;start<n;start++)
    {
        for(end=start;end<n;end++)
        {
            sum=0;
            for(int k=start;k<=end;k++)
            {
                sum+=elements[k];
            }

            //required condition for printing of the sub array
            if (sum==max_sum)
            {
               for(int k=start;k<=end;k++)
               {
                   printf("%d ",elements[k]);
               }
               printf("\n");
            }
        }
    }
}

int main()
{
    int n,elements[20],i;
    printf("Enter n : ");
    scanf("%d",&n);

    //taking the user input
    printf("Enter the elements: ");
    scanf("%d",&elements[0]);
    for(i=1;i<n;i++)
    {
        scanf(" %d",&elements[i]);
    }

    //finding and printing the max sum;
    maxi(elements,n);
    printing(elements,n);
    return 0;
}
