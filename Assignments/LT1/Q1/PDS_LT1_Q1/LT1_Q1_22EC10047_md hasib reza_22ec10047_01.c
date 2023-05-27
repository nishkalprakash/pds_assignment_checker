


#include<stdio.h>
#include<math.h>
int main(){
int x1,y1,x2,y2,x3,y3,x4,y4;
float A1,A2,A3,A4;          // A1,A2,A3,A4 are area of all four possible triangle
float P1,P2,P3,P4;          //P1,P2,P3,P4 are perimeter of all four possible triangle
scanf("%d,%d%d,%d%d,%d%d,%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
printf("ENTER THE POINRS :\n (%d,%d)=\n (%d,%d)=\n (%d,%d)=\n (%d,%d)=\n",x1,y1,x2,y2,x3,y3,x4,y4);


A1=abs(1/2*(x2*y3+x3*y1+x1*y2-x2*y1-x1*y3-x3*y2));
A2=abs(1/2*(x2*y3+x3*y4+x4*y2-x2*y4-x4*y3-x3*y2));
A3=abs(1/2*(x2*y4+x4*y1+x1*y2-x2*y1-x1*y4-x4*y2));
A4=abs(1/2*(x1*y3+x3*y4+x4*y1-x1*y4-x4*y3-x3*y1));

P1=(sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x2-x3,2)+pow(y2-y3,2))+sqrt(pow(x3-x1,2)+pow(y3-y1,2)));
P2=(sqrt(pow(x4-x2,2)+pow(y4-y2,2))+sqrt(pow(x2-x3,2)+pow(y2-y3,2))+sqrt(pow(x3-x4,2)+pow(y3-y4,2)));
P3=(sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x2-x4,2)+pow(y2-y4,2))+sqrt(pow(x4-x1,2)+pow(y4-y1,2)));
P4=(sqrt(pow(x1-x4,2)+pow(y1-y4,2))+sqrt(pow(x4-x3,2)+pow(y4-y3,2))+sqrt(pow(x3-x1,2)+pow(y3-y1,2)));


if(A1>A2&&A1>A3&&A1>A4){
                        printf("points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
                        printf("the perimeter of triangle having maximum area is: %f",P1);
                        }
if(A2>A1&&A2>A3&&A2>A4){
                        printf("points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x4,y4,x2,y2,x3,y3);
                        printf("the perimeter of triangle having maximum area is: %f",P2);
                        }
if(A3>A1&&A3>A2&&A3>A4){
                        printf("points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
                        printf("the perimeter of triangle having maximum area is: %f",P3);
                        }
if(A4>A1&&A4>A2&&A4>A3){
                        printf("points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x4,y4,x3,y3);
                        printf("the perimeter of triangle having maximum area is: %f",P4);
                        }

 return 0;


}
