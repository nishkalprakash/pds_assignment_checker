/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/

#include<stdio.h>

void func(int*x,int*y,int*z)
{
   int temp;
   if(*x<*y && *x<*z)
   {
       if(*y<*z) {return ;}
       else {temp=*y; *y=*z; *z=temp;}
   }
   if(*y<*x && *y<*z)
   {
       if(*x<*z) {temp=*x; *x=*y; *y=temp;}
       else {temp=*x; *x=*y; *y=*z; *z=temp;}

   }
   if(*z<*x && *z<*y)
   {
       if(*x<*y) {temp=*x; *x=*z; *z=*y; *y=temp;}
       else {temp=*x; *x=*z; *z=temp;}
   }
}

int main()
{
    int a,b,c;

    printf("Enter three integers: \n");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n\n-----Before function call-----");
    printf("\nAddress of a = %d",&a);
    printf("\nAddress of b = %d",&b);
    printf("\nAddress of c = %d",&c);
    printf("\nValues in a,b,c: %d, %d, %d",a,b,c);

    func(&a,&b,&c);
    printf("\n\n-----After function call-----");
    printf("\nAddress of a = %d",&a);
    printf("\nAddress of b = %d",&b);
    printf("\nAddress of c = %d",&c);
    printf("\nValues in a,b,c: %d, %d, %d\n",a,b,c);


    return 0;


}
