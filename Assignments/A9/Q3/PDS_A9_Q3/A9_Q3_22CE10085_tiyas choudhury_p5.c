/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 9
 *Description   : area of rect
 */

#include<stdio.h>
typedef struct 
{
  float x1;             // (x1,y1)are left bottom co-ordinates,
  float y1;
}cod;                    // cod represents co-ordinates

float Area(cod p1,cod p2)
{
 float t;
 t=(p2.x1-p1.x1)*(p2.y1-p1.y1);
 if(t>0)
 return t;
 else
 return -t;
}

int main ()
{
  cod p1,p2;
 float area;
 printf("Enter the co-ordinates of p1 :\n");
 scanf("%f %f",&p1.x1,&p1.y1);
 printf("Enter the co-ordinates of p2 :\n");
 scanf("%f %f",&p2.x1,&p2.y1);
 area=Area(p1,p2);
 printf("The area is %f",area);
 return 0;
}
 
  
