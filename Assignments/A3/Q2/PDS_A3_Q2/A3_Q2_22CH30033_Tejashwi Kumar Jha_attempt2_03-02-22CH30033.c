#include<stdio.h>
int main()
{

    int a ,b,x,y,p,q;
    printf("Enter 2 numbers in range [-999,999]:\n");
    scanf("%d %d",&a,&b);


    x = (a/100 - (b%100)%10) + (((a%100)/10)-((b%100)/10)) + (b/100 - (a%100)%10);
    y = (a/10 - b%10) + ( b/10 - a%10);


    if (a > 999 || a < -999 || b > 999 || b < -999)
    {
        printf ("Numbers are not in range.\n");
    }
    else if (a/100 == 0 ^ b/100 == 0)
    {
        printf("Wrong input \n");
    }
    else if (a*b < 0)
    {
        printf("Not a perfect pair");
    }
    else if (a/100 == 0 && b/100 == 0 && y == 0)
    {
        printf("Perfect pair\n");
    }
    else if(x==0)
    {
        printf("Perfect pair");
    }
    else
    {
       printf("Not a perfect pair");
    }
    return 0;
}
