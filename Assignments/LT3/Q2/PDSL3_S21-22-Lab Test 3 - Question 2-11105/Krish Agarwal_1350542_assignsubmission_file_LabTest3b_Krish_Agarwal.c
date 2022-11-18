/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <string.h>
struct poly{
    int terms;
    int coeff[100];
    int exp[100];
}poly1,poly2;
int main()
{
    for(int i=0;i<100;i++)
    {
        poly1.exp[i]=0;
        poly2.exp[i]=0;
        poly1.coeff[i]=0;
        poly2.coeff[i]=0;
    }
    char p1[100],p2[100];//assumed max terms to be 100
    int i=0,c1=0,c2=0,fpos,gpos;
    printf("Enter the first polynomial as string: ");
    p1[0]=getchar();
    while(p1[i]!='\n')
    {
        p1[++i]=getchar();
        if(p1[i]=='+'||p1[i]=='-')
        c1++;
        gpos=i;
    }
    poly1.terms=c1+1;
    printf("Enter the second polynomial as string: ");
    p2[0]=getchar();
    i=0;
    while(p2[i]!='\n')
    {
        p2[++i]=getchar();
        if(p2[i]=='+'||p2[i]=='-')
        {
            c2++;
            fpos=i;
        }
    }
    poly2.terms=c2+1;
    // printf("%d,%d\n",poly1.terms,poly2.terms);//terms collected
    int c=0,len1=strlen(p1);
    for(i=0;p1[i]!='\0'&&(i<len1-2);i++)
    {
        if(p1[i]=='x' && p1[i+1]=='^')
        {
        poly1.exp[c]=(p1[i+2]-48);
        if(i-1>=0)
        poly1.coeff[c]=(p1[i-1]-48);
        else
        poly1.coeff[c]=1;
        c++;
        }
        if(p1[i]=='x'&&p1[i+1]!='^')
        {
        poly1.exp[c]=1;
        if(i-1>=0)
        poly1.coeff[c]=(p1[i-1]-48);
        else
        poly1.coeff[c]=1;
        c++;
        }
    }
    if(p1[fpos+1]>=48&&p1[gpos+1]<=57)
    {
    poly1.exp[c]=0;
    poly1.coeff[c]=p1[gpos+1]-48;
    }

    for(i=0;i<=c;i++)
    {
        printf("%d  ",poly1.exp[i]);
        
    }
    printf("\n");
    for(i=0;i<=c;i++)
    {
        printf("%d  ",poly1.coeff[i]); 
    }
    printf("\n");

    c=0;int len2=strlen(p2);
    for(i=0;p2[i]!='\0'&&(i<len2-2);i++)
    {
        if(p2[i]=='x' && p2[i+1]=='^')
        {
        poly2.exp[c]=(p2[i+2]-48);
        if(i-1>=0)
        poly2.coeff[c]=(p2[i-1]-48);
        else
        poly2.coeff[c]=1;
        c++;
        }
        if(p2[i]=='x'&&p2[i+1]!='^')
        {
        poly2.exp[c]=1;
        if(i-1>=0)
        poly2.coeff[c]=(p2[i-1]-48);
        else
        poly2.coeff[c]=1;
        c++;
        }
    }
    if(p2[fpos+1]>=48&&p2[fpos+1]<=57)
    {
    poly2.exp[c]=0;
    poly2.coeff[c]=p2[fpos+1]-48;
    }
    
    for(i=0;i<=c;i++)
    {
        printf("%d  ",poly2.exp[i]);
        
    }
    printf("\n");
    for(i=0;i<=c;i++)
    {
        printf("%d  ",poly2.coeff[i]); 
    }
}