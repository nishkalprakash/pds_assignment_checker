/*Shreya Vadhavkar
22ME10091
Section 2
Lab Test 2
problem 1*/
#include<stdio.h>
float mean(int *a,int n)
{
    static float div=0;
    static float sum=0;
    if(n!=0)
    {
        sum=sum+a[n-1];
        --n;
        ++div;
        mean(a,n);
    }
    else
    {
        return (sum/div);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i=0;i<n;++i)
    {
        scanf("%d", &a[i]);
    }
    printf("List = [");
    for(i=0;i<n-1;++i)
    {
        printf("%d, ",a[i]);
    }
    printf("%d",a[n-1]);
    printf("]");
    printf("\nMean = %.2f",mean(a,n));
    return 0;

}

