#include<stdio.h>

int main()  {
int x1,y1,x2,y2,x3,y3,x4,y4;
float a1,a2,a3,a4;
printf("enter the coordinate 1");
scanf("%d %d" , &x1,&y1);
printf("(%d,%d)" , x1,y1);
printf("enter the coordinate 2");
scanf("%d %d" , &x2,&y2);
printf("(%d,%d)" , x2,y2);
printf("enter the coordinate 3");
scanf("%d %d" , &x3,&y3);
printf("(%d,%d)" , x3,y3);
printf("enter the coordinate 4");
scanf("%d %d" , &x4,&y4);
printf("(%d,%d)" , x4,y4);
a1= ( (x1-x2)*(y2-y3)-(x2-x3)*(y1-y2))*0.5;
a2= ( (x2-x3)*(y3-y4)-(x3-x4)*(y2-y3))*0.5;
a3= ( (x3-x4)*(y4-y1)-(x4-x1)*(y3-y4))*0.5;
a4= ( (x4-x1)*(y1-y2)-(x1-x2)*(y4-y1))*0.5;
if (a1<0) {
     a1=a1*(-1.0);
}
else {
   a1=a1;
}
if (a2<0) {
    a2=a2*(-1.0);
}
else {
    a2=a2;
}
if (a3<0) {
    a3=a3*(-1.0);
}
else {
   a3=a3;
}
if (a4<0) {
    a4=a4*(-1.0);
}
else {
    a4=a4;
}
printf("a1=%f", a1);
printf("a2=%f", a2);
printf("a3=%f", a3);
printf("a4=%f", a4);


if( (a1<=a2) && (a1<=a3) && (a1<=a4) ) {
    printf (" points having minimum area : (%d,%d)(%d,%d)(%d,%d)\n Area= %f\n" , x1,y1,x2,y2,x3,y3, a1);
}
 else if( (a2<=a1) && (a2<=a3) && (a2<=a4) ) {
    printf ("points having minimum area : (%d,%d)(%d,%d)(%d,%d)\n Area= %f\n" ,  x2,y2,x3,y3,x4,y4 , a2);
}
else if( (a3<=a1) && (a3<=a2) && (a3<=a4) ) {
    printf ("points having minimum area : (%d,%d)(%d,%d)(%d,%d)\n Area= %f\n" ,   x3,y3,x4,y4,x1,y1, a3);
}
else  {
    printf ("points having minimum area : (%d,%d)(%d,%d)(%d,%d)\n Area= %f\n" ,  x4,y4,x1,y1,x2,y2, a4);
}






return 0;
}
