/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Test set: A
* Question 3
* Description : checks whether the triangle is acute, obtuse or right angled
*/
#include<stdio.h>
#include<math.h>
int main()
{
 int x1, x2, x3, y1, y2, y3;//co ordinates of the three corners of triangle

 
 printf("enter three co ordinates:");
 scanf("%d %d", &x1, &y1);
 scanf("%d %d", &x2, &y2);
 scanf("%d %d", &x3, &y3);

 float a, b, c, p, q, r;

 p=pow((x2-x1),2)+ pow((y2-y1),2);//temporary variable to store value of summation
 a = sqrt(p);//calculating the length of side BC
 q=pow((x3-x2),2)+pow((y3-y2),2);//temporary variable to store value of summation
 b = sqrt(q);//calculating the length of side AC
 r=pow((x3-x1),2)+ pow((y3-y1),2);//temporary variable to store value of summation
 c = sqrt(r);//calculating the length of side AB
 
 
 if((a<(b+c))&&(b<(c+a))&&(b<(a+b)))//sum of any two sides should be greater than the third side
 {
  printf("valid triangle");
 
   if((a*a= b*b + c*c)||(b*b= a*a + c*c)||(c*c= b*b + a*a))
     printf("right angled");
   else if()
     printf("obtuse angled");
   else
    printf("acute angled");
 }
 else
 {
 printf("invalid triangle");
}
return 0;
}
     

   
 
