#include<stdio.h>
#include<string.h>

struct poly
{
    int terms;
    int coeff[10];
    int exp[10];
};

void extract(char a[],struct poly p)
{
    int j=0;
    for(int i=0;a[i]!='\0'; )
    {
        if(a[i]='x')
        {
            p.coeff[j]=a[i-1];
            if(a[i+1]=='^')
            {
                p.exp[j]=a[i+2];
                i=i+3;
                j=j+1;
                p.terms=j;
            }
            else
            {
                p.exp[j]=1;
                i=i+2;
                j=j+1;
                p.terms=j;
            }
        }
        else if((a[i+1]=='\0')&&(a[i-1]!='x'))
        {
            p.coeff[j]=a[i];
            j=j+1;
            p.terms=j;
        }
        else i++;
    }
}

void product(struct poly p1,struct poly p2,struct poly P)
{
    int count=-1;
    int i,j;
    for(i=0;i< p1.terms;i++)
    {
       for (j=0;j<p2.terms;j++)
       {
           P.exp[++count]=p1.exp[i]+p2.exp[j];
           P.exp[count]=p1.coeff[i]*p2.coeff[j];
       }
    }
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(i=0;i<=count;i++)
    {
        if(P.exp[i]==0)
        printf("%d ",P.coeff[i]);
        else if(P.exp[i]==1)
        printf("%dx ",P.coeff[i]);
        else
        {
             printf("%d x^%d ",P.coeff[i],P.exp[i]);
        }
        if(i!=count)
        printf("+ ");
    }
}

void main()
{
    struct poly p1,p2,P;
    p1.terms=p2.terms=P.terms=0;
    char a[20];
    printf("Enter the first polynomial : ");
    gets(a);
    extract(a,p1);
    printf("\n Enter the second polynomial : ");
    gets(a);
    extract(a,p2);
    product(p1,p2,P);
}
