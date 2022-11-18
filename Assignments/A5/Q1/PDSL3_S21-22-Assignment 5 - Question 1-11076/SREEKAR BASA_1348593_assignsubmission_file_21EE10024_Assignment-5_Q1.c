/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 5
Question : 1
*/

#include <stdio.h>

void non_dec(int *p,int *q,int *r)
{
    int i,k,min,temp;
    min = *p;   // Initially assuming *p (value) as minimum //
    if(*p>*q)     // Logic for arranging 3 integers in ascending order//
    {             // And changing the values so that order is *p<=*q<=*r//
        if(*q>*r)
        {
          temp = *p;
          *p = *r ;
          *r = temp;
        }
        else
        {
            if(*r>*p)
            {
                temp = *p;
                *p = *q ;
                *q = temp;
            }
            else
            {
                temp = *p;
                *p = *q;
                *q = *r;
                *r = temp;
            }
        }
    }
    else
    {
        if(*r<*q)
        {
            if(*r>*p)
            {
                temp = *r;
                *r = *q;
                *q = temp;
            }
            else
            {
                temp = *r;
                *r = *q;
                *q = *p;
                *p = temp;
            }
        }
        // else case is nothing but given order here //

    }
}

int main()
{
    int a,b,c;        //declaring three variables //
    int i,j,k,n,x;
    int *p,*q,*r;    // Declaring pointer variables //
    printf(" Enter a : ");   //Reading a,b&c //
    scanf("%d",&a);
    printf(" Enter b : ");
    scanf("%d",&b);
    printf(" Enter c : ");
    scanf("%d",&c);

    p = &a; // pointing the pointers to respective variables//
    q = &b; //i.e; giving address //
    r = &c;

    printf(" \n....Before function call....\n");     //print statements//
    printf("Address of a = %d\n",p);                 //before function call//
    printf("Address of b = %d\n",q);
    printf("Address of c = %d\n",r);
    printf(" Values in a,b,c = %d,%d,%d \n",a,b,c);

    non_dec(&a,&b,&c);  //function call with variable addresses as parameters to make use of pointers in function //
    printf(" \n....After function call....\n");   //print statements//
    printf("Address of a = %d\n",p);               //after function call//
    printf("Address of b = %d\n",q);
    printf("Address of c = %d\n",r);

    printf(" Values in a,b,c = %d,%d,%d",a,b,c);  //printing final/changed values of a,b,c//
    return 0;
}
