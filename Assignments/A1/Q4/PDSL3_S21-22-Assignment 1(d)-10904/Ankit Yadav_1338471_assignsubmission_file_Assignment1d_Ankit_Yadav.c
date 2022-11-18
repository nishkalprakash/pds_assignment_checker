/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Operating System : Windows 11
Assignment class : 1
*/


#include<stdio.h>
#include<math.h>

int main(){

  float x,y,a,b,u,w,s1,s2,s3;

  printf("Enter the value of coordinates of the vertices (a,b),(x,y),(u,W),in same order ");
  scanf("%f %f %f %f %f %f",&a,&b,&x,&y,&u,&w);

  s1=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
  s2=sqrt(((u-x)*(u-x))+((w-y)*(w-y)));
  s3=sqrt(((a-u)*(a-u))+((b-w)*(b-w)));

  if((s1+s2)>s3&&(s2+s3)>s1&&(s1+s3)>s2)
    {printf("\nThis is a valid triangle");

  if((s1*s1)+(s2*s2)==(s3*s3)||(s1*s1)+(s3*s3)==(s2*s2)||(s2*s2)+(s3*s3)==(s1*s1)) printf("\nThis is A Right Angled Triangle");
  else if((s1*s1)+(s2*s2)<(s3*s3)||(s1*s1)+(s3*s3)<(s2*s2)||(s2*s2)+(s3*s3)<(s1*s1)) printf("\nThis is An obtuse Angled Triangle");
  else printf("\nThis is an acute angled triangle");
  }
  else printf("\nThis is not a valid triangle");

  return 0;



}
