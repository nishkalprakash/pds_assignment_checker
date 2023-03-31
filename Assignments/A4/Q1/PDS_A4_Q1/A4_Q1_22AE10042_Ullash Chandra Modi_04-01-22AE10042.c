/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description- Program to take a password and check whether it is valid or not
*/
#include <stdio.h>
int main ()
{
    char a;
    int b,c=0,d,e;

    printf("Enter a password : ");
    do{
        scanf("%c",&a);
        b=a;
        if (c==0);
        {if ((b>=65)&&(b<=90)){d=1;}}
        if ((b>=48)&&(b<=57)){e=2;}

        c++;


    }while (a!='\n');
}
