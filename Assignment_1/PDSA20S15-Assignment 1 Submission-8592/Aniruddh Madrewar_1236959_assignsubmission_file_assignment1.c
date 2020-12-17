#include<stdio.h>
int main()
{
 int a,b,c,d,e,f,g,h,p,q;
 printf("Enter The Coordinates(a,b)of the bottom left corner of the rectangle\n");
 scanf("%d%d",&a,&b);
 printf("Enter The Coordinates(c,d)of the top right corner of the rectangle\n");
 scanf("%d%d",&c,&d);
 g=a,h=d,e=c,f=b;
 printf("The Four Corners of the rectangle are(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,g,h,c,d,e,f);
 printf("Enter the coordinate which you want to check wheather it lies in the rectangle or not\n");
 scanf("%d%d",&p,&q);
 if((p>a&&p<c)&&(q>b&&q<d))
 {
     printf("The point(%d,%d)lies inside the rectangle",p,q);
 }
    else{printf("The point(%d,%d)does not lie inside the rectangle",p,q);}
}
