//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
   int a,b,c,d;
   int x,y;
   float p,q;
   printf("Type the coordinates of bottom left corner of the rectangle\n");
   scanf("%d %d",&a ,&b);
   printf("Type the coordinates of the top right corner of the rectangle\n");
   scanf("%d %d",&c ,&d);
   printf("The coordinates of the corners of the rectangle are (a=%d,b=%d),(c=%d,d=%d)\n",a,b,c,d);
   x=c-a;
   y=d-b;
   printf("The area of the rectangle=%d\nThe perimeter of the rectangle=%d\n",x*y,2*(x+y));
   p=(float)(a+c)/2;
   q=(float)(b+d)/2;
   printf("The point of intersection of the diagonals of the rectangle=(p=%f,q=%f)\n",p,q);
   return 0;
}
   
   
   
  
