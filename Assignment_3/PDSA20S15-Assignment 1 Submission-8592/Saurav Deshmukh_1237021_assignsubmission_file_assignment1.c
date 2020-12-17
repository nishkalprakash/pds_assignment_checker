#include <stdio.h>
int main()
{
int a,b,c,d,p,q;
printf("enter the coordinates of bottom left corner of rectangle\n");
scanf("%d%d",&a,&b);
printf("enter the coordinates of top right corner of rectangle\n");
scanf("%d%d",&c,&d);
printf("the four corners of the given rectangle starting from bottom left corner in clockwise direction are\n");
printf("(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,a,d,c,d,c,b);

printf("enter the coordinates to be checked\n");
scanf("%d%d",&p,&q);

if((a<p)&&(p<c)&&(b<q)&&(q<d))
{
    printf("the point (%d,%d) is inside the given rectangle\n",p,q);
}
else
{
    printf("the point (%d,%d) is NOT inside the given rectangle\n",p,q);
}

}
