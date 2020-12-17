#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,p,q;
    printf("enter the coordinates of bottom left corner of rectangle \n");
    scanf("%d%d",&a,&b);
    printf("enter the coordinates of top right corner of rectangle \n");
    scanf("%d%d",&c,&d);
    printf("The four corners of rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d) \n",a,b,a,d,c,d,c,b);
    printf("Enter the coordinates of point P \n");
    scanf("%d%d",&p,&q);
    if(p>a && p<c && q>b && q<d)
       printf("The point (p,q) is inside the rectangle \n");
    else printf("The point (p,q) is not inside the rectangle \n");
    return(0);


}
