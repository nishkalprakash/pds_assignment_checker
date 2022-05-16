//gunnu hemanth
//21BT30006
//SEC-3

#include<stdio.h>
#include<math.h>


float intersectionx(int a,int b,int c,int d,int f,int g)//function to find x- co ordinate of intersection point
{
    float x;
    x=((f*c)-(b*g))/((a*f)-(b*d));
    return x;
}
float intersectiony(int a,int b,int c,int d,int f,int g)//function to find y- co ordinate of intersection point
{
    float y;
    y=((a*g)-(d*c))/((a*f)-(b*d));
    return y;

}

float length(float a,float b,float c,float d)//function to find length of a side of triangle
{
int l;
l=sqrt((pow(a-c,2)+pow(b-d,2)));
return l;
}
floar area(float a,float b,float c,float d,float e,float f)
{
    floar A;
    A=(a*d)l-(a*f)-(b*c)-(e*d)+(c*f)+(b*e);
    return A;
}


int main()
{
    int a1,b1,c1,a2,b2,c2,a3,b3,c3;
float x1,y1,x2,y2,x3,y3,area,l1,l2,l3;
printf("enter coefficients of line 1\n");
scanf("%d%d%d",&a1,&b1,&c1);

printf("enter coefficients of line 2\n");
scanf("%d%d%d",&a2,&b2,&c2);
printf("enter coefficients of line 3\n");
scanf("%d%d%d",&a3,&b3,&c3);


   x1=intersectionx(a1,b1,c1,a2,b2,c2);//execution of functions
   y1=intersectiony(a1,b1,c1,a2,b2,c2);
   printf("the intersection of l1,l2 is %f,%f\n",x1,y1);

   x2=intersectionx(a3,b3,c3,a2,b2,c2);
   y2=intersectiony(a3,b3,c3,a2,b2,c2);//execution of functions
   printf("the intersection of l3,l2 is %f,%f\n",x2,y2);

   x3=intersectionx(a3,b3,c3,a1,b1,c1);
   y3=intersectiony(a1,b1,c1,a3,b3,c3);//execution of functions
   printf("the intersection of l3,l1 is %f,%f\n",x3,y3);

   l1=length(x1,y1,x2,y2);
   l2=length(x3,y3,x2,y2);//execution of functions
   l3=length(x3,y3,x1,y1);
   printf("the value of l1 is %f\n",l1);
   printf("the value of l2 is %f\n",l2);
   printf("the value of l3 is %f\n",l3);
area=area(x1,y1,x2,y2,x3,y3);
printf("the area of triangle is %f\n",area);

return(0);
}
