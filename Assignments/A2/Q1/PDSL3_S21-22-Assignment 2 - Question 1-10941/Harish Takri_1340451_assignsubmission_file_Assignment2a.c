/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>

int main(){
    float s,z,prev_z;
    int k,i,flag;
    printf("Enter height(z) : ");
    scanf("%f",&z);
    printf("Enter number of iterartions(k) : ");
    scanf("%d",&k);
    i=1;
    flag=0;
    prev_z=z;
    while(i<=k){
        s=sqrt(z);
        if(flag==1){
            s=s-(1/i);
            z=z-(s*s);
            flag=0;
        }
        else{
            z=z-s;
        }
        if(z<0){
            z*=-1;
        }
        printf("(%f,%d), ",z,i);
        if(z==0){
            break;
        }
        if(z==prev_z){
            flag=1;
        }
        i++;
        prev_z=z;
    }
    return 0;
}
