//Name: Abhijit Kumar
//Roll no. 22IM10001
//Test Set A
//Topic of question:---------------

#include <stdio.h>
#include <math.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
float AB,BC,CA,max,cosA1,cosB1,cosC1;
printf("\nEnter the value of point A in the format x1,y1 :- ");
scanf("%d,%d",&x1,&y1);
printf("\nEnter the value of point A in the format x2,y2 :- ");
scanf("%d,%d",&x2,&y2);
printf("\nEnter the value of point A in the format x3,y3 :- ");
scanf("%d,%d",&x3,&y3);
AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
printf("\nLength of side AB is: %f\n",AB);
BC=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
printf("Length of side BC is: %f\n",BC);
CA=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
printf("Length of side CA is: %f\n",CA);
if(AB+BC>CA && BC+CA>AB && CA+AB>BC)
{
    cosA1=(AB*AB+BC*BC-CA*CA)/(2*AB*BC);
    printf("cosA1=%f",cosA1);
    cosB1=(BC*BC+CA*CA-AB*AB)/(2*CA*BC);
    printf("cosB1=%f",cosB1);
    cosC1=(CA*CA+AB*AB-BC*BC)/(2*AB*CA);
    printf("cosC1=%f",cosC1);
if (cosA1==0)
{printf("It is an right angle triangle\n");
}
else
if (cosB1==0)
{printf("It is an right angle triangle\n");
}
else
if (cosC1==0)
{printf("It is an right angle triangle\n");
}
if (cosA1>=0 && cosB1>=0 && cosC1>=0)
printf("It is an acute angle triangle\n");
else
if (cosA1<0 || cosB1<0 || cosC1<0)
printf("It is an obtuse angle triangle\n");
}
else
printf("Invalid");
}
return 0;
}