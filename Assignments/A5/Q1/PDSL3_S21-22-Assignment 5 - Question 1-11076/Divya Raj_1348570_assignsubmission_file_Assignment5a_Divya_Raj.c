/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/

#include<stdio.h>

//function to arrange the values of
//three variables in non-descending order
void arrange(int *a, int *b, int *c){
    int max, min, sum;
    sum = *a + *b + *c;
    if(*a > *b){
        if(*a > *c)     max = *a;
        else            max = *c;
    }
    else{
        max = *b;
    }
    
    if(*a < *b){
        if(*a < *c)     min = *a;
        else            min = *c;
    }
    else{
        min = *b;
    }
    //assigning the required values to the variables
    *a = min;
    *b = sum - max -min;
    *c = max;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf(" ---Before function call----\n");
    printf(" Address of a = %u\n", &a);
    printf(" Address of b = %u\n", &b);
    printf(" Address of c = %u\n", &c);
    printf("Values in a, b, c = %d %d %d\n", a, b, c);

    //calling the function arrange
    arrange(&a, &b, &c);

    printf(" ---After function call----\n");
    printf(" Address of a = %u\n", &a);
    printf(" Address of b = %u\n", &b);
    printf(" Address of c = %u\n", &c);
    printf("Values in a, b, c = %d %d %d\n", a, b, c);
}