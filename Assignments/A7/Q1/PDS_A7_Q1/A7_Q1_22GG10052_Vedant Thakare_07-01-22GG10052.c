/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 7
* Description :
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

time_t t;
int main()
{
    int i,r,n,j,p=2,count=0,q=1000;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    //allocating memory to array
    arr[0]=(int*)malloc(n*sizeof(int));
    srand(time(0));
    //assigning random numbers to the array
    for(i=0;i<n;i++)
    {
        r=p+rand()%q;
        arr[i]=r;
    }
    printf("%d-random number array :",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Elements that are perfect numbers :");
    //checking for perfect numbers in the array
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=1;j<arr[i];j++)
        {
            //if the number is a factor ,remainder will be zero
            if(arr[i]%j==0)
                sum+=j;
        }
        if(arr[i]==sum)
        {
            printf("%d ",arr[i]);
            count++;
        }
    }
    if(count==0)
        printf("No perfect numbers in the array\n");

    return 0;
}
