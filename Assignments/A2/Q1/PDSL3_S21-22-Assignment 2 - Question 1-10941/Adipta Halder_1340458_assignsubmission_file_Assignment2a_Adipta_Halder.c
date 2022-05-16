/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 2a
*/
#include<stdio.h>
#include<math.h>

int main(){
    double z,temp;
    int k,i;
    printf("z= ");
    scanf("%lf",&z);
    printf("k= ");
    scanf("%d",&k);
    printf("\nOutput: \n");
    for(i=1;i<=k;i++){
        if(z>0){
            temp=z;
            z=z-sqrt(z);
            if(z<0){
                z=-z;
            }
            if(z==temp&&z!=0){
                z=z-((sqrt(z))-(1/i))*((sqrt(z))-(1/i));
            }
        }
            printf("(%.10lf,%d), ",z,i);
            if(z==0){
                break;
            }
    }
 return 0;
}
