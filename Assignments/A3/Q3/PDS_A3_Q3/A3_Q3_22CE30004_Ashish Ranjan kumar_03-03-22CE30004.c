#include<stdio.h>
#include<math.h>
int main() {
float x1,y1,z1,x2,y2,z2,x3,y3,z3,l1,l2,l3;
printf("A(x1,y1,z1) : ");
scanf("%f %f %f", &x1,&y1,&z1);
printf("B(x2,y2,z2) : ");
scanf("%f %f %f", &x2,&y2,&z2);
printf("C(x3,y3,z3) : ");
scanf("%f %f %f", &x3,&y3,&z3);
printf("A(x1,y1,z1) : %f %f %f\n",x1,y1,z1);
printf("A(x2,y2,z2) : %f %f %f\n",x1,y1,z1);
printf("A(x3,y3,z3) : %f %f %f\n",x1,y1,z1);
l1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2)+pow(z1-z2,2));
l2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2)+pow(z2-z3,2));
l3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2)+pow(z1-z3,2));
if(l1+l2==l3||l1+l3==l2||l2+l3==l1) {
    printf("The given three points are collinear");
}
else{
    printf("The given three point are not collinear");
}
if((x1>x2)&&(x1>x3)){
    printf("%f,%f,%f\n", x1,x2,x3);
}
else if((x1==x2)&&(x1==x3)){
    if((y1>y2)&&(y1>y3)){
        printf("%f,%f,%f\n", x1,x2,x3);
    }
}
return 0;
}
