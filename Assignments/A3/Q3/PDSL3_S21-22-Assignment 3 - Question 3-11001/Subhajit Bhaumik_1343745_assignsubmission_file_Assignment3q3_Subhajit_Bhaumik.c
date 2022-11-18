#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    float x1,x2,x3,y1,y2,y3,s1,s2,s3,s,A;
    printf("Enter the coefficients(a,b,c) of three lines:\n");
    printf("Line 1:");
    scanf("%d%d%d",&a1,&a2,&a3);
    printf("Line 2:");
    scanf("%d%d%d",&b1,&b2,&b3);
    printf("Line 3:");
    scanf("%d%d%d",&c1,&c2,&c3);

    if(a1/b1==a2/b2!=a3/b3){
            printf("Lines 1 and 2 are parallel;so no points of intersection");}
    else if (a1/c1==a2/c2!=a3/c3){
            printf("Lines 1 and 3 are parallel;so no points of intersection");}
    else if (b1/c1==b2/c2!=b3/c3){
            printf("Lines 2 and 3 are parallel;so no points of intersection");}

    else{
        x1=(-a2*b3+a3*b2)/(a1*b2-a2*b1);
        y1=(-a1*b3+a3*b1)/(a1*b2-a2*b1);
        x2=(-b2*c3+b3*c2)/(b1*c2-b2*c1);
        y2=(-b1*c3+b3*c1)/(b1*c2-b2*c1);
        x3=(-a2*c3+a3*c2)/(a1*c2-a2*c1);
        y3=(-a1*c3+c1*a3)/(a1*c2-a2*c1);
        printf("Point of intersection between L1 and L2=(%f,%f)\n",x1,y1);
        printf("Point of intersection between L2 and L3=(%f,%f)\n",x2,y2);
        printf("Point of intersection between L3 and L1=(%f,%f)\n",x3,y3);
        s1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        s2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        s3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
        printf("Side lengths=%f,%f,%f",s1,s2,s3);
        s=(s1+s2+s3)/2;
        A=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
    return 0;
}
