/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Test:1
Question no:2
description:triangle type*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float x1,y1;
	float x2,y2;
	float x3,y3;
	int flag=0;//validity of triangle
	printf("Enter co-ordinates:");
	scanf("%f %f",&x1,&y1);
	printf("Enter co-ordinates:");
	scanf("%f %f",&x2,&y2);
	printf("Enter co-ordinates:");
	scanf("%f %f",&x3,&y3);
	float a,b,c;//sides of triangle
	a=pow(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),0.5);
	b=pow(((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)),0.5);
	c=pow(((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)),0.5);
	if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b))
	{
	     printf("Invalid triangle");flag=1;
	}
	float m1,m2,m3;//slope
	float tan1 ,tan2,tan3;//tangents of slope
	if(flag==0)//if triangle is valid
	{
	    if((x1==x2)||(x2==x3)||(x1==x3))
	    {
	         m1=(x2-x1)/(y2-y1);
	         m2=(x2-x3)/(y2-y3);
	         m3=(x3-x1)/(y3-y1);
	         if(((m1*m2)==-1)||((m1*m3)==-1)||((m3*m2)==-1))
	         {
	             printf("Right angled triangle");
	         }
	         else
	         {
	              tan1=(1+m1*m2)/(m2-m1);
	              tan2=(1+m2*m3)/(m2-m3);
	              tan3=(1+m1*m3)/(m3-m1);
	              if(tan1<0||tan2<0||tan3<0)
	              printf("Obtuse angled Triangle");//if cotangent value less than 0 obtuse
                      else
                      printf("acute angled Triangle");
	         }
	    }
	    else
	    {
	          m1=(y2-y1)/(x2-x1);
	         m2=(y2-y3)/(x2-x3);
	         m3=(y3-y1)/(x3-x1);
	         if(((m1*m2)==-1)||((m1*m3)==-1)||((m3*m2)==-1))
	         {
	             printf("Right angled triangle\n");
	         }
	         else
	         {
	              tan1=(m2-m1)/(1+m1*m2);
	              tan2=(m2-m3)/(1+m2*m3);
	              tan3=(m3-m1)/(1+m1*m3);
	              if(tan1<0||tan2<0||tan3<0)//if tangent value less than 0 obtuse
	              printf("Obtuse angled Triangle\n");
                      else
                      printf("acute angled Triangle\n");
	         }
	    }
	}
}
