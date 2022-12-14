#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
float len1,len2,len3;
printf("(x1,y1) (x2,y2) (x3,y3) respectively");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);//takes input from user
len1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);  //calculates the lengths
len2=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
len3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
if((len1<len2+len3)&&(len2<len1+len3)&&(len3<len1+len2))//checks if it is a valid triangle
{
   if((len1*len1==len2*len2+len3*len3)||(len2*len2==len1*len1+len3*len3)||(len3*len3==len1*len1+len2*len2)) printf("right angled");
   else printf("obtuse angled");

}
else printf("invalid input");//checks if it is invalid
return 0;
}
