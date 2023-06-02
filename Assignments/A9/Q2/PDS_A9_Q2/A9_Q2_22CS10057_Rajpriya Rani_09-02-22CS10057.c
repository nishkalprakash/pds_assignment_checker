#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct vector{      //structure definition
    float *v;
    int n;
    }vector;

void read(int n,vector *vec)
{
    printf("Enter %d dimensions of vector: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&vec->v[i]);     //input values
    }
}

double dot(vector a,vector b,int n)
{
    int i;
    double p=0.0,sa=0.0,sb=0.0,cos;
    for(i=0;i<n;i++)
    {
        p=p+ a.v[i]*b.v[i];     //dot product
        sa=sa + (a.v[i]*a.v[i]);
        sb=sb + (b.v[i]*b.v[i]);
    }
    sa=sqrt(sa);
    sb=sqrt(sb);
    if(p>=0.0)
        cos=p/(sa*sb);
    else
        cos=-1*p/(sa*sb);
    return cos;
}

void main()
{
    vector a,b;
    printf("enter dimensions of vectors :");
    scanf("%d%d",&a.n,&b.n);
    if(a.n==b.n)
    {
    a.v=(float*)malloc((a.n)*sizeof(float));        //dynamic memory allocation
    b.v=(float*)malloc((b.n)*sizeof(float));
    read(a.n,&a);
    read(b.n,&b);
    double x=dot(a,b,a.n);
    printf("cos theta= %lf \n",x);
    if(x==(double)(0.0))
        printf("orthogonal vectors");
    else if(x==(double)(1.0))
        printf("Identical vectors");
    else
        printf("Neither orthogonal nor similar vectors");
    }
    else
        printf("unequal dimensions");
}
