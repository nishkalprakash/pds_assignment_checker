/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 7
Question: 1
Description: Perfect Numbers*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int n,r,p=2,q=1000,i,j,sum=0,count=0;
    scanf("%d",&n);
    printf("%d-random number array: ",n);
    int *a;
    a=(int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {

        *(a+i)=p+rand()%q;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=1; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                sum+=j;
            }
        }
        if(sum==a[i])
        {
            printf("%d ",sum);
            count++;
        }
        sum=0;
    }
    if(count==1)
        printf("is a perfect number");
    else if(count>1)
        printf("are perfect numbers");
    if(count==0)
    {
        printf("\nNo perfect number found\n");

    }
    return 0;
}
