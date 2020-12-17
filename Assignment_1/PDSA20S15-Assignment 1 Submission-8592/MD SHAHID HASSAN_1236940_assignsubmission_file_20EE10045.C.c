#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j;
printf("inter the bottom-left coordinates:\n");
scanf("%d%d",&a,&b);
printf("the bottom-left coordinates are %d,%d\n"a,b);

printf("enter the top-right coordinates:\n");
scanf("%d%d",&c,&d);

printf("the top -right coordinates are %d%d\n"c,d);
e=c,f=b,g=a,h=d;

printf("the coordinates of the rectangle are {%d,%d},{%d,%d},{%d,%d},{%d,%d}\n",a,b,g,h,c,d,e,f);
printf("enter the cordinates pont of the point to be checked:\n");
scanf(%d,%d\n,&i,&j);
{
    if {(2<i<7} && {(1<j<5)} printf{"the point lies inside the rectangle"};

}
else
    printf("the point lies outside the rectangle")

return 0;
}
