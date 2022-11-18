/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 5(a)
*/

#include <stdio.h>
void ascending(int *a,int *b,int *c) //function to arrange the numbers in non decreasing order
{
    int temp; //decalring a variable temp
    if (*a>*b) //exchanging the 2nd and 1st number if 1st number is greater than 2nd
    {
        temp=*a; 
        *a=*b;  
        *b=temp;
    }
    if(*b>*c) //exchanging the 2nd and 3rd number if 2nd number is greater than 3rd
    {
        temp=*b ;
        *b=*c;
        *c=temp;
    }
    if (*a>*b) //exchanging the 2nd and 1st number if 1st number is greater than 2nd
    {
        temp=*a; 
        *a=*b;  
        *b=temp;
    }
}
int main() //main function
{
    int a,b,c ; //declaring the variables which stores the three numbers
    int *x,*y,*z; //declaring three pointers
    x=&a ; //assigning pointer x as the address of a
    y=&b ; //assigning pointer y as the address of b
    z=&c ; //assigning pointer z as the address of c
    printf("Enter three numbers : "); //asking to enter the three numbers
    scanf("%d %d %d",&a,&b,&c); //taking in the values of three numbers
    printf("\n---Before Function Call---\n"); 
    printf("Address of a : %p\n",x); //printing the adress of a before calling the function
    printf("Address of b : %p\n",y); //printing the adress of b before calling the function
    printf("Address of c : %p\n",z); //printing the adress of c before calling the function
    printf("Values in a,b,c : %d,%d,%d\n",*x,*y,*z); //printing the values of a b c
    ascending(x,y,z); //calling the function to arrange the numbers
    printf("\n---After Function Call---\n");
    printf("Address of a : %p\n",x); //printing the adress of a after calling the function
    printf("Address of b : %p\n",y); //printing the adress of b after calling the function
    printf("Address of c : %p\n",z); //printing the adress of c after calling the function
    printf("Values in a,b,c : %d,%d,%d\n",*x,*y,*z); //printing values of a b c in non decreasing order
    return 0; //this is the return statement
}