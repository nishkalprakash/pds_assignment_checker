#include<stdio.h>
void main()
{
    int n,b,i;
    int*p;
    printf("enter the number of array elements:");
    scanf("%d",&n);
    p=calloc(n,4);
    printf("\nenter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("\nenter the number of bins:");
    scanf("%d",&b);
    int r1,r2;
    r1=p[0];
    r2=p[0];
    for(i=0;i<n;i++)
     if(p[i]<r1)
       r1=p[i];
    for(i=0;i<n;i++)
     if(p[i]>r2)
        r2=p[i];
    sort(p,n);
    int j,k=(r2-r1+1)/b,a=0;
    int*c;
    for(j=1;j<=b;j++)
        {
          c=calloc(k,4);
           for(i=0;p[i]<=3+j*k;i++)
                c[i]=p[i];


           printf("\nbin %d=>:",j);
           for(i=0;i<k;i++)
            if(c[i]!=0)
             printf("%d ",c[i]);
            printf("\nno. of elements in bin%d is %d\n",j,a);
           free(c);
        }











}
void sort(int*k,int N)
{
   int i,j,a;
    for(i=1;i<N;i++)
        for(j=0;j<=N-i-1;j++)
         if(k[j+1]<=k[j])
         {
             a=k[j];
             k[j]=k[j+1];
             k[j+1]=a;
         }
    return;

}
