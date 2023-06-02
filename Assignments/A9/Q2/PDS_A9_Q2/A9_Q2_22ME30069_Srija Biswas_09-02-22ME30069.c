#include<stdio.h>
#include<stdlib.h>

struct v{
    int n;
    int* p;
}a,b;
int main()
{
    int k,i,sum=0,sum1=0,sum2=0,prod;
    printf("Enter dimension of vector 1\n");
    scanf("%d",&a.n);
    printf("Enter components of vector 1\n");
    a.p=(int *)malloc(a.n*sizeof(int));
    for(k=0;k<a.n;k++)
    {
        scanf("%d",&(a.p[k]));
    }
    printf("Enter dimension of vector 2\n");
    scanf("%d",&b.n);
    if(a.n!=b.n)
    {
        printf("error");
      return 0;
    }

    printf("Enter components of vector 2\n");
    b.p=(int *)malloc(b.n*sizeof(int));
    for(k=0;k<b.n;k++)
    {
        scanf("%d",&(b.p[k]));
    }
    for(i=0;i<a.n;i++)
    {
       sum+=a.p[i]*b.p[i];
       sum1=sum1+(a.p[i]*a.p[i]);
       sum2=sum2+(b.p[i]*b.p[i]);
    }
    if(sum==0)
        printf("Vectors are orthogonal\n");
    prod=sum/(sum1*sum2*1.0);
    printf("%d",prod);
    if(prod==1)
        printf("vectors are identical");


}

