/*
* SECTION 2
* ROLL NO 22EC30055
* NAME SRISAI
* ASSIGNMENT 4
* DISCRIPTION "NUMERO-PYRAMID" Q3
*/
#include<stdio.h>
int main()
{
int n,c,b,a,d,i,i1 ;
printf("enter number of rows :");/*in put value of n*/
scanf("%d",&n);
a=n ;
while(a>0)
    {
        printf("\n");
        b = a ;
    while(b>0){
    printf(" ");
    b-- ;
    }
    c = n-a+1 ;
    i = c ;
    while(c>0){
        printf("%d",i%10);
        i++ ;
        c--;
    }
    i1=i-2 ;
    d=n-a ;
    while(d>0){
    printf("%d",i1%10);
    i1-- ;
    d-- ;
    }
    a-- ;
}
}
