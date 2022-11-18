/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 5(b)

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,min;
    printf("enter the number of elements in array : ");
    scanf("%d",&n);
    printf("enter array elements :");
    int* ptr;
    //dynamic allocation
    ptr = (int*)malloc(n * sizeof(int));


    for (i = 0; i < n; ++i)
    {
        scanf("%d",(ptr+i));
    }

    // Print the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d, ", ptr[i]);
    }
    int bins;
    printf("\n Enter the number of bins : ");
    scanf("%d",&bins);

    int max=ptr[0];
    for(i=1; i<n; i++)
    {
        if(max<ptr[i])
        {
            max=ptr[i];
        }
        else
        {
            min=ptr[i];
        }
    }
    int num=1;
    int quot=max/bins;
    int rem=max%bins;
    int temp=quot+rem;
    //printing no of elements in bins
    for(i=0; i<bins; i++)
    {
        int count=0;
        printf("bin%d : ",i+1);
        for(int j=0; j<n; j++)
        {
            if(ptr[j]>=num&&ptr[j]<=temp)
            {
                printf("%d ,",ptr[j]);
                count++;
            }
        }
        num=temp+1;
        temp=temp+quot;
        printf("\tNumber of elements in bin%d : %d",i+1,count);
        printf("\n");

    }
    return 0;
}
