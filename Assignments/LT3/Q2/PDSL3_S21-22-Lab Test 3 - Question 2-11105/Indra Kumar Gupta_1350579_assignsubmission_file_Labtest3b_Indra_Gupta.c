/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 3 Question 2

#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int terms;
    int coefficient[10];
    int exponent[10];


};
int main()
{
    int k=0,l=0,k1=0,l1=0,i,z=1;
    struct poly univariate[2];
    char poly1[20];
    char poly2[20];
    int constant=0;
    printf("enter the first polynomial:");
    scanf("%s",poly1);
    printf("enter the second polynomial:");
    scanf("%s",poly2);
    for(i=0; poly1[i]!='\0'; i++)
    {
        //coeffcients
        if(poly1[i]=='x')
        {
            if(poly1[i-1]!='-')
            {
                univariate[0].coefficient[k]=(poly1[i-1]-'0');
                k++;
            }
            else
            {
                univariate[0].coefficient[k]=-1;
                k++;
            }

        }
        //exponent
        if(poly1[i]=='x')
        {
            if(poly1[i+1]=='^')
            {
                univariate[0].exponent[l]=(poly1[i+2]-'0');
                l++;
            }
            if(poly1[i+1]=='1')
            {
                univariate[0].exponent[l]=(poly1[i+1]-'0');
                l++;
            }

        }


    }
    while(1)
    {
        if((poly1[i-1]=='+')||(poly1[i-1]=='-'))
        {
            break;
        }

        constant=(constant+(poly1[i-1]-'0')*z);
        z=z*10;
        i--;


    }
    //printf("%d",constant);
    //printf("%d",univariate[0].coefficient[k] );
    univariate[0].coefficient[k+1]=constant;

    univariate[0].terms=k;


    for(i=0; poly2[i]!='\0'; i++)
    {
        if(poly2[i]!='^'&&poly2[i]!='x')
        {
            univariate[1].coefficient[k1]=(poly2[i-1]-'0');
            k1++;
        }
        if(poly2[i]=='x')
        {
            if(poly2[i+1]=='^')
            {
                univariate[1].exponent[l1]=(poly2[i+2]-'0');
                l1++;
            }
            if(poly2[i+1]=='1')
            {
                univariate[1].exponent[l1]=(poly2[i+1]-'0');
                l1++;
            }

        }


    }
    univariate[1].terms=k1;
    //multiplication
    for(i=0; i<k; i++)
    {
        printf("%d ",univariate[0].coefficient[i]);

    }
    printf("\n");
    for(i=0; i<k1; i++)
    {
        printf("%d ",univariate[1].coefficient[i]);

    }











}

