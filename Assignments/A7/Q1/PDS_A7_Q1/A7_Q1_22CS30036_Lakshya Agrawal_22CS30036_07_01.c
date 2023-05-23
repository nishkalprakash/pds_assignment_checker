/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 7
Description : To generate n random numbers and to find the perfect numbers among them
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MIN 2
#define MAX 1000

int main()
{
    int n;
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        arr2[i] = 0;


    time_t t;
    srand(time(t));

    for(int i=0;i<n;i++)
        arr[i] = MIN+ rand()%(MAX-1);

    printf("%d-random number array: ",n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    int sum=0,num=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=1;j<arr[i];j++)
        {
            if(arr[i]%j==0)
                sum+=j;
        }

        if(sum==arr[i])
        {
            num++;
            arr2[i] = 1;
        }
    }

    int flag=0,x=0;
    for(int i=0;i<n;i++)
    {
        if(arr2[i]==1)
        {
            flag = 1;
            x++;
            if(x==num)
              printf("%d ",arr[i]);
            else
              printf("%d, ",arr[i]);
        }
    }

    if(flag==0)
      printf("No perfect number found");
    else if(num>1)
      printf("are perfect numbers");
    else
      printf("is a perfect number");

    return 0;
}
