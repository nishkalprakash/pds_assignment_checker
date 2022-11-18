#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining structure
struct poly
{
    int degree;
    int coeff;
    int len;
};//End of structure definition

int main()
{
    struct poly poly1[10],poly2[10],product[100];
    char p1[100],p2[100];
    int len,count=0;
    printf("\nEnter 1st Polynomial: ");
    scanf("%s",p1);

    len=strlen(p1);
    for(int i=0;i<len;i++)
    {
        if(p1[i]=='x')
        {
            poly1[count].coeff=p1[i-1]-'0';
            if(p1[i+1]=='^')poly1[count].degree=p1[i+2]-'0';
            else poly1[count].degree=1;
            count++;
        }
    }
    poly1[count].coeff=p1[len]-'0';
    poly1[count].degree=0;
    poly1[0].len=count;
    count=0;

    printf("\nEnter 2nd Polynomial: ");
    scanf("%s",p2);
    len=strlen(p2);
    for(int i=0;i<len;i++)
    {
        if(p2[i]=='x')
        {
            poly2[count].coeff=p2[i-1]-'0';
            if(p2[i+1]=='^')poly2[count].degree=p2[i+2]-'0';
            else poly2[count].degree=1;
            count++;
        }
    }
    poly2[count].coeff=p2[len]-'0';
    poly2[count].degree=0;
    poly2[0].len=count;
    count=0;
    for(int i=0;i< poly1[0].len;i++)
    {
        for (int j=0;j< poly2[0].len;j++)
        {
            product[++count].degree=poly1[i].degree+poly2[j].degree;
            product[count].coeff=poly1[i].coeff*poly2[j].coeff;
        }//End of j for loop/
    }//End of i for loop/
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(int i=0;i<=count;i++)
    {
        if(product[i].degree==0)
        printf("%d ",product[i].coeff);
        else if(product[i].degree==1)
        printf("%dx ",product[i].coeff);
        else
        {
            printf("%dx^%d ",product[i].coeff,product[i].degree);
        }
        if(i!=count)
        printf("+ ");
    }//End of i for loop/
}
