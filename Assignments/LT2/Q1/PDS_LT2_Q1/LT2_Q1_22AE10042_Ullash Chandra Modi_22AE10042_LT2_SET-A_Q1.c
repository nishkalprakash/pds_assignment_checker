/*
Name : Ullash chandra Modi
Roll : 22AE10042
sec : 2
assignment : 1
*/

#include <stdio.h>
float mean(int *a,int n);

int main()
{
    int n,i;
    printf("enter number of elements you want to enter : ");
    scanf("%d",&n);

    int a[n];

    printf("enter %d elemets : ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nlist = [");
    for (i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\b]");



    printf("\nmean = %.2f\n",mean(&a,n));

    return 0;
}

float mean(int *a,int n)
{
    if (n==1)
        return a[0];
    if (n==2)
        return ((a[0]+a[1])/2);
    else if (n==3)
        return ((a[0]+a[1]+a[2])/3);
    else{
    int i,b;
    b=n/2;
    int l1[b],l2[b];

    for(i=0;i<b;i++)
    {
        l1[i]=a[i];
    }

    for(i=0;i<b;i++)
    {
        l2[i]=a[b+i];
    }

    return((mean(&l1,b)+mean(&l2,b))/2);}
}
