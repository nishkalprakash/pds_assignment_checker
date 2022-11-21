/*this program reads two characters using scanf and print the characters on the screen*/

#include<stdio.h>
int main()
{
     char c1, c2;    //two variables to store any character
     printf("enter two characters without using space:");
     scanf("%c%c", &c1, &c2);  //read any two characters
     printf("%c%c\n", c1,c2);//print the characters
     return 0;
}
