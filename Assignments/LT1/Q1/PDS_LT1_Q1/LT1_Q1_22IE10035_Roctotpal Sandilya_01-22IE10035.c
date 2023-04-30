#include<stdio.h>
#include<math.h>

/*
   sec-2
   class test
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

int main(){

double x1,y1,x2,y2,x3,y3,x4,y4,min;
printf("(x1,y1)= ");
scanf("%lf %lf", &x1,&y1);
printf("\n(x2,y2)= ");
scanf("%lf %lf", &x2,&y2);
printf("\n(x3,y3)= ");
scanf("%lf %lf", &x3,&y3);
printf("\n(x4,y4)= ");
scanf("%lf %lf", &x4,&y4);

double area1= (0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
double area2= (0.5*(x1*(y2-y4) + x2*(y4-y1) + x4*(y1-y2)));
double area3= (0.5*(x4*(y2-y3) + x2*(y3-y4) + x3*(y4-y2)));

if(area1<0) area1 = -area1;
if(area2<0) area2 = -area2;
if(area3<0) area3 = -area3;

printf("%f", area1);

if(area1>area2) min = area2;
else min = area1;

if(area3<min) min = area3;

if(min == area1){
    printf("\nPoints having the minimum area: (%lf, %lf), (%lf, %lf), (%lf, %lf)", x1,y1,x2,y2,x3,y3);
    printf("\nArea = %lf", area1);
}
else if(min == area2){
    printf("\nPoints having the minimum area: (%lf, %lf), (%lf, %lf), (%lf, %lf)", x1,y1,x2,y2,x4,y4);
    printf("\nArea = %lf", area2);
}
else if(min == area3){
    printf("\nPoints having the minimum area: (%lf, %lf), (%lf, %lf), (%lf, %lf)", x4,y4,x2,y2,x3,y3);
    printf("\nArea = %lf", area3);
}
return 0;
}
