//sec 2
//Assignment no-5
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
#include<math.h>
int main(){
int x1,x2,x3,x4,y1,y2,y3,y4;
float area1,area2,area3,area4,perimeter1,perimeter2,perimeter3,perimeter4;
int p=0;
printf("Enter the value of (x1,y1):");
scanf("%d%d", &x1, &y1);
printf("Enter the value of (x2,y2):");
scanf("%d%d", &x2, &y2);
printf("Enter the value of (x3,y3):");
scanf("%d%d", &x3, &y3);
printf("Enter the value of (x4,y4):");
scanf("%d%d", &x4, &y4);
area1=0.5*(x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2));
if(area1>0){
    area1=area1;
}
else{
    area1=-area1;
}
area2=0.5*(x1*(y2-y4)+ x2*(y4-y1)+ x4*(y1-y2));
if(area2>0){
    area2=area2;
}
else{
    area2=-area2;
}
area3=0.5*(x1*(y3-y4)+ x3*(y4-y1)+ x4*(y1-y3));
if(area3>0){
    area2=area3;
}
else{
    area3=-area3;
}
area4=0.5*(x2*(y3-y4)+ x3*(y4-y2)+ x4*(y2-y3));
if(area4>0){
    area4=area4;
}
else{
    area4=-area4;
}
perimeter1=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))+sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3))+ sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
perimeter2=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))+ sqrt((x1-x4)*(x1-x4) + (y1-y4)*(y1-y4))+ sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2));
perimeter3=sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3))+ sqrt((x1-x4)*(x1-x4) + (y1-y4)*(y1-y4))+ sqrt((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3));
perimeter4=sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2))+ sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4))+ sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)==(y4-y3)/(x4-x3)){
    printf("Points having the maximum area: (%d,%d), (%d,%d), (%d,%d)", x1,y1,x2,y2,x3,y3);
    printf("Perimeter=%d",p);
}
else{

if(area1>area2 && area1>area3 && area1>area4){
    printf("Points having maximum area:(%d, %d),(%d, %d),(%d, %d)\n", x1,y1,x2,y2,x3,y3);

    printf("Perimeter=%f\n",perimeter1);
}
else if(area2>area1 && area2>area3 && area2>area4){
    printf("Points having maximum area:(%d, %d),(%d, %d),(%d, %d)\n", x1,y1,x2,y2,x4,y4);
    printf("Perimeter=%f\n",perimeter2);
}
else if(area3>area1 && area3>area2 && area3>area4){
    printf("Points having maximum area:(%d, %d),(%d, %d),(%d, %d)\n", x1,y1,x3,y3,x4,y4);
    printf("Perimeter=%f\n",perimeter3);
}
else{
    printf("Points having maximum area:(%d, %d),(%d, %d),(%d, %d)\n", x2,y2,x3,y3,x4,y4);
    printf("Perimeter=%f\n",perimeter4);
}
}







return 0;
}
