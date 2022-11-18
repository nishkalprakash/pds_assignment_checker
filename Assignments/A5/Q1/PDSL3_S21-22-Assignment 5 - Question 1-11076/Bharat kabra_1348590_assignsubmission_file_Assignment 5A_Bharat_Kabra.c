/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Assignment class: 5
*/
#include <stdio.h>


void changeValues(int *a, int *b, int *c){
    int temp;                    //defined a temp variable to store value
    if(*a>*b){                   //swapping the values
        temp=*a;
        *a=*b;
        *b=temp;
    }if(*b>*c){                   //swapping the values
        temp=*b;
        *b=*c;
        *c=temp;
    }if(*a>*b){                   //swapping the values
        temp=*a;
        *a=*b;
        *b=temp;
    }

    return;
}


int main(){
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("---Before function call----\n");
    printf("Address of a = %d\n",&a);
    printf("Address of b = %d\n",&b);
    printf("Address of c = %d\n",&c);
    printf("Values in a, b, c = %d %d %d\n", a,b,c);
    changeValues(&a,&b,&c);//calling the function by giving address of a,b,c as input
    printf("---After function call---\n");
    printf("Address of a = %d\n",&a);
    printf("Address of b = %d\n",&b);
    printf("Address of c = %d\n",&c);
    printf("Values in a, b, c = %d %d %d\n", a,b,c);
}