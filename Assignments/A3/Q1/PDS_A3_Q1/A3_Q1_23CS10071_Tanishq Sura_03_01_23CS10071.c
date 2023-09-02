//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int roll1,roll2,roll3,roll4,roll5;
  int m11,m12,m13,m14,m15,m21,m22,m23,m24,m25;
  int m31,m32,m33,m34,m35,m41,m42,m43,m44,m45,m51,m52,m53,m54,m55;//declared all roll nos and marks as int

  printf("enter details for student 1(roll no. , marks in the 5 subjects)\n");//asked for details
  scanf("%d %d %d %d %d %d",&roll1,&m11,&m12,&m13,&m14,&m15);//took all details for student 1
  printf("enter details for student 2(roll no. , marks in the 5 subjects)\n");//asked for det
  scanf("%d %d %d %d %d %d",&roll2,&m21,&m22,&m23,&m24,&m25);//took all details for student 2
  printf("enter details for student 3(roll no. , marks in the 5 subjects)\n");//asked for det
  scanf("%d %d %d %d %d %d",&roll3,&m31,&m32,&m33,&m34,&m35);//took all details for student 3
  printf("enter details for student 4(roll no. , marks in the 5 subjects)\n");//asked for det
  scanf("%d %d %d %d %d %d",&roll4,&m41,&m42,&m43,&m44,&m45);//took all details for student 4
  printf("enter details for student 5(roll no. , marks in the 5 subjects)\n");//asked for det
  scanf("%d %d %d %d %d %d",&roll5,&m51,&m52,&m53,&m54,&m55);//took all details for student 5


  printf("the tabulated data :\n");
  printf("%d\t%d\t%d\t%d\t%d\t%d\n",roll1,m11,m12,m13,m14,m15);//printed data for the student and changed line
  printf("%d\t%d\t%d\t%d\t%d\t%d\n",roll2,m21,m22,m23,m24,m25);//printed data for the student and changed line
  printf("%d\t%d\t%d\t%d\t%d\t%d\n",roll3,m31,m32,m33,m34,m35);//printed data for the student and changed line
  printf("%d\t%d\t%d\t%d\t%d\t%d\n",roll4,m41,m42,m43,m44,m45);//printed data for the student and changed line
  printf("%d\t%d\t%d\t%d\t%d\t%d",roll5,m51,m52,m53,m54,m55);

  return 0;
}
  

  
  

