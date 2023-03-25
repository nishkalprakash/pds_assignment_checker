#include<stdio.h>

int main()
{
    int X,Y;
    printf("Enter the numbers in the range[-999,999]\n");
    scanf("%d%d",&X,&Y);
    int a,b,c;
    a=X%10;
    b=(X%100-X%10)/10;
    c=(X%1000-X%100-X%10)/100;
    if(Y==c*100+b*10+a*1)
    {
        printf("perfect pair");
    }
    else
    {
        printf("Wrong pair");
    }
    return 0;
}
