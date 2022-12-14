/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:1program:to display the type of triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
float AB,BC,CA;
printf("Enter the coordinates of A");
scanf("%d%d",&x1,&y1);
printf("Enter the coordinates of B");
scanf("%d%d",&x2,&y2);
printf("Enter the coordinates of C");
scanf("%d%d",&x3,&y3);
AB=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
BC=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
CA=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
printf("length of side AB=%.2f\n",AB);
printf("length of side BC=%.2f\n",BC);
printf("length of side CA=%.2f\n",CA);
if((AB+BC<CA)||(BC+CA<AB)||(CA+AB<BC))
{
printf("Invald");
}
else if((AB*AB+BC*BC==CA*CA)||(CA*CA+BC*BC==AB*AB)||(AB*AB+CA*CA==BC*BC))
{
printf("Right Angled");
}
else if((AB*AB+BC*BC<CA*CA)||(BC*BC+CA*CA<AB*AB)||(AB*AB+CA*CA<BC*BC))
printf("Obtuse angled triangle");
else if((AB*AB+BC*BC>CA*CA)||(BC*BC+CA*CA>AB*AB)||(AB*AB+CA*CA>BC*BC))
printf("Acute angled triangle");
}








