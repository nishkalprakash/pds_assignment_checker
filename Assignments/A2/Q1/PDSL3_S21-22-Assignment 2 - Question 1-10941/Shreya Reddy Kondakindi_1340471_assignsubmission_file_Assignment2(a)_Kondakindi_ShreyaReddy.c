/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#include<math.h>
int main(){

    float z,k;
    printf("enter z:");
    scanf("%f",&z);

    for(k=1;k<=50;k++){
        z=z-sqrt(z);
        printf("(%f,%f)",z,k);
        if(z<0){
            z=z+sqrt((-1.0)*z);
            printf("(%f,%f)",z,k);
        }
        if(z==0){
           break;
        }
    }
    return 0;


}
