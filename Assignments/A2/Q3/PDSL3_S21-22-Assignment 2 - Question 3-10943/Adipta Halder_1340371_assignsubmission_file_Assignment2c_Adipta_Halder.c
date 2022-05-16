/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number:2c
*/
#include<stdio.h>

int main(){
    int i,j,k,l,minsum,maxm1,maxm2,maxm3,maxm4,sum=0,machine1,machine2,machine3,machine4;
    int m1[]={8200,8300,6900,9200};
    int m2[]={7700,3700,4900,9200};
    int m3[]={1100,6900,500,8600};
    int m4[]={800,900,9800,2300};
    maxm1=m1[0];
    for(i=1;i<4;i++){
        if(m1[i]>maxm1){
            maxm1=m1[i];
        }
    }
    maxm2=m2[0];
    for(i=1;i<4;i++){
        if(m2[i]>maxm2){
            maxm2=m2[i];
        }
    }
    maxm3=m3[0];
    for(i=1;i<4;i++){
        if(m3[i]>maxm3){
            maxm3=m3[i];
        }
    }
    maxm4=m4[0];
    for(i=1;i<4;i++){
        if(m4[i]>maxm4){
            maxm4=m4[i];
        }
    }
    minsum=maxm1+maxm2+maxm3+maxm4;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                for(l=0;l<4;l++){
                    sum=m1[i]+m2[j]+m3[k]+m4[l];
                    if(sum<minsum){
                        if(i!=j&&i!=k&&i!=l&&l!=j&&k!=j&&k!=l){
                        minsum=sum;
                        machine1=i+1;
                        machine2=j+1;
                        machine3=k+1;
                        machine4=l+1;
                        }
                    }
                }
            }
        }
    }
    printf("Total cost= %d",minsum);
    printf("\nMachine1- Vendor%d",machine1);
    printf("\nMachine2- Vendor%d",machine2);
    printf("\nMachine3- Vendor%d",machine3);
    printf("\nMachine4- Vendor%d",machine4);
 return 0;
}
