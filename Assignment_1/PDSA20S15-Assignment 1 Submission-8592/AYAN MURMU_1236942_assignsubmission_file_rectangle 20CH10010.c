#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,x,y;

    printf("Enter bottom left coordinate of the rectangle\n");
    scanf("%a%b",&a,&b);

    printf("Enter bottom right coordinate of the rectangle\n");
    scanf("%c%d",&c,&d);

    printf("The four corners of the rectangle are (a,b),(a,d),(c,b),(c,d)\n",a,b,c,d);

    printf("Input coordinates p and q\n");
    scanf("%x%y",&x,&y);

    if ((a<x<c) && (b<y<d))
    {
         printf("the point (%x,%y) is inside the rectangle\n", x,y);
    }
    else
    {
         printf("the point (%x,%y) is not inside the rectangle\n", x,y);
    }
    return o;
