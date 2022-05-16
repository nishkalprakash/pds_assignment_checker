/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

float intersection(int a1,int b1,int c1,int a2,int b2,int c2);
int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    float p1[2],p2[2],p3[2];

    printf("Enter the coefficients (a, b, c) of three lines:\n");
    printf("Line 1:\n"); scanf("%d %d %d",&a1,&b1,&c1);
    printf("Line 2:\n"); scanf("%d %d %d",&a2,&b2,&c2);
    printf("Line 3:\n"); scanf("%d %d %d",&a3,&b3,&c3);


    if((a1*b2-a2*b1)!=0){
         p1[2]=intersection(a1,b1,c1,a2,b2,c2);
        printf("Point of intersection between L1 and L2:(%f,%f)\n",p1[0],p1[1]);
    }

    if((a2*b3-a3*b2)!=0){
         p2[2]=intersection(a2,b2,c2,a3,b3,c3);
        printf("Point of intersection between L2 and L3:(%f,%f)\n",p2[0],p2[1]);
    }
    if((a1*b3-a3*b1)!=0){
         p3[2]=intersection(a3,b3,c3,a1,b1,c1);
        printf("Point of intersection between L1 and L2:(%f,%f)\n",p3[0],p3[1]);
    }else{printf("triangle not possible");}




    return 0;
}

float intersection(int a1,int b1,int c1,int a2,int b2,int c2){
    float p[2];
    int t,q,r,s;
    t=(c1*b2)-(c2*b1);
    q=(a1*b2)-(a2*b1);
    r=(a2*c1)-(a1*c2);

             p[0]=1.0*t/q;
             p[1]=-1.0*r/q;
             return(p[2]);
}











