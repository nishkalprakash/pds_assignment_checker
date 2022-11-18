/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>
#include <math.h>

void main(){

    float z,s,zp=0;
    int k;
    int i;

    printf("enter a value for z: ");
    scanf("%f",&z);
    printf("enter the number of iterations: ");
    scanf("%d",&k);

    for (i=1;i<=k;i++){
        /*Trapped situation*/
        if (zp==z){
            s=s-(1/((float)i));
            zp=z;
            z=z-s*s;
            if (z>0.09){
                printf("(%f,%d), ",z,i);
            }
            if (z<-0.09){
                z=fabs(z);
                printf("(%f,%d), ",z,i);
            }
            if (z==0){
                printf("(%f,%d)",z,i);
                break;
            }
            if ((z<0.09)&&(z>0)){
                z=round(z);
                printf("(%f,%d)",z,i);
                break;
            }
            if ((z>-0.09)&&(z<0)){
                z=round(z);
                printf("(%f,%d)",z,i);
                break;
            }
        }
        /*Under normal conditions*/
        else {
            s=sqrt(z);
            zp=z;
            z=z-s;
            if (z>0.09){
                printf("(%f,%d), ",z,i);
            }
            if (z<-0.09){
                z=fabs(z);
                printf("(%f,%d), ",z,i);
            }
            if (z==0){
                printf("(%f,%d)",z,i);
                break;
            }
            if ((z<0.09)&&(z>0)){
                z=round(z);
                printf("(%f,%d)",z,i);
                break;
            }
            if ((z>-0.09)&&(z<0)){
                z=round(z);
                printf("(%f,%d)",z,i);
                break;
            }
        }

    }



}
