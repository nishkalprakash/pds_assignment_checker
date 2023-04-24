#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,s,p1,p2,p3,p4;
printf("give the x coordinate of the first point x1 : ");
scanf("%f" , &x1);
printf("give the ycoordinate of the first point y1 : ");
scanf("%f" , &y1);
printf("give the x coordinate of the second point x2 : ");
scanf("%f" , &x2);
printf("give the y coordinate of the second point y2 : ");
scanf("%f" , &y2);
printf("give the x coordinate of the third point x3 : ");
scanf("%f" , &x3);
printf("give the y coordinate of the third point y3 : ");
scanf("%f" , &y3);
printf("give the x coordinate of the fourth point x4 : ");
scanf("%f" , &x4);
printf("give the y coordinate of the fourth point y4 : ");
scanf("%f" , &y4);
a1=(1/2)*((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
a2=(1/2)*((x3-x2)*(y4-y3)-(y3-y2)*(x4-x3));
a3=(1/2)*((x4-x3)*(y1-y3)-(x1-x3)*(y4-y3));
a4=(1/2)*((x1-x4)*(y2-y4)-(y1-y4)*(x2-x4));
if(a1<0){
    a1= (-1)*a1;
}

if(a2<0){
    a2=(-1)*a2;
}

if(a3<0){
    a3=(-1)*a3;
}

if(a4<0){
    a4=(-1)*a4;
}
if((a1>=a2)&&(a1>=a3)&&(a1>=a4)){
    printf("points having maximum area is (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f)" , x1,y1,x2,y2,x3,y3);
    p1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    printf("perimeter is %.2f" , p1);
}
else if((a2>=a1)&&(a2>=a3)&&(a2>=a4)){
    printf("points having maximum area is (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f)" , x4,y4,x2,y2,x3,y3);
     p2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))+sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    printf(" perimeter is %.2f" , p2);
}
else if((a3>=a1)&&(a3>=a2)&&(a3>=a4)){
    printf("points having maximum area is (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f)" , x4,y4,x1,y1,x3,y3);
     p3=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1))+sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    printf(" perimeter is %.2f" , p3);
}
else if((a4>=a1)&&(a4>=a3)&&(a4>=a2)){
    printf("points having maximum area is (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f)" , x4,y4,x2,y2,x1,y1);
     p4=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2))+sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    printf(" perimeter is %.2f" , p4);
}

    return 0;
}
