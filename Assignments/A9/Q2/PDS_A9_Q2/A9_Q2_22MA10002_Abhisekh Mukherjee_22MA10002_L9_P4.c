/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:4
topic:structures
*/
#include<stdio.h>
#include<math.h>
// structure to store x,y coordinate and radius of a circle
struct circle{
int x;
int y;
float r;
};
// function to check the two circles are intersecting or not
int IsIntersectingCircle(struct circle s1,struct circle s2){
float a,b;
a=(s1.x-s2.x)*(s1.x-s2.x)+(s1.y-s2.y)*(s1.y-s2.y);
b= sqrt(a);
if(b<s1.r+s2.r){
return 1;
}
else return 0;
}
// main function
int main()
{
struct circle s1,s2;
printf("enter the x coordinate of the first circle\n");
scanf("%d",&s1.x);
printf("enter the y coordinate of the first circle\n");
scanf("%d",&s1.y);
printf("enter the radius of the first circle\n");
scanf("%f",&s1.r);
printf("enter the x coordinate of the second circle\n");
scanf("%d",&s2.x);
printf("enter the y coordinate of the second circle\n");
scanf("%d",&s2.y);
printf("enter the radius of the second circle\n");
scanf("%f",&s2.r);
int a=IsIntersectingCircle(s1,s2); // calling the function
if(a==1){
printf("the two circles intersect\n");
}
else printf("the two circles don't intersect\n");
return 0;
}






