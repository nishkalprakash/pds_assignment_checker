//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 9
//description:Q2
#include<stdio.h>
struct vector
    {
        int n;
        int *p;
    }a,b;
int main()
{
    int i,c=0,d;
    int k;
    scanf("%d",&a.n);

    a.p= (int*)malloc(a.n*sizeof(int));
    for (i=0;i<a.n;i++)
    {
        scanf("%d",&(a.p[i]));
    }
    printf("\n");
    scanf("%d",&b.n);
     b.p= (int*)malloc(b.n*sizeof(int));
    for (i=0;i<b.n;i++)
    {
        scanf("%d",&(b.p[i]));
    }
    for (i=0;i<a.n;i++)
    {
        c=c+(a.p[i]*b.p[i]);
    }
    for (i=0;i<a.n;i++)
    {
        d=d+(a.p[i]*a.p[i]);
    }

    k=(b.p[1])/(a.p[1]*1.0);
    if (c==0)
    {
        printf("Vector are orthogonal");
    }
    if (c==k*d)
    {
        printf("Identical vectors");
    }
    else
        printf("The vector are neither similar nor identical");


}

