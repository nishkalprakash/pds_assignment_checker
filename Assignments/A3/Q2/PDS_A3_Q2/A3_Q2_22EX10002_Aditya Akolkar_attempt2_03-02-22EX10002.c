#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);

    if(a>=-999 && a<=999 && b>=-999 && b<=999)//Program to check if given input is within recommended range
    {
    if((a/100 !=0 && b/100 == 0) || (b/100 != 0 && a/100 == 0) || ((a/100 == 0) && (b/100 == 0) && (((a/10)%10 == 0) && (b/10)%10 != 0 )|| (((b/10)%10 == 0) && (a/10)%10 != 0 )))//Program to check if both entered numbers have same number of digits
    {
        printf("Wrong Input");
    }
     else
        {
            if((a%10 == (b/100)) && (b%10 == (a/100)) && ((a/10)%10) == ((b/10)%10) || ((a/100 == 0) && (b/100 == 0) && ((a/10) == b%10) && ((b/10) == a%10))) // program to check if given numbers are a perfect pair
            {
                printf("Perfect Pair");
            }
            else
            {
                printf("Not a Perfect Pair");
            }
    }
    }
    else{printf("Number should be between -999 and 999(Wrong input)");}
    return 0;

}

