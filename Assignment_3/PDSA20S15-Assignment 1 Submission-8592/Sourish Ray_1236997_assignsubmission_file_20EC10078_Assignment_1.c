#include <stdio.h>

int main()
{
    int a=0,b=0,c=0,d=0,p=0,q=0;
    int e=0,f=0,g=0,h=0;
    printf("Enter coordinates of the lower left point.\n\n");
    scanf("%d%d",&a,&b);
    printf("Enter coordinates of the top right point.\n\n");
    scanf("%d%d",&c,&d);

    e=a; f=d; g=c; h=b; // Could have been omitted

    printf("The 4 points clockwise are: (%d,%d),(%d,%d),(%d,%d) and (%d,%d).\n\n",a,b,e,f,c,d,g,h);

    printf("Enter coordinates of point to be checked.\n\n");
    scanf("%d%d",&p,&q);

    if ((a<p && p<c)&& (b<q && q<d)) // Condition for lying in interior.
        printf(" The point (%d,%d) lies inside the rectangle.\n\n",p,q);
    else
        printf("The point (%d,%d) does not lie inside the rectangle.\n\n",p,q);

    return 0;
} // Program ends.
