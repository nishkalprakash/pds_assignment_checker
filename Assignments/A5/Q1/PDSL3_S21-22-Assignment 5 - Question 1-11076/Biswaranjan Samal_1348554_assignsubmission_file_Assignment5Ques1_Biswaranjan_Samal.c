/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 5 ,Question: 1
*/


#include<stdio.h>

int sortfunc(int* m,int* n,int* r); //funcion to arrange the numbers

void swap(int* x, int* y);  //swap two number

int main()
{

    int a,b,c;   //declaration,assignment to variables and pointer to them
    int* p;
    int* q;
    int* r;
    p=&a,q=&b,r=&c;

    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("------ Before Function Call ------\n");   //printing of address and numbers stored in them  before calling the fucntion
    printf("Address of a =%d \n",p);
    printf("Address of b =%d \n",q);
    printf("Address of c =%d \n",r);
    printf("Values in a,b,c =%d,%d,%d\n",*p,*q,*r);

    sortfunc(p,q,r);  //pass via reference to the function
 //printing of address and numbers stored in them  adress calling the fucntion
    printf("------ After Function Call ------\n");
    printf("Address of a =%d \n",p);
    printf("Address of b =%d \n",q);
    printf("Address of c =%d \n",r);
    printf("Values in a,b,c =%d,%d,%d\n",*p,*q,*r);


    return 0;
}

int sortfunc(int* m,int* n,int* r)
{
    if(*m > *n)
        swap(m, n);       // if the condition is satisfied two number are swapped and by swapping we will arrange the number in the order
    if(*m > *r)
        swap(m,r);
    if(*n > *r)
        swap(n,r);
};
void swap(int* x, int* y)
{
    int temp;     //swaps two number by calling them via reference
    temp = *x;
    *x = *y;
    *y = temp;
}

