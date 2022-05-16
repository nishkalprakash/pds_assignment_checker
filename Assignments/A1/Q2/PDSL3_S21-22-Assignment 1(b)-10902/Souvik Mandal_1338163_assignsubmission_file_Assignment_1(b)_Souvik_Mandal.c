/*
Name : Souvik Mandal
Roll No : 21MF10036
Section : 3
Group : 5
Department: Manufacturing Science
Package : Code Blocks
Operating System : Windows
*/

#include <stdio.h>
int main()
{
    int num;
    int num_reverse = 0;
    printf("Enter the 3 digit positive number : ");
    scanf("%d",&num); //number is entered by user

    num_reverse = num_reverse*10 + num % 10;  //it is taking the one's place and converting it into hundred's place

    num = num/10;
    num_reverse = num_reverse * 10 + num % 10; // It is taking the tenth place

    num = num/10;
    num_reverse = num_reverse * 10 + num % 10;// It is taking the hundredth place and converting it into one's place

    printf("Reverse of 3 digit number is : %d",num_reverse);

    return 0;

}
