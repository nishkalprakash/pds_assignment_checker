#include <stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("Enter the Buttom Left point point\n");
scanf("%d%d",&a,&b);
printf("Enter the Top Right point\n");
scanf("%d%d",&c,&d);
printf("the points of the rectangle are: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,c,b,c,d,a,d);
printf("Enter the point to be checked:\n");
scanf("%d%d",&e,&f);
if(a<e&&e<c)
{
 if (b<f&&f<d)
    printf("The point (%d,%d) is inside the rectangle. \n",e,f);
else
    printf("The point (%d,%d) is either outside or on the rectangle\n",e,f);
}
else {
    printf("The point (%d,%d) is either outside or on the rectangle.\n",e,f);
}
}
