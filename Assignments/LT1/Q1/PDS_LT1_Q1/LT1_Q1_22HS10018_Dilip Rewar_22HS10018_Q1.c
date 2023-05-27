#include<stdio.h>
#include<math.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Lab test 1
Question 1
Description: Area of smallest triangle formed from given four points
*/
int main(){
    int x1, x2, x3, x4, y1, y2, y3 ,y4;
    float A1, A2, A3, A4,min;
    printf("(x1,y1)",x1,y1);
    scanf("%d,%d", &x1,&y1);
    printf("(x2,y2)",x2,y2);
    scanf("%d,%d", &x2,&y2);
    printf("(x3,y3)",x3,y3);
    scanf("%d,%d", &x3,&y3);
    printf("(x4,y4)",x4,y4);
    scanf("%d,%d", &x4,&y4);
    A1 = (0.5*(x1*(y2-y3) - x2*(y1-y3) + x3*(y1-y2)));
    A2 = (0.5*(x2*(y3-y4) - x3*(y2-y4) + x4*(y2-y3)));
    A3 = (0.5*(x3*(y4-y1) - x4*(y3-y1) + x1*(y3-y4)));
    A4 = (0.5*(x4*(y1-y2) - x1*(y4-y2) + x2*(y4-y1)));
   if(A4<A3<A2<A1 || A4<A3<A1<A2 || A4<A2<A3<A1 || A4<A2<A3<A1 || A4<A1<A3<A2 || A4<A1<A2<A3)
    {
        min=A4;
    }
    else if(A3<A4<A2<A1 || A3<A4<A1<A2 || A3<A2<A4<A1 || A3<A2<A1<A4 || A3<A1<A4<A2 || A3<A1<A2<A4)
    {
        min=A3;
    }
    else if(A2<A3<A4<A1 || A2<A3<A1<A4 || A2<A4<A3<A1 || A2<A3<A3<A1 || A2<A1<A3<A4 || A2<A1<A4<A3)
    {
        min=A2;
    }
    else{
        min=A1;
    }

    return 0;
}
