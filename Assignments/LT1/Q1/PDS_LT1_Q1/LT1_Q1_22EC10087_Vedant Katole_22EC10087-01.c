/*Name- Vedant Katole
Roll no - 22EC10087
section-2
Description - problem 1
*/

#include<stdio.h>

void main(){
int x1,x2,x3,x4,y1,y2,y3,y4,tempx1,tempy1, tempx2, tempy2, tempx3, tempy3;
float area1,area2,area3,area4, min_area = 0;

printf("(x1,y1) = ");
scanf("%d%d", &x1, &y1);

printf("\n(x2,y2) = ");
scanf("%d%d", &x2, &y2);

printf("\n(x3,y3) = ");
scanf("%d%d", &x3, &y3);

printf("\n(x4,y4) = ");
scanf("%d%d", &x4, &y4);

area1 = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
if(area1 < 0)
    area1 = area1 * -1;

area2 = x1*(y2 - y4) + x2*(y4 - y1) + x4*(y1 - y2);
if(area2 < 0)
    area2 = area2 * -1;

area3 = x1*(y4 - y3) + x4*(y3 - y1) + x3*(y1 - y4);
if(area3 < 0)
    area3 = area3 * -1;

area4 = x4*(y2 - y3) + x2*(y3 - y4) + x3*(y4 - y2);
if(area4 < 0)
    area4 = area4 * -1;

if(area1<area2){
    min_area = area1;
    tempx1 = x1;
    tempx2 = x2;
    tempx3 = x3;
    tempy1 = y1;
    tempy2 = y2;
    tempy3 = y3;
}
else{
    min_area = area2;
    tempx1 = x1;
    tempx2 = x2;
    tempx3 = x4;
    tempy1 = y1;
    tempy2 = y2;
    tempy3 = y4;
}

if(area3<min_area){
    min_area = area3;
    tempx1 = x1;
    tempx2 = x4;
    tempx3 = x3;
    tempy1 = y1;
    tempy2 = y4;
    tempy3 = y3;
}
if(area4<min_area){
    min_area = area4;
    tempx1 = x4;
    tempx2 = x2;
    tempx3 = x3;
    tempy1 = y4;
    tempy2 = y2;
    tempy3 = y3;
}

printf("Points having the minimum area:\n");
printf("(%d,%d), (%d,%d), (%d,%d)\n\n", tempx1, tempy1, tempx2, tempy2, tempx3, tempy3);

printf("Area = %.02f", min_area * 0.5);
}
