#include<stdio.h>
int main()
{
float a1,b1,c1,a2,b2,c2,a3,b3,c3,temp1;
printf("enter value of point A1");
scanf("%f%f%f",&a1,&b1,&c1);

printf("enter value of point B1");
scanf("%f%f%f",&a2,&b2,&c2);

printf("enter value of point C1");
scanf("%f%f%f",&a3,&b3,&c3);
printf("A(%f,%f,%f)\n",a1,b1,c1);
printf("B(%f,%f,%f)\n",a2,b2,c2);
printf("C(%f,%f,%f)\n",a3,b3,c3);
//printing of points on the screen
temp1=a1*((b2*c3)-(b3*c2))-b1*((a2*c3)-(a3*c2))+c1*((a2*b3)-(a3*b2));//to check points are collinear the value of determinant formed by them should be 0
if(temp1==0)
{
    printf("points are collinear");
}
else{
    printf("not collinear");
}
/*if(a1>b1>c1)//to printA>B>N
{printf("A(%f,%f,%f)>B(%f,%f,%f)>C(%f,%f,%f)",a1,a2,a3,b1,b2,b3,c1,c2,c3);}
if(b1>c1>a1)//to print
{printf("B(%f,%f,%f)>C(%f,%f,%f)>A(%f,%f,%f)",b1,b2,b3,c1,c2,c3,a1,a2,a3);}
if(c1>b1>a1)

 {printf("C(%f,%f,%f)>B(%f,%f,%f)>A(%f,%f,%f)",c1,c2,c3,b1,b2,b3,a1,a2,a3);}*/
 if(a1>b1&&b1>c1)
 {printf("A>B>C");}
 if(b1>a1&&a1>c1)
 {
     printf("B>A>C");
 }
 if(c1>a1&&a1>b1)
 {
     printf("C>A>B");
 }




return 0;
}


