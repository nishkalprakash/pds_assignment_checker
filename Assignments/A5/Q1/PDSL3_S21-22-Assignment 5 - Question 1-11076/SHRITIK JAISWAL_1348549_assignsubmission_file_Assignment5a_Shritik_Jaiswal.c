//SHRITIK-JAISWAL
//ROLL:21BT30026 - SEC:3
//MAC-OS
#include<stdio.h>
#include<stdlib.h>
void function(int *a,int *b,int *c);
int main()
{
    //declaring integers abc and pointers x,y,z.
    int a;
    int b;
    int c;
    int *x;
    int *y;
    int *z;
    x=&a ;
    y=&b ;
    z=&c ;
    printf("Enter three numbers a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    //printing the adress and variables before the function call.
    printf("\n---Before the Function Call---\n");
    printf("Address of a : %p",x);
    printf("\n");
    printf("Address of b : %p",y);
    printf("\n");
    printf("Address of c : %p",z);
    printf("\n");
    printf("Values in a,b,c : %d,%d,%d\n",*x,*y,*z);
    //calling the function
    function(x,y,z);
    printf("\n");
    //printing the adress and variables after the function call.
    printf("---After the Function Call---");
    printf("\n");
    printf("Address of a : %p",x);
    printf("\n");
    printf("Address of b : %p",y);
    printf("\n");
    printf("Address of c : %p",z);
    printf("\n");
    printf("Values in a,b,c : %d,%d,%d\n",*x,*y,*z);
    return 0;
}
    //DECLARING FUNCTION FOR ARRANGING THE VARIABLES IN NON DECREASING ORDER AND 
    //CHANGING THE ADDRESS OF VARIABLE (if any)
void function(int *a,int *b,int *c)
{
    //defining temp to swap the numbers and storing them in non decreasing order
    int temporary1,temporary2;
    if (*a>*b)
    {
        temporary1=*a;
        *a=*b;
        *b=temporary1;
    }
    if(*b>*c)
    {
        temporary2=*b;
        *b=*c;
        *c=temporary2;
    }
    if (*a>*b)
    {
        temporary1=*a;
        *a=*b;
        *b=temporary1;
    }

}