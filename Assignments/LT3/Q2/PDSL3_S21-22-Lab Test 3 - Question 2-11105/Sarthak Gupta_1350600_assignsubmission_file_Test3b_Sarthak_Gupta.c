#include<stdio.h>
#include<string.h>
struct polynomial
{
    int terms;
    int coefficient[50];
    int exponent[50];
};
struct polynomial multiply(struct polynomial a,struct polynomial b)
{
    int i,j,temp;
    struct polynomial c;
    for(i=0;i<a.terms;i++)
    {
        for(j=0;j<b.terms;j++)
        {
            c.exponent[i]=a.exponent[i]+b.exponent[i];
        }
    }
    for(i=0;i<a.terms;i++)
    {
        for(j=0;j<b.terms;j++)
        {
            c.coefficient[i]=(a.coefficient[i])*(b.coefficient[j]);

            temp=c.coefficient[i];
        }
    }
}
int main()
{
    int i,j=0,k=0,l=0;
    struct polynomial a,b;
    char p1[50];
    char p2[50];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(p1);i++)//for finding coefficients and exponents of 1st string
    {
        if(p1[i]=='x')
        {
            if(i==0)
            {
                a.coefficient[j]=1;
                j++;
            }
            else
            {
                if(p1[i-1]<='9'&&p1[i-1]>='0')
                {
                    a.coefficient[j]=p1[j]-48;
                    j++;
                }
                if(p1[i-1]=='+')
                {
                    a.coefficient[j]==1;
                }
                if(p1[i-1]=='-')
                {
                    a.coefficient[j]==-1;
                    j++;
                }
            }
        }
        if(p1[i]=='^')
        {
            a.exponent[k]=p1[i+1]-48;
            k++;
        }
        if(i=strlen(p1)-1)
        {
            a.exponent[k]=0;
            k++;
        }
    }
    a.terms=k;
    i=0;
    j=0;
    k=0;
    for(i=0;i<strlen(p1);i++)
    {
        if(p2[i]=='x')
        {
            if(i==0)
            {
                b.coefficient[j]=1;
                j++;
            }
            else
            {
                if(p2[i-1]<='9'&&p2[i-1]>='0')
                {
                    b.coefficient[j]=p2[j]-48;
                    j++;
                }
                if(p2[i-1]=='+')
                {
                    b.coefficient[j]==1;
                    j++;
                }
                if(p2[i-1]=='-')
                {
                    b.coefficient[j]==-1;
                    j++;
                }
            }
        }
        if(p2[i]=='^')
        {
            b.exponent[k]=p2[i+1]-48;
            k++;
        }
        if(i=strlen(p2)-1)
        {
            b.exponent[k]=0;
            k++;
        }
    }
    b.terms=k;
    return 0;
}