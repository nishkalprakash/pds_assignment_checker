/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
LABTEST NO-1
Description :/* Printing n terms of the series using print_term function */



#include<stdio.h>

print_term( int t(n) )             //Defining a new function.

{


               int k,n;

               int t(0) = 0, t(1) = 1, t(2) = 2;                         //Initializing the given values.

              

               t(n) = 3 * t(n-1) * t(n-2) -2 *t(n-2) * t(n-3) +1;        //Given function


              printf("Enter the number of terms \n");                    //Asking the user to input the number till that the series terms get printed.

              scanf("%d", &k);


             return(print_term);

}

             int main()

{

             printf("The number of terms are : %d", t(n) );


             return 0;

}



