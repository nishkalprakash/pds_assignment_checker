/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment: question 1
*/
#include<stdio.h>
#include<math.h>
#include<string.h>

   int main(){

    float z,k;
    printf("enter the value of z: \n");
    scanf("%f",&z);
    printf("enter the value of  k: \n");
    scanf("%f",&k);
    int step=0;
    int y=0;

    while(step<k){
            float z1 =z-sqrt(z);
        if(z1<0){
            z1=z1*(-1);
        }
    if (z1==z){
        z=z1;
        step++;
        printf("(%f,%d)",z,step);

        break;

    }
    z=z1;
    step++;
    printf("(%f,%d),z,step");
    if(z==0){
        break;
    }
    }

    if(z!=0){
        while(step<k){
            float m=(sqrt(z)-1/step)*(sqrt(z)-1/step);
            z=z-m;
            if (z<0){
                z=z*(-1);

            }
            step++;
            printf("(%f,%d)",z,step);
            if(z==0){
                break;
            }
        }
    }
    return 0;
   }






