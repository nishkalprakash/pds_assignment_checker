#include<stdio.h>
int main()
{
    int X,Y,a1,a2,a3,b1,b2,b3,b4;
    printf("Enter the two integers ");
    scanf("%d%d",&X,&Y);


    if (X<100 && Y<100)
    {
        int a1,a2,a3;
        a1 = X%10;
        a2 = (X-a1)/10;
        a3 = 10*a1 + a2;
        if (Y==a3)
        {
            printf("Perfect pair");

        }
        else
        {

            printf("Not a perfect pair");

        }
    }
    else if (X>=100 && Y>=100)
    {
        int b1,b2,b3,b4;
        b1=X%10;
        b2=(X%100-b1)/10;
        b3=(X-b1-10*b2)/100;
        b4= 100*b1+10*b2+b3;
        if (Y==b4)
        {
            printf("Perfect pair");

        }
        else
        {
            printf("Not a perfect pair");
        }
    }
    else if (((X>=100)&&(Y<=100))||((X<=100)&&(Y>=100)))
    {
        printf("Wrong input");
    }
    else
    {
        printf("wrong input");
    }
      return 0;
}
