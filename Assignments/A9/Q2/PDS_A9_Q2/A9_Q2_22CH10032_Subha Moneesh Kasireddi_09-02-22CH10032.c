#include<stdio.h>

typedef struct
{
    int n;
    float x[20];
} vector;

vector readv()
{
    int i;
    vector v;
    scanf("%d",&v.n);
    for(i=0;i<v.n;++i)
    {
        if (i==0) scanf("%f",&v.x[i]);
        else scanf(" %f",&v.x[i]);
    }
    return v;
}

int checkv(vector v1, vector v2)
{
    int i,flag=0;
    float dotp=0,ratio;
    ratio = v1.x[0]/v2.x[0];

    if (v1.n!=v2.n) printf("\nThe vectors have different dimensions, hence The vectors are neither similar nor orthogonal.\n");
    else
    {
        for(i=0;i<v1.n;++i) dotp = dotp + (v1.x[i]*v2.x[i]);
        for(i=1;i<v1.n;++i) if ((v1.x[i]/v2.x[i])!=ratio) flag=1;

        if (dotp==0) printf("\nVectors are orthogonal\n");
        else if (flag==0) printf("\nIdentical Vectors\n");
        else printf("\nThe vectors are neither similar nor orthogonal.\n");
    }
    return 0;
}

int main()
{
    vector v1,v2;
    v1=readv();
    printf("\n");
    v2=readv();
    checkv(v1,v2);
    return 0;
}
