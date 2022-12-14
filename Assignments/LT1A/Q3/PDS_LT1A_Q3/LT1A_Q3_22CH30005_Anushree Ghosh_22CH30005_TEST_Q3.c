/* 
  anushree ghosh
  22CH30005
  LAB TEST 1
  SECTION 14
 */

#include<stdio.h>
#include<math.h>

 int main()
{
 int x1,x2,x3,y1,y2,y3; //input the coordinates
 printf("enter the values of x1,x2,x3,y1,y2,y3");
 scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);

 int len1,len2,len3;
/*calculating the length*/
 len1=sqrt((x1-x2)*(x1-x2))+sqrt((y1-y2)*(y1-y2));
 len2=sqrt((x2-x3)*(x2-x3))+sqrt((y2-y3)*(y2-y3));
 len3=sqrt((x3-x1)*(x3-x1))+sqrt((y3-y1)*(y3-y1));

 if((len1>(len2+len3))||(len2>(len1+len3))||(len3>(len2+len1)))
{
 printf("valid triangle");
}
 else{
 printf("invalid triangle"):
}
 if(((len1*len1)==(len2*len2)+(len3*len3))||((len2*len2)==(len1*len1)+(len3*len3))||((len3*len3)==(len2*len2)+(len1*len1)))
{
 printf("the triangle is right angled");
}



  return 0;
}
