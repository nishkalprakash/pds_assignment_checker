/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); //Enter number of elements of array
    scanf("%d", &n);
    printf("Enter elements: ");
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    int max=array[0], sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];  //sum of array elements until hitting max sum
        if(max<sum)
        {
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    printf("Largest sum =");
    printf("%d\n", max);
    printf("subarray: \n");
    for(int i=0;i<n;i++)
    {
        int t=0;
        for (int k=i;k<n;k++)
        {
            t=t+array[k];
            if (t==max)
            {
                for (int j=i;j<=k;j++)
                {
                    printf("%d ",array[j]);  //printing sub array
                }
                printf("\n");
            }
        }
    }
}
