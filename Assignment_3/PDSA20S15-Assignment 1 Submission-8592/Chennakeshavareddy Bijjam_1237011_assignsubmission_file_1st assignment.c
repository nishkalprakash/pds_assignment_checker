#include <stdio.h>


int main()
{
    int a,b,c,d,p,q ;

    scanf("%i %i", &a,&b);

    scanf("%i %i",&c,&d);

    printf("the four corners are ");printf("(%i , %i)", a, b);printf("(%i , %i)", a, d);printf("(%i , %i)", c, d);printf("(%i , %i)", c, b);

     scanf("%i %i",&p,&q);

    if ( p>a && p<c && q<d && q>b)
       {
           printf("The point ");printf("(%i , %i)",p,q);printf(" is inside the rectangle");
       }
    else
        {
             printf("The point ");printf("(%i , %i)",p,q);printf(" is outside the rectangle");
        }

    return 0;
}
