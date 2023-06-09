//Name-Srija Biswas
//Roll No.-22ME30069
//Sec-2
//Problem-1
//Description-Mean
#include<stdio.h>
#define N 100
int d=0;
float half=0.0;
float mean(int* a,int n);
int main()
{
    int a[N],n,i,L1[N],L2[N],b,j;
    float u1,u2,u;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("List=[");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("]\n");
    b=n/2;
    if(n==1)
        printf("Mean=%.2f",(float)a[0]);
    else if(n%2==0){
    for(i=0;i<b;i++)
    {
        L1[i]=a[i];
    }
    for(i=b,j=0;i<n;i++,j++)
    {
        L2[j]=a[i];
    }
    printf("\n");
    u1=mean(L1,b);
    half=0.0;
    d=0;
    u2=mean(L2,b);
    u=(u1+u2)/2;
    printf("Mean=%.2f",u);}
    else
    {
        for(i=0;i<b;i++)
    {
        L1[i]=a[i];
    }
    for(i=b+1,j=0;i<n;i++,j++)
    {
        L2[j]=a[i];
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",L1[i]);
    }printf("\n");
    for(i=0;i<b;i++)
    {
        printf("%d ",L2[i]);
    }printf("\n");
    u1=mean(L1,b);
    half=0.0;
    d=0;
    u2=mean(L2,b);
    u=(u1+u2)/2;
    printf("Mean=%.2f",u);
    }
}
float mean(int* a,int n)
{

    if(n==0)
        return half/d;
    else
    {
        half+=a[n-1];
        d++;
        return mean(a,n-1);
    }

}
