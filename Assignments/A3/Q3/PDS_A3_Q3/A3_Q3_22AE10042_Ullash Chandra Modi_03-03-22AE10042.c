#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("A(x1,y1,z1) :");
    scanf("%d %d %d",&a,&b,&c);
    printf("A(x2,y2,z2) :");
    scanf("%d %d %d",&d,&e,&f);
    printf("A(x3,y3,z3) :");
    scanf("%d %d %d",&g,&h,&i);

    printf("A(x1,y1,z1) :(%d %d %d)",a,b,c);
    printf("\nA(x2,y2,z2) :(%d %d %d)",d,e,f);
    printf("\nA(x3,y3,z3) :(%d %d %d)",g,h,i);

    if ((((a-d)/(d-g))==((b-e)/(e-h)))&(((b-e)/(e-h))==((c-f)/(f-i))))
        printf("\nthe given three points are collinear.");
    else
        printf("\nthe given three points are not collinear.");





}
