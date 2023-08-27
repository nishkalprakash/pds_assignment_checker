//Name:Shrey G Patel

//Roll No.:23CS10051

//The rectangle area perimeter problem


#include <stdio.h>

#include <stdlib.h>      //included stdlib.h to use abs() function
int main()
{

int a,b,c,d,area,perim;

float p,q;

   printf("Enter the coordinates of first point [The bottom left most corner]:");

   scanf("%d %d",&a,&b);

   printf("Enter the coordinates of second point [The top right most corner]:");

   scanf("%d %d",&c,&d);

   area=abs((c-a)*(d-b));

   perim=2*(abs(c-a)+abs(d-b));

   printf("The area is %d and The perimeter is %d \n",area,perim);

p=(a+c)/2.0;     //typecasting

q=(b+d)/2.0;

   printf("The coordinates of point of intersection of the diagonals is (%.2f,%.2f) \n",p,q);  //truncating to two decimal places by using .2f

return 0;}
