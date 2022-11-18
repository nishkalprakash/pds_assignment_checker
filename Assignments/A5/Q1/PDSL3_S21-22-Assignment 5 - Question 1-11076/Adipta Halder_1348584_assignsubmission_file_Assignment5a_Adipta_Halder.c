/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 5a
*/
#include<stdio.h>

void sort(int *p,int *q,int *r){
    int temp;
    if(*p<=*q&&*p<=*r){//considering p least and swapping as needed
        if(*r<=*q){
            temp=*q;
            *q=*r;
            *r=temp;
        }
    }
    else if(*q<=*p&&*q<=*r){//considering q least and swapping as needed
            temp=*p;
            *p=*q;
            *q=temp;
        if(*r<=*q){
            temp=*r;
            *r=*q;
            *q=temp;
        }
    }
    else if(*r<=*p&&*r<=*q){//considering r least and swapping as needed
            temp=*p;
            *p=*r;
            *r=temp;
        if(*r<=*q){
            temp=*r;
            *r=*q;
            *q=temp;
        }
    }
}
int main(){
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("--Before function call--");
    printf("\nAddress of a = %u",&a);//printing address as unsigned int
    printf("\nAddress of b = %u",&b);
    printf("\nAddress of c = %u",&c);
    printf("\nValues in a, b, c = %d %d %d",a,b,c);
    sort(&a,&b,&c);//passing variable address
    printf("\n--After function call--");
    printf("\nAddress of a = %u",&a);
    printf("\nAddress of b = %u",&b);
    printf("\nAddress of c = %u",&c);
    printf("\nValues in a, b, c = %d %d %d",a,b,c);
 return 0;
}

