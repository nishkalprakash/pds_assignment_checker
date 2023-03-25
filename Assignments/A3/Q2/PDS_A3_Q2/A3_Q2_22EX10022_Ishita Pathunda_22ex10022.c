#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y:");
    scanf("%d%d",&x,&y);
    int d1=x%10;
    x=x/10;
    int d2=x%10;
    x=x/10;
    int d3=x%10;
    x=x/10;
    printf("%d %d %d",d1,d2,d3);
    int d11=y%10;
    y=y/10;
    int d22=y%10;
    y=y/10;
    int d33=y%10;
    y=y/10;
    printf("%d %d %d",d11,d22,d33);



    if (x>-999 && x<999 && y<999 && y>-999){


        printf("perfect pair");

    }
    else printf("wrong input");


    return 0;
}
