#include<stdio.h>
int main(){
float x1,y1,z1,x2,y2,z2,x3,y3,z3;
printf("A(x1,y1,z1):");
scanf("%f%f%f",&x1,&y1,&z1);
printf("A(x2,y2,z2):");
scanf("%f%f%f",&x2,&y2,&z2);
printf("A(x3,y3,z3):");
scanf("%f%f%f",&x3,&y3,&z3);
float det=x1*(y2*z3-z2*y3)-y1*(x2*z3-z2*x3)+z1*(x2*y3-x3*y2);
printf("A(x1,y1,z1): (%f,%f,%f)\n",x1,y1,z1);
printf("B(x2,y2,z2): (%f,%f,%f)\n",x2,y2,z2);
printf("C(x3,y3,z3): (%f,%f,%f)\n",x3,y3,z3);
printf("\n");

if(det==0.0){
    printf("The given three points are collinear");

}
else{
     printf("The given three points are not collinear");
}
float a1,a2,a3,a4,a5,a6;
if((x1!=x2)&&(x2!=x3)&&(x3!=x1))
{
    if(x1>x2){
        if(x2>x3){

            printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
        }
        else{
            if(x1>x3)
            printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            else
                printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);

        }

    }

}

}
