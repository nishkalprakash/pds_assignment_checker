//Shrey G Patel

//23CS10051


#include <stdio.h>

int main()

{

int a,b,c,d,x,y;

printf("Enter the coordinates of lower left corner:");

scanf("%d %d",&a,&b);

printf("Enter the coordinates of top right corner:");

scanf("%d %d",&c,&d);


if(a<c && b<d)

{

printf("Enter the coordinates of the test point:");

scanf("%d %d",&x,&y);


if((x-a>0 && y-b>0) && (c-x>0 && d-y>0))

printf("The point is inside the rectangle\n");

else if(x-a<0 || y-b<0 || x-c>0 || y-d>0)

printf("The point is outside the rectangle\n");

else if(x==a && y==b)

printf("Point is Bottom most left corner\n");

else if(x==a && y==d)

printf("Point is Top most left corner\n");

else if(x==c && y==b)

printf("Point is Bottom most right corner\n");

else if(x==c && y==d)

printf("Point is top most right corner\n");

else if(x==a && (y<d || y>b))

printf("Point is on left side\n");

else if(x==c && (y<d || y>b))

printf("Point is on right side\n");

else if(y==b && (x<c || x>a))

printf("Point is on Bottom side\n");

else if(y==d && (x<c || x>a))

printf("Point is on topmost side\n");
}

else

{printf("Ill rectangle\n");

return 0;}

return 0;

}
