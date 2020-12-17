#include<stdio.h>

void main()

{
    int a,b,c,d,e,f,g,h,p,q;
    printf("Enter the coordinates of the bottom left corner of the rectangle(first x then y)\n");
    scanf("%d%d",&a,&b);
    printf("Enter the coordinates of the top right corner of the rectangle(first x then y)\n");
    scanf("%d%d",&c,&d);
    e=a;
    f=d;
    g=c;
    h=b;
    printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,e,f,c,d,g,h);
    printf("Enter coordinate of point to check whether it lies inside the rectangle(first x then y)\n");
    scanf("%d%d",&p,&q);
    if (p>a&&p<c)
    {
        if(q>b&&q<d)
            printf("The point (%d,%d) is inside the rectangle",p,q);
        else
            printf("The point (%d,%d) is outside the rectangle",p,q);
    }
    else
        printf("The point (%d,%d) is outside the rectangle",p,q);

    }
