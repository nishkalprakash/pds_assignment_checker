
/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 7
Description : program that will take the elements of a two-dimensional square array as input from user in row-major order, and print the elements in column-major order.*/


#include<stdio.h>

int main()    {

              int row,a1,a2,a3,a4,a5,a6,a7,a8,a9;

             
              printf("Enter the number of elements in one row\n");  //Taking input of elements in the row
              scanf("%d", &row);

              printf("Enter all the elements of the array in a row\n");
              scanf("%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);   //inputtin all the nine values in row form
 
              printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a1,a4,a7,a2,a5,a8,a3,a6,a9);    
    
return 0;
