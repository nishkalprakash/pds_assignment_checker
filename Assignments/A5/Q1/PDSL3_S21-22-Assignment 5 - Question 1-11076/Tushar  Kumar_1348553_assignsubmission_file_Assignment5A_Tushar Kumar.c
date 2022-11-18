/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>

void sort(int *a,int *b,int *c){    //function for sorting the integers
    int x;
    int y;
    int z;

 if(*a>=*b && *a>=*c){              //if else loop for the same
     x=*a;
     if(*b>=*c){
     y=*b;
     z=*c;
     }
     else{
         y=*c;
         z=*b;
     }
 }
 else if(*b>=*c && *b>=*a){
     x=*b;
     if(*a>=*c){
     y=*a;
     z=*c;
     }
     else{
         y=*c;
         z=*a;
     }
 }
 else{
     x=*c;
     if(*a>=*b){
     y=*a;
     z=*b;
     }
     else{
         y=*b;
         z=*a;
     }
 }

   *a=z;
   *b=y;
   *c=x;
}

int main(){                                // Calling the main function
    int a;                                // declaring the variables
    int b;                                // declaring the variables
    int c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);            //taking inputs of variable from the user

printf("---Before function call----\n");
printf("Address of a=%p\n",&a);              //printing the addresses
printf("Address of b=%p\n",&b);
printf("Address of c=%p\n",&c);
printf("Values in a,b,c=%d,%d,%d",a,b,c);
sort(&a,&b,&c);                               // calling the function to sort-out the ouputs
 printf("\n---After function call----\n");
printf("Address of a=%p\n",&a);
printf("Address of b=%p\n",&b);
printf("Address of c=%p\n",&c);
printf("Values in a,b,c=%d,%d,%d",a,b,c);

    return 0;
}
