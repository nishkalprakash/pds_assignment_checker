//Name:Shine Srivastava
//Roll no.:23MF3Im17



#include<stdio.h>
int main()
{
  int r1,r2,r3,r4,r5;
  float m11,m12,m13,m14,m15,m21,m22,m23,m24,m25,m31,m32,m33,m34,m35,m41,m42,m43,m44,m45,m51,m52,m53,m54,m55;
  
  printf("Enter Details of student 1(Roll no. and marks in 5 subjects)\n");
  scanf("%d %f %f %f %f %f",&r1,&m11,&m12,&m13,&m14,&m15);

   printf("Enter Details of student 2(Roll no. and marks in 5 subjects)\n");
  scanf("%d %f %f %f %f %f",&r2,&m21,&m22,&m23,&m24,&m25);

   printf("Enter Details of student 3(Roll no. and marks in 5 subjects)\n");
  scanf("%d %f %f %f %f %f",&r3,&m31,&m32,&m33,&m34,&m35);

   printf("Enter Details of student 4(Roll no. and marks in 5 subjects)\n");
  scanf("%d %f %f %f %f %f",&r4,&m41,&m42,&m43,&m44,&m45);

   printf("Enter Details of student 5(Roll no. and marks in 5 subjects)\n");
  scanf("%d %f %f %f %f %f",&r5,&m51,&m52,&m53,&m54,&m55);

  printf("%d\t%f\t%f\t%f\t%f\t%f",r1,m11,m12,m13,m14,m15);
  printf("%d\t%f\t%f\t%f\t%f\t%f",r2,m21,m22,m23,m24,m25);
  printf("%d\t%f\t%f\t%f\t%f\t%f",r3,m31,m32,m33,m34,m35);
  printf("%d\t%f\t%f\t%f\t%f\t%f",r4,m41,m42,m43,m44,m45);
  printf("%d\t%f\t%f\t%f\t%f\t%f",r5,m51,m52,m53,m54,m55);

  return 0;
}
