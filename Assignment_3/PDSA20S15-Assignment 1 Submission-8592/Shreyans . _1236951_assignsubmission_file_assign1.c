#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,p,q;

    /* (e,f)   (c,d)

        (a,b)   (g,h)  */

    printf("value of a and b are ");
    scanf("%d %d",&a,&b);
    printf("value of c and d are ");
    scanf("%d %d",&c,&d);

    /*other corners are */
    e=a,f=d,g=c,h=b;
    printf("four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d) and (%d,%d)\n",a,b,c,d,e,f,g,h);

    printf("value of p and q i.e x and y coordinates to be checked are ");
    scanf("%d %d",&p,&q);

    if (p>a && p<c && q>b && q<d)
        printf("coordinates (%d,%d) is inside the rectangle",p,q);


    else
       printf("coordinates (%d,%d) is outside the rectangle",p,q);



    return 0;
}
