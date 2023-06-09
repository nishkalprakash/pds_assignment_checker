/*
Name - Shashank Shekhar
Roll - 22BT10027
Sect. - 2
*/
#include<stdio.h>
#include<stdlib.h>
int s;
float mean(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    return 1.0*sum;
    /*if(n==s)
        return 0.0;
    else
        return (mean(a,n++)+a[n]/s*1.0);*/
}
int main()
{
    int i,sum=0;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    int *ar = (int *)malloc(s*sizeof(int));
    printf("Enter the numbers in the array\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    float m = mean(ar,s)/s;
    printf("List = [");
    for(i = 0;i<s;i++)
    {
        printf("%d",ar[i]);
        if(i!=s-1)
            printf(", ");
    }
    printf("]\n");
    //float m = mean(ar,0);
    //m = sum/s*1.0;
    printf("Mean = %.2lf",m);
    return 0;
}
