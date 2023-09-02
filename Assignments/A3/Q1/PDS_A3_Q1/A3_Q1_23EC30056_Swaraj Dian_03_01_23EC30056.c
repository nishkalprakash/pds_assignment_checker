//Roll no.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int r1,r2,r3,r4,r5,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5,d1,d2,d3,d4,d5,e1,e2,e3,e4,e5; //r1,r2... are the roll numbers and a1,a2...,b1,b2... are the marks obtained by students
  printf("Enter Roll no. of 1st student: ");  //Roll number of student
  scanf("%d",&r1);
  printf("Enter Marks of the 5 Subjects out of 100: ");   //Marks of student
  scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
  printf("Enter Roll no. of 2nd student: ");
  scanf("%d",&r2);
  printf("Enter Marks of the 5 Subjects out of 100: ");
  scanf("%d%d%d%d%d",&b1,&b2,&b3,&b4,&b5);
  printf("Enter Roll no. of 3rd student: ");
  scanf("%d",&r3);
  printf("Enter Marks of the 5 Subjects out of 100");
  scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
  printf("Enter Roll no. of 4th student: ");
  scanf("%d",&r4);
  printf("Enter Marks of the 5 Subjects out of 100: ");
  scanf("%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5);
  printf("Enter Roll no. of 5th student: ");
  scanf("%d",&r5);
  printf("Enter Marks of the 5 Subjects out of 100: ");
  scanf("%d%d%d%d%d",&e1,&e2,&e3,&e4,&e5);
  printf("Roll \t Marks");                                  //Printing the the roll no and marks in a tabular format
  printf("\n%d\t%d\t%d\t%d\t%d\t%d",r1,a1,a2,a3,a4,a5);
  printf("\n%d\t%d\t%d\t%d\t%d\t%d",r2,b1,b2,b3,b4,b5);
  printf("\n%d\t%d\t%d\t%d\t%d\t%d",r3,c1,c2,c3,c4,c5);
  printf("\n%d\t%d\t%d\t%d\t%d\t%d",r4,d1,d2,d3,d4,d5);
  printf("\n%d\t%d\t%d\t%d\t%d\t%d",r5,e1,e2,e3,e4,e5);
  return 0;
}
