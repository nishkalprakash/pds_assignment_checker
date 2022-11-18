/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>

typedef struct poly //polynomial structure
{
    int n;
    int coeff[100];
    int ex[100];
}polyn;

int main()
{
    polyn p1,p2,p3; //p1 and p2 are user input polynomials and p3 is the multiplied polynomial
    char s1[100],s2[100],s3[100]; //s1 and s2 are string
    int m=1,n=1,i,j,c=0,d=0,e=0,sum=0;
    printf("Enter the first polynomial as a string:");
    gets(s1);
    printf("Enter the second polynomial as a string:");
    gets(s2);
    for (i=0;s1[i]!='\0';i++)
    {
        if (s1[i]=='+')
        {
            m=m+1;
        }
    }
    m=m+1;
    for (i=0;s2[i]!='\0';i++)
    {
        if (s2[i]=='+')
        {
            n=n+1;
        }
    }
    n=n+1;
    for (i=0;s1[i]!='\0';i++)
    {
        if ((s1[i]!='x'))
        {
            if (s1[i]>48 && s1[i]<57)
            {
                sum=(int)(s1[i])-48+sum*pow(10,c);
                c=c+1;
            }
        }
        else
        {
            p1.coeff[d++]=sum;
            sum=0;
            c=0;
        }
    }
    sum=0;
    c=0;
    for (i=0;s2[i]!='\0';i++)
    {
        if (s2[i]!='x')
        {
            if (s2[i]>48 && s2[i]<57)
            {
                sum=(int)(s2[i])-48+sum*pow(10,c);
                c=c+1;
            }
        }
        else
        {
            p2.coeff[e++]=sum;
            sum=0;
            c=0;
        }
    }
    d=0;
    for (i=0;s1[i]!='\0';i++)
    {
        if ((s1[i]=='^'))
        {
            p1.ex[d++]=(int)s1[i+1]-48;
        }
    }
    e=0;
    for (i=0;s2[i]!='\0';i++)
    {
        if ((s2[i]=='^'))
        {
            p2.ex[e++]=(int)s2[i+1]-48;
        }
    }
    for (i=0;i<m+n-1;i++)
    {
        p3.coeff[i]=0;
        p3.ex[i]=0;
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            p3.coeff[i+j]+=p1.coeff[i]*p2.coeff[j]; //coefficient multiplication
            p3.ex[i+j]+=p1.ex[i]+p2.ex[j]; //exponential multiplication
        }
    }
    for (i=0;i<m+n-1;i++)
    {
        printf("%dx^%d + ",p3.coeff[i],p3.ex[i]);
    }

    return 0;
}

