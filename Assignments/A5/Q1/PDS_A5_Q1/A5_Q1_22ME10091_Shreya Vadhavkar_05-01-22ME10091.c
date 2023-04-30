/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 5
Description: Array rearrangement */
#include<stdio.h>
#define N 100//N=100
int main()
{
    int n;//declare limit
    int pos=0,neg=0;//store no. of positive and negative nos.
    scanf("%d", &n);//input limit
    if(n<=N)//n should be less than 100
    {
    int a[n];//declare array
    int i;
    for(i=0;i<n;++i)//input array
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
        {
            ++pos;//count positive no.
        }
        else if(a[i]<0)
        {
            ++neg;//count negative nos.
        }
    }
    printf("Original Array:");
    for(i=0;i<n;++i)//print original array
    {
        printf("%d ",a[i]);
    }
    int b[n];//declare rearranged array
    int j=0,k=neg;
    for(i=0;i<n;++i)//rearrange array
    {
        if(a[i]>=0)//negative nos. are first
        {
            int temp =a[k];
            a[k]=a[i];
            a[i]=temp;
            ++k;
        }
       /* else//positive nos. are next
        {
            int temp = a[j];
            a[j]=a[i];
            a[i] = temp;
            ++j;
        }*/
    }

    printf("\nRearranged array:");//print rearranged array
    for(i=0;i<n;++i)
    {
        printf("%d ", a[i]);
    }
    }
    else
    {
        printf("Error: n>100");//print error
    }
    return 0;
}
