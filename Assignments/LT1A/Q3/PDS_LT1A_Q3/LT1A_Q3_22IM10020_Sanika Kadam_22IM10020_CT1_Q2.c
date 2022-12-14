//Class test 1
//Name:Sanika Kadam
//Roll no:22IM10020

//To check if triangle is obtuse,acute or right angled

#include<stdio.h>
#include<math.h>
int main()
{
 int x1,x2,x3,y1,y2,y3;
 double L_12,L_23,L_13;
 //Reading the coordinates
 printf("Enter the coordinates: "); //enter coordinates in the format x1 x2 x3 y1 y2 y3
 scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
 
 L_12=pow(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),.5);
 L_23=pow(((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)),.5);
 L_13=pow(((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)),.5);

 printf("Length of side 12:%lf\n",L_12);
 printf("Length of side 23:%lf\n",L_23);
 printf("Length of side 13:%lf\n",L_13);

return 0;
}
