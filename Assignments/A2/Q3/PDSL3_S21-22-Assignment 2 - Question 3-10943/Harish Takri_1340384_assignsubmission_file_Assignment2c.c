/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>

int main(){
    int m1[4]={8200,8300,6900,9200};
    int m2[4]={7700,3700,4900,9200};
    int m3[4]={1100,6900,500,8600};
    int m4[4]={800,900,9800,2300};
    int m[4]={0,0,0,0};
    int i,total_cost=0,mx;
    mx=INT_MAX;
    for(i=0;i<4;i++){
        if(m1[i]<mx){
            mx=m1[i];
            m[0]=i;
        }
    }
    total_cost+=mx;
    mx=INT_MAX;
    for(i=0;i<4;i++){
        if(i==m[0]){
            continue;
        }
        else{
            if(m2[i]<mx){
                mx=m2[i];
                m[1]=i;
            }
        }
    }
    total_cost+=mx;
    mx=INT_MAX;
    for(i=0;i<4;i++){
        if(i==m[0] || i==m[1]){
            continue;
        }
        else{
            if(m2[i]<mx){
                mx=m3[i];
                m[2]=i;
            }
        }
    }
    total_cost+=mx;
    mx=INT_MAX;
    for(i=0;i<4;i++){
        if(i==m[0] || i==m[1] || i==m[2]){
            continue;
        }
        else{
            if(m4[i]<mx){
                mx=m4[i];
                m[3]=i;
            }
        }
    }
    total_cost+=mx;
    printf("Total cost = %d \n",total_cost);
    for(i=0;i<4;i++){
        printf("Machine1 - Vendor%d\n",m[i]+1);
    }
}
