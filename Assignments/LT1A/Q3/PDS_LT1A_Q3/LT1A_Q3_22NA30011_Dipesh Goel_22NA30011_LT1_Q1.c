#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Lab Test
Description : Checking the type of triangle
*/

float length_of_side(int a1, int b1, int a2, int b2)
{
    float temp;
    temp=sqrt(pow((a1-a2),2)+pow((b1-b2),2));
    return temp;
}

int main()                          // Calling the main function
{
    int x1, x2, x3, y1, y2, y3;        // Declaring variables

    float a,b,c;
    float max_side,min_side,side;

    printf("Enter coordinates 1 : ");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates 2 : ");
    scanf("%d %d",&x2,&y2);
    printf("Enter coordinates 3 : ");
    scanf("%d %d",&x3,&y3);

    a=length_of_side(x1,y1,x2,y2);
    b=length_of_side(x2,y2,x3,y3);
    c=length_of_side(x3,y3,x1,y1);

   

    if (a>=b && b>=c)
    {
    	max_side=a;
    	side=b;
    	min_side=c;
    }

    else if (a>=c && c>=b)
    {
    	max_side=a;
    	side=c;
    	min_side=b;
    }


	else if (b>=a && a>=c)
    {
    	max_side=b;
    	side=a;
    	min_side=c;
    }

    else if (b>=c && c>=a)
    {
    	max_side=b;
    	side=c;
    	min_side=a;
    }

    else if (c>=a && a>=b)
    {
    	max_side=c;
    	side=a;
    	min_side=b;
    }

    else if (c>=b && b>=a)
    {
    	max_side=c;
    	side=b;
    	min_side=a;
    }

   printf("%f,%f,%f\n",a,b,c);
   printf("%f,%f,%f\n",max_side,side,min_side);

   if (max_side<(side+min_side)) 
   {
   	if (pow(max_side,2)=pow(min_side,2)+pow(side,2)) printf("Right Angled\n");
   }
   else printf("Invalid");





    return 0;
}

