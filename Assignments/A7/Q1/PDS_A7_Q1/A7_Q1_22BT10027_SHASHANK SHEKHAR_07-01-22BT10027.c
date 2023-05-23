#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int *a,n,i,r;
    //printf("Enter the size of array");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    srand(time(0));
    for(i=0;i<n;i++)
    {
        a[i] = 2+rand()%1000;
    }
    printf("5-random number array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        r = perfect(a[i]);
        if(r==1)
            printf("%d is a perfect number",a[i]);
    }

}
int perfect(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s = s+i;
    }
    //printf("%d \n",s);
    if(s==n)
        return 1;
    else
        return 0;
}
