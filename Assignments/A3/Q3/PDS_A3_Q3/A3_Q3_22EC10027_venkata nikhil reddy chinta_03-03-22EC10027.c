#include<stdio.h>
int main(){
float x1,x2,x3,y1,y2,y3,z1,z2,z3,r1,r2,r3,r4,r5,r6,d=1;
printf("give the coordinates of the points in the order (x1,x2,x3),(y1,y2,y3),(z1,z2,z3) : ");
scanf("%f%f%f%f%f%f%f%f%f" , &x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
//if the lines to be collinear the dr's should be in the same ratio
r1=(x2-x1);
r2=(y2-y1);
r3=(z2-z1);
r4=(x3-x2);
r5=(y3-y2);
r6=(z3-z2);
d=r1/r4;
if ((r1/r4==d)&&(r2/r5==d)&&(r3/r6==d))
{
    printf("they are collinear");
}
else {
    printf("they are not collinear");
}

return 0;
}
