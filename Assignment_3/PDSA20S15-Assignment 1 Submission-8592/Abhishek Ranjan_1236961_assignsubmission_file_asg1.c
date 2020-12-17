#include<stdio.h>

int main()

{
    int a,b;

    printf("Give the coordinates (a,b) of the bottom-left corner: \n");
    scanf("%d%d", &a,&b);

    int c,d;

    printf("Give the coordinates (c,d) of the top-right corner: \n");
    scanf("%d%d", &c,&d);

    /*top left corner*/
    int e,f;

    e=a;
    f=d;

    /*bottom right corner*/
    int g,h;

    g=c;
    h=b;

    printf("The four coordinates of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n", a,b,e,f,c,d,g,h);


    printf("Enter the coordinates of the point (p,q) to be checked: \n");

    int p,q;
    scanf("%d%d", &p,&q);

    if(a<p && p<c && b<q && q<d)
        printf("The point (%d,%d) lies inside the rectangle", p,q);
    else
        printf("The point (%d,%d) does not lie inside the rectangle", p,q);

    return 0;


}
