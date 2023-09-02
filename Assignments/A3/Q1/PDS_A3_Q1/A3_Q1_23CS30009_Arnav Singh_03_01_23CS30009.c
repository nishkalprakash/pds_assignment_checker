//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int roll1,roll2,roll3,roll4,roll5;
  int m11,m12,m13,m14,m15;   //Variable of format m<student><subject>
  int m21,m22,m23,m24,m25;
  int m31,m32,m33,m34,m35;
  int m41,m42,m43,m44,m45;
  int m51,m52,m53,m54,m55;
  printf("Enter details for student 1:\n ");
  scanf("%d%d%d%d%d%d", &roll1, &m11,&m12,&m13,&m14,&m15);
  printf("Enter details for student 2:\n ");
  scanf("%d%d%d%d%d%d", &roll2, &m21,&m22,&m23,&m24,&m25);
  printf("Enter details for student 3:\n ");
  scanf("%d%d%d%d%d%d", &roll3, &m31,&m32,&m33,&m34,&m35);
  printf("Enter details for student 4:\n ");
  scanf("%d%d%d%d%d%d", &roll4, &m41,&m42,&m43,&m44,&m45);
  printf("Enter details for student 5:\n ");
  scanf("%d%d%d%d%d%d", &roll5, &m51,&m52,&m53,&m54,&m55);
  printf("%d\t%3d\t%3d\t%3d\t%3d\t%3d\n",roll1,m11,m12,m13,m14,m15);
  printf("%d\t%3d\t%3d\t%3d\t%3d\t%3d\n",roll2,m21,m22,m23,m24,m25);
  printf("%d\t%3d\t%3d\t%3d\t%3d\t%3d\n",roll3,m31,m32,m33,m34,m35);
  printf("%d\t%3d\t%3d\t%3d\t%3d\t%3d\n",roll4,m41,m42,m43,m44,m45);
  printf("%d\t%3d\t%3d\t%3d\t%3d\t%3d\n",roll5,m51,m52,m53,m54,m55);
  return 0;
}
