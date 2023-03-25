#include<stdio.h>
//22HS10018
int main()
{

    float x1,x2,x3,y1,y2,y3,z1,z2,z3,D;
    printf("A(x1,y1,z1):");
    scanf("%f%f%f", &x1,&y1,&z1);// Input values x1,y1,z1
    printf("B(x2,y2,z2):");
    scanf("%f%f%f", &x2,&y2,&z2);// Input values x2,y2,z2
    printf("C(x3,y3,z3):");
    scanf("%f%f%f", &x3,&y3,&z3);// Input values x3,y3,z3
    printf("A(x1,y1,z1): (%f,%f,%f)\n", x1,y1,z1);
    printf("B(x2,y2,z2): (%f,%f,%f)\n", x2,y2,z2);
    printf("C(x3,y3,z3): (%f,%f,%f)\n", x3,y3,z3);
    D=x1*(y2*z3-y3*z2)-y1*(x2*z3-x3*z2)+z1*(x2*y3-x3*y2);//if A, B, C are collinear then value of their determinant is 0
    if(D==0){
        printf("A, B and C are collinear\n");
    }
    else{
        printf("A,B and C are not collinear\n");
    }

    return 0;


}
