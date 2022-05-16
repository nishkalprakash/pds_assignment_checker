/*
name: JANAK PATEL
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:3(c)
*/

#include<stdio.h>

float L1L2(int a1,int b1,int c1,int a2,int b2,int c2);
float L2L3(int a2,int b2,int c2,int a3,int b3,int c3);
float L3L1(int a3,int b3,int c3,int a1,int b1,int c1);

int main(){
    /* where a1,b1,c1,a2,b2,c2,a3,b3,c3 ,are coefficient of line a1*x+b1*y=c1 , a2*x+b2*y=c2 ,a3*x+b3*y=c3 accordingly*/

    int a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,x2,x3,y1,y2,y3;
    printf("enter the value of a1:\n");
    scanf("%d",&a1);
    printf("enter the value of b1:\n");
    scanf("%d",&b1);
    printf("enter the value of c1:\n");
    scanf("%d",&c1);
    printf("enter the value of a2:\n");
    scanf("%d",&a2);
    printf("enter the value of b2:\n");
    scanf("%d",&b2);
    printf("enter the value of c2:\n");
    scanf("%d",&c2);
    printf("enter the value of a3:\n");
    scanf("%d",&a3);
    printf("enter the value of b3:\n");
    scanf("%d",&b3);
    printf("enter the value of c3:\n");
    scanf("%d",&c3);
    printf("the intersection point of L1L2 is : (%f,%f)\n",L1L2(a1,b1,c1,a2,b2,c2));
    printf("the intersection point of L2L3 is : (%f,%f)\n",L2L3(a3,b3,c3,a2,b2,c2));
    printf("the intersection point of L3L1 is : (%f,%f)\n",L3L1(a1,b1,c1,a3,b3,c3));

    return 0;

}

float L1L2(int a1,int b1,int c1,int a2,int b2,int c2){
    float result1;
    result1= ((c1 * b2 - c2 * b1),(a1 * c2 - a2 * c1));  // intersection point determine by determinant method
    return result1;
}

float L2L3(int a2,int b2,int c2,int a3,int b3,int c3){
    float result2;

    result2 = ((c3 * b2 - c2 * b3),(a3 * c2 - a2 * c3));  // intersection point determine by determinant method
    return result2;
}

float L3L1(int a3,int b3,int c3,int a1,int b1,int c1){
    float result3;

    result3 = ((c1 * b3 - c3 * b1),(a1 * c3 - a3* c1));    // intersection point determine by determinant method
    return result3;
}
