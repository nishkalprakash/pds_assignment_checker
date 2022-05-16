/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 3c
*/
#include<stdio.h>
#include<math.h>

int intersect(float a[],float b[],float p[]){
    int i,j;
    if((a[0]*b[1])==(a[1]*b[0])){
        return -1;
    }
    else{
        p[1]=((a[2]*b[0]-b[2]*a[0])/(b[0]*a[1]-b[1]*a[0]));//y coordinate
        p[0]=((b[2]*a[1]-b[1]*a[2])/(b[0]*a[1]-b[1]*a[0]));// x coordinate
        return 1;
    }
}

int main(){
    float l1[3],l2[3],l3[3],p1[2],p2[2],p3[2],s1,s2,s3,area;
    int i,j,a1,a2,a3,dummy=0;
    printf("Enter the coefficients (a, b, c) of three lines: \n");
        printf("Line 1: ");
        for(j=0;j<3;j++){
        scanf("%f",&l1[j]);
        }
        printf("Line 2: ");
        for(j=0;j<3;j++){
        scanf("%f",&l2[j]);
        }
        printf("Line 3: ");
        for(j=0;j<3;j++){
        scanf("%f",&l3[j]);
        }
        a1=intersect(l1,l2,p1);
        if(a1==1){
            printf("Point of intersection between L1 and L2 =(%f,%f)\n",p1[0],p1[1]);
        }
        else if(a1==-1){
            printf("Lines 1 and 2 are parallel; so no point of intersection.\n");
            dummy=1;
        }
        a2=intersect(l3,l2,p2);
        if(a2==1){
            printf("Point of intersection between L2 and L3 =(%f,%f)\n",p2[0],p2[1]);
        }
        else if(a2==-1){
            printf("Lines 2 and 3 are parallel; so no point of intersection.\n");
            dummy=1;
        }
        a3=intersect(l1,l3,p3);
        if(a3==1){
            printf("Point of intersection between L1 and L3 =(%f,%f)\n",p3[0],p3[1]);
        }
        else if(a3==-1){
            printf("Lines 1 and 3 are parallel; so no point of intersection.\n");
            dummy=1;
        }
        //even though 1 pair is parallel, I am printing other intersection points and exiting, not printing any further
        if(dummy!=1){
            s1=sqrt((p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]));
            s2=sqrt((p3[0]-p2[0])*(p3[0]-p2[0])+(p3[1]-p2[1])*(p3[1]-p2[1]));
            s3=sqrt((p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]));
            printf("Side lengths= %f,%f,%f.\n",s1,s2,s3);
        area=0.5*((p1[0]*(p2[1]-p3[1]))-(p2[0]*(p1[1]-p3[1]))+(p3[0]*(p1[1]-p2[1])));
        printf("Area = %f",area);
        }

 return 0;
}

