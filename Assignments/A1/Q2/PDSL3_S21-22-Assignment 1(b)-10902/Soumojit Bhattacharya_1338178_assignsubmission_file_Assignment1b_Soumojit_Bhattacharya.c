/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>


int main()
{
    int a,b;
    //accepting a 3 digit number
    printf("enter a 3 digit number:");
    scanf("%d", &a);
    /*(a%10) is the first digit of a
    (a/10)%10 is the second digit of a
    (a/100) is the third digit of a*/
    b=a%10*100+((a/10)%10)*10+a/100;
    //printing reversed 3 digit number
    printf("Reverse number = %d", b);
return 0;
}