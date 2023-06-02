/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 2
*/
#include <stdio.h>
#include <math.h>

typedef struct vector{
    int a[100];
    }v;

void input(v *v1,int n);
void vectorchecking(v v1,v v2,int n1,int n2);



int main()
{
    int n1,n2,i;


    v v1,v2;

    printf("enter the dimension of vector 1 : ");
    scanf("%d",&n1);
    printf("Enter vector 1:");
    input(&v1,n1);
    printf("\n");

    printf("enter the dimension of vector 2 : ");
    scanf("%d",&n2);
    printf("Enter vector 2:");
    input(&v2,n2);
    printf("\n");

    printf("vector 1:");
    for (i=0;i<n1;i++)
    {
        printf("%d ",v1.a[i]);
    }
    printf("\n");

    printf("vector 2:");
    for (i=0;i<n2;i++)
    {
        printf("%d ",v2.a[i]);
    }
    printf("\n\n");

    vectorchecking(v1,v2,n1,n2);

}

void input(v *v1,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&(*v1).a[i]);
    }
}

void vectorchecking(v v1,v v2,int n1,int n2)
{
    int s1=0,s2=0,s3=0,i;
    float cos;
    if (n1==n2)
    {
        for (i=0;i<n1;i++)
        {
            s1+=pow((v1.a[i]),2);
        }
        for (i=0;i<n2;i++)
        {
            s2+=pow((v2.a[i]),2);
        }
        for (i=0;i<n1;i++)
        {
            s3+=((v1.a[i])*(v2.a[i]));
        }
        cos=s3/(sqrt(s1)*sqrt(s2));
        if (cos==0)
        {
            printf("Vectors are Orthogonal.\n");
        }
        else if(cos==1)
        {
            printf("Identical Vectors.\n");
        }
        else if(cos==(-1))
        {
            printf("Identical Vectors.\n");
        }
        else
        {
            printf("The Vectors are neither Similar nor Orthogonal.\n");
        }
    }
    else
    {
        printf("dimensions of vectors are not same.\n");
    }

}

