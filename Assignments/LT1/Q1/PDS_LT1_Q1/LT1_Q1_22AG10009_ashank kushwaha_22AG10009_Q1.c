/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
DESCRIPTION:AREA AND PERIMETER
*/
#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4,A1,A2,A3,A4;   //variables A1 to A4 for different combination of three coordinates
    double P1,P2,P3,P4,t1,t2,t3;      //P1 to P4 for different combination of perimeter, t are temporary variables

    //input
    printf("(x1,y1) =");
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2) =");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3) =");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4) =");
    scanf("%d%d",&x4,&y4);

    //area of the coordinates
    A1=0.5*((x1*(y2-y3))-(y1*(x2-x3))+((x2*y3-x3*y2)));
    A2=0.5*((x2*(y3-y4))-(y2*(x3-x4))+((x3*y4-x4*y3)));
    A3=0.5*((x3*(y4-y1))-(y3*(x4-x1))+((x4*y1-x1*y4)));
    A4=0.5*((x4*(y1-y2))-(y4*(x1-x2))+((x1*y2-x2*y1)));

    //taking modulus of area
    if (A1<0) A1*=-1;
    if (A2<0) A2*=-1;
    if (A3<0) A3*=-1;
    if (A4<0) A4*=-1;

    //checking maximum area among all areas
    if ((A1>=A2)&&(A1>=A3)&&(A1>=A4)&&(A1!=0)) {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
        t1=pow(x1-x2,2)+pow(y1-y2,2);
        t2=pow(x2-x3,2)+pow(y2-y3,2);
        t3=pow(x1-x3,2)+pow(y1-y3,2);
        P1=sqrt(t1)+sqrt(t2)+sqrt(t3);
        printf("Perimeter = %.2lf",P1);
    }
    else if ((A2>=A1)&&(A2>=A3)&&(A2>=A4)&&(A2!=0)) {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
        t1=pow(x2-x3,2)+pow(y2-y3,2);
        t2=pow(x3-x4,2)+pow(y3-y4,2);
        t3=pow(x2-x4,2)+pow(y2-y4,2);
        P2=sqrt(t1)+sqrt(t2)+sqrt(t3);
        printf("Perimeter = %.2lf",P2);
    }
    else if ((A3>=A2)&&(A3>=A1)&&(A3>=A4)&&(A3!=0)) {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
        t1=pow(x3-x4,2)+pow(y3-y4,2);
        t2=pow(x4-x1,2)+pow(y4-y1,2);
        t3=pow(x1-x3,2)+pow(y1-y3,2);
        P3=sqrt(t1)+sqrt(t2)+sqrt(t3);
        printf("Perimeter = %.2lf",P3);
    }
    else if ((A4>=A2)&&(A4>=A3)&&(A4>=A1)&&(A4!=0)) {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
        t1=pow(x1-x4,2)+pow(y1-y4,2);
        t2=pow(x2-x4,2)+pow(y2-y4,2);
        t3=pow(x1-x2,2)+pow(y1-y2,2);
        P4=sqrt(t1)+sqrt(t2)+sqrt(t3);
        printf("Perimeter = %.2lf",P4);
    }
    else if ((A1==A2)&&(A2==A3)&&(A3==A4)&&(A1==0)){
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter =0 (since there is no triangle)");
    }

}
