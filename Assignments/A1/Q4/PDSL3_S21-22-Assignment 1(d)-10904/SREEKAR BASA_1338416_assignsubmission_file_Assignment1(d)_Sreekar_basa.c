/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 1(d)
*/
#include <stdio.h>
#include <math.h>
int main()
{ float x1,y1,x2,y2,x3,y3,a,b,c ;
  printf("Enter the coordinates of first point :");
  scanf("%f%f",&x1,&y1);
  printf("Enter the coordinates of second point :");
  scanf("%f%f",&x2,&y2);
  printf("Enter the coordinates of third point :");
  scanf("%f%f",&x3,&y3);
  a = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
  b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  c = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  printf("The sides of the triangle are : %f %f %f \n",a,b,c);
  if((a+b>c)&& (b+c>a))
  {if (a+c>b) {printf("This is valid \n");}
  a = a*a ;
  b = b*b ;
  c = c*c ;
  if((round(a)==round(b)+round(c))||(round(b)==round(a)+round(c)) || (round(c)==round(b)+round(a)) ) printf("This is right-angled triangle ");
  else if((a>b+c)||(b>a+c)||(c>a+b)) printf("This is obtuse-angled triangle ");
  else if((a<b+c)||(b<a+c)|| (c<a+b)) printf("This is acute-angled triangle ");
  }
    else printf("This is invalid \n");
}





