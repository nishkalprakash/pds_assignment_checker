/*Name=Pawan yadav
sec=2
lab test 1
question 1*/
#include <stdio.h>
int main()
 {
 int x1,x2,x3,x4,y1,y2,y3,y4;
 float A1,A2,A3,A4;
 printf ("Enter the coordinate of 1st point:\n");
 scanf ("%d",&x1);
 scanf ("%d",&y1);
 printf ("Enter the coordinate of 2nd point:\n");
 scanf ("%d",&x2);
 scanf ("%d",&y2);
 printf ("Enter the coordinate of 3rd point:\n");
 scanf ("%d",&x3);
 scanf ("%d",&y3);
 printf ("Enter the coordinate of 4th point:\n");
 scanf ("%d",&x4);
 scanf ("%d",&y4);//total 4 ponts are taken as input .
 A1=1.0*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;//there are total 4 combination of coordinates so total 4 areas.
 A2=1.0*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2;
 A3=1.0*(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2;
 A4=1.0*(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2;
 if (A1<0) A1*=(-1);
 if (A2<0) A2*=(-1);
 if (A3<0) A3*=(-1);
 if (A4<0) A4*=(-1);
 if (A1<=A2&&A1<=A3&&A1<=A4) {
    printf("Points having the minium area :(%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
    printf ("Area= %f\n",A1);
 }
 if (A2<=A1&&A2<=A3&&A2<=A4) {
    printf("Points having the minium area :(%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
    printf ("Area= %f\n",A2);
 }
 if (A3<=A1&&A3<=A2&&A3<=A4) {
    printf("Points having the minium area :(%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
    printf ("Area= %f\n",A3);
 }
 if (A4<=A2&&A4<=A3&&A4<=A1) {
    printf("Points having the minium area :(%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
    printf ("Area= %f\n",A4);
 }
 return 0;
}
