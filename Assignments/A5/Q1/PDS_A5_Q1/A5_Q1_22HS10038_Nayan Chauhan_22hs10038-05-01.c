/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 3
* Description : Program to rearrange array
*/
#include <stdio.h>
#define N 100
int main()
{
    int a[N], n;
    scanf("%d", &n);
    if(n>100) printf("Error: n > 100");
    else{
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original Array:\n");
    for(int l = 0;l<n;l++)
    {
        printf("%d, ", a[l]);
    }
    int empty, check, t=-1;
    for(int m = n-1;m >=0;m--)
    {
        if(m>=0&&a[m]<0)
        {
            t=m;
            break;
        }
    }
    if(t!=0){
    for(int j = t-1; j>=0; j--)
    {

        if(t>=0&&a[j]>0){         //Not changing 0's position at all according to conveniance
            a[j] += a[t];
            a[t]=a[j]-a[t];
            a[j]=a[j]-a[t];
            --t;
        }
    }
    }
    printf("\nRearranged Array:\n");
    for(int l = 0;l<n;l++)
    {
        printf("%d, ", a[l]);
    }
    }

}
