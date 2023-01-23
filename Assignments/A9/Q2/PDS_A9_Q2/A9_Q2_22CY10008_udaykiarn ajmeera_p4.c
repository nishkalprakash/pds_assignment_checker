/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 9
 *Description   : circle intersection
 */

#include<stdio.h>
#include<math.h>
typedef struct {
  int x;
  int y;
  float r;
}circle;

int isinter(circle c1,circle c2)
{
  float d,t;
 t=c1.r+c2.r;
 
 d = sqrt(pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2));

 if(d<=t)
  return 1;
 else 
  return 0;
 }

int main ()
{
 circle c1,c2;   //c1,c2 represents two circles
 int j;
 printf("Enter x,y,r of c1 :\n");
 scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
 printf("Enter x,y,r of c2 :\n");
 scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
 j= isinter(c1,c2);
 if(j==1)
  printf("Circles intersect");
 if(j==0)
  printf("Circles donot intersect");
 return 0;
}

