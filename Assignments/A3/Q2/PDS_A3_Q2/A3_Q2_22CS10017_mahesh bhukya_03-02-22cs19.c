#include<stdio.h>
int main()
{
    int x,y,x1;
    printf("enter x,y", x,y);
    scanf("%d%d", &x,&y);

    if(-999<=x&& x<=999 && -999<=y&& y<=999)
    {

        printf(" x,y are in the range [-999,999]");
        x1=x%10;
        printf("x1=%d",x1);

    }



    else
    {
        printf("wrong input");
    }
}


