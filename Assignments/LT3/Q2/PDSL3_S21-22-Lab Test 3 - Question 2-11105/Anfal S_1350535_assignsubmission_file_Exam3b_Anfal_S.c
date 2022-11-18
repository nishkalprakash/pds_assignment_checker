/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 3
Operating System: windows
*/
#include<stdio.h>
#include<string.h>
typedef struct
{
    int n;
    int C[10];
    int E[10];
} expression;
int main()
{
    char A[20],B[20],R[20];
    expression a,b,c;
    printf("enter the first expression:");
    scanf("%s",A);
    printf("enter the second expression:");
    scanf("%s",B);
    a.n=1;
    b.n=1;
    int i;
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]=='+'||A[i]=='-') a.n++;
    }
    for(i=0;i<strlen(B);i++)
    {
        if(B[i]=='+'||B[i]=='-') b.n++;
    }
    i=0;
    if(A[0]='x') a.C[0]=1;
    else
    {
        a.C[0]=0;
        while(A[i]!='x')
        {
            a.C[0]=(a.C[0]*10)+A[i];
            i++;
        }
    }
    int j=1;
    for(i;i<strlen(A);i++)
    {
        if(A[i]=='+'||A[i]=='-')
        {
           i++;
           a.C[j]=0;
           while(A[i]!='x')
            {
                a.C[j]=(a.C[j]*10)+A[i];
                i++;
            }
            printf("%d",a.C[j]);
            j++;
        }
    }
    j=0;
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]=='^')
        {
           i++;
           a.E[j]=0;
           while(A[i]!='+')
            {
                a.E[j]=(a.E[j]*10)+A[i];
                i++;
                if(A[i]!='-') break;
            }
            j++;
        }
    }
    i=0;
    if(B[0]='x') b.C[0]=1;
    else
    {
        b.C[0]=0;
        while(B[i]!='x')
        {
            b.C[0]=(b.C[0]*10)+B[i];
            i++;
        }
    }
    j=1;
    for(i;i<strlen(B);i++)
    {
        if(B[i]=='+'||B[i]=='-')
        {
           i++;
           b.C[j]=0;
           while(B[i]!='x')
            {
                b.C[j]=(b.C[j]*10)+B[i];
                i++;
            }
            j++;
        }
    }
    j=0;
    for(i=0;i<strlen(B);i++)
    {
        if(B[i]=='^')
        {
           i++;
           b.E[j]=0;
           while(B[i]!='+')
            {
                b.E[j]=(b.E[j]*10)+B[i];
                i++;
                if(B[i]!='-') break;
            }
            j++;
        }
    }
    c.n=a.n+b.n-1;
    int k=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            c.C[k]=a.C[i]*b.C[j];
            c.E[k]=a.E[i]+b.E[j];
            k++;
        }
    }
    printf("the resultant expression=");
    for(i=0;i<k;i++)
    {
        printf("%dx^%d,",c.C[i],c.E[i]);
    }
    return 0;
}
