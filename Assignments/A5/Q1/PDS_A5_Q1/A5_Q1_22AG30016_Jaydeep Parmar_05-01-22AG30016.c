/*
jaydeep parmar
22AG30016
lab 5(array, function, recurssion)
problem 1
*/







#include<stdio.h>   //i tried here very hard but was not able to get numbers in same sequence
#define N 100
int main()
{
    int n;
    scanf("%d",&n);
    int arc[n];
    if(n<=N)
    {

        int i=0;
        while(i<n)
        {
            scanf("%d",&arc[i]);
            i++;
        }
        i=0;
        printf("original array is: ");
        while(i<n)
        {
            printf("%d\t",arc[i]);
            i++;
        }
        int x;
        i=0;
        while(i<n)
        {
            if(arc[i]>0)
            {
                int j=(i+1);
                while(j<n)
                {
                    if(arc[j]<0)
                    {
                        x=arc[i];
                        arc[i]=arc[j];
                        arc[j]=x;
                    }
                    j++;
                }

            }
            i++;
        }
        i=0;
        printf("\n");
        printf("rearranged array is: ");
        while(i<n)
        {
            printf("%d\t",arc[i]);
            i++;
        }
    }
    else
    {
        printf("Error n>100");
    }
    return 0;
}

