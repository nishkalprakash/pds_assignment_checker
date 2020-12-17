#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,p,q;
printf("please enter the coordinates of botom left corner .\n");
scanf("%d%d",&a,&b);
printf("now enter the coordinates of the top right corner.\n");
scanf("%d%d",&e ,&f);
c=a;
g=e;
d=f;
h=b;
printf("the four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a ,b ,c ,d ,e ,f ,g ,h);
printf("now enter the coordinates of a point that is to be checked.\n");
scanf("%d%d",&p ,&q);
if (p>a&&p<e&&p>b&&q<f)
{
    printf("the point (%d,%d) lies inside the rectangle.",p ,q);
}
else
{
    printf("the point (%d,%d) is not inside the rectangle",p ,q);
}
return 0;
}
