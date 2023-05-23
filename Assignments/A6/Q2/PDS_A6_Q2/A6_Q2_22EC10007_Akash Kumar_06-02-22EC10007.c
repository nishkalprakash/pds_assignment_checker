/*
Section 2
Roll number : Akash Kumar
Assignment 6
Question 2
Description : Versatility of scanf()
*/

#include <stdio.h>
#include <string.h>


void abc()
{
    char str[100], str1[20], str2[30];

    int x = scanf("%19s %29s", str1, str2);
    printf("x : %d\n", x);
    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
}

int main()
{

    int n1;
    long int n2;
    long long int n3;
    float n4;
    char c1;
    char str[10];
    char fm[6];


    int f = 0;

    while (f == 0)
    {

    printf("Enter the format specifier\n");
    scanf("%s", fm);

    if ( fm[0] == '%' && fm[1] == 'd')
    {
        printf("Enter an integer for int type : ");
        scanf("%d", &n1);
        printf("Entered : %d\n", n1);
        f = 1;
    }

    else if ( fm[0] == '%' && fm[1] == 'l' && fm[2] == 'd')
    {
        printf("Enter an integer for long int type : ");
        scanf("%ld", &n2);
        printf("Entered : %ld\n", n2);
        f = 1;

    }

    else if ( fm[0] == '%' && fm[1] == 'l' && fm [2] == 'l' && fm[3] == 'd')
    {
        printf("Enter an integer for long long int type : ");
        scanf("%lld", &n3);
        printf("Entered : %lld\n", n3);
        f = 1;
    }


    else if (fm[0] == '%' && fm[1] == 'f')
    {
        printf("Enter a decimal number : ");
        scanf("%f", &n4);
        printf("Entered : %f\n", n4);
        f = 1;
    }

    else if (fm[0] == '%' && fm[1] == 'c')
    {
        printf("Enter a letter : ");
        scanf("%c", &c1);
        printf("Entered : %c\n", c1);
        f = 1;
    }


    else if (fm[0] == '%' && fm[1] == 's')
    {
        printf("Enter a combination of characters : ");
        scanf("%s", str);
        printf("Entered : %s\n", str);
        f = 1;
    }

    if(f==0)
    {
        printf("Invalid Input \nTry again\n");
    }

    } // while loop ends here

    abc();



    return 0;
}
