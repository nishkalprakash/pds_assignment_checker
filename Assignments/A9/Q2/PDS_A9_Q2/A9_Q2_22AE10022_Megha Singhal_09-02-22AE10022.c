#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct vector
    {
        float r;
    };
struct vector input(int);
int main()
{
    int n,i;
    float q,x,y,z=0,s1=0,s2=0;
    printf("Enter dimension of Vector: ");
    scanf("%d",&n);
    struct vector *a=malloc(n*sizeof(struct vector)),*b=malloc(n*sizeof(struct vector));
    printf("Enter 1st Vector: ");
    *a=input(n);
    printf("Enter 2nd Vector: ");
    *b=input(n);
    for(i=0;i<n;i++)
    {
        s1+=(a[i].r)*(a[i].r);
         s2+=(b[i].r)*(b[i].r);
         z+=(a[i].r)*(b[i].r);
    }
    x=(pow(s1,0.5));
    y=(pow(s2,0.5));
    q=z/(x*y);
    if(q==1||q==-1)
        printf("Identical vectors");
    else if(q==0) printf("Vectors are Orthogonal");
    else printf("Vectors are neither identical nor orthogonal");
    return 0;
}
struct vector input(int n)
{
    int i;
    struct vector *p=malloc(n*sizeof(struct vector));
    for(i=0;i<n;i++)
    {
        scanf("%f",&p[i].r);
    }
    return *p;
}


