/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int main(){
int m1[4]={8200,8300,6900,9200};
int m2[4]={7700,3700,4900,9200};
int m3[4]={1100,6900,500,8600};
int m4[4]={800,900,9800,2300};
int temp,min;
min=m1[0]+m2[1]+m3[2]+m4[3];
int vend_allot[]={1,2,3,4};
for(int a1=1;a1<=4;a1++){
    for(int a2=1;a2<=4;a2++){
        if (a2!=a1){
            for (int a3=1;a3<=4;a3++){
                if (a3!=a1 && a3!=a2){
                    for (int a4=1;a4<=4;a4++){
                        if (a4!=a1 && a4!=a2 && a4!=a3){
                            temp=m1[a1-1]+m2[a2-1]+m3[a3-1]+m4[a4-1];
                            if (temp<min){
                                min=temp;
                                vend_allot[0]=a1;
                                vend_allot[1]=a2;
                                vend_allot[2]=a3;
                                vend_allot[3]=a4;
                            }
                        }
                    }
                }
            }
        }
    }
}
printf("Total Cost=%d\n",min);
for (int i=1;i<=4;i++){
    printf("Machine%d-Vendor%d\n",i,vend_allot[i-1]);
}
return 0;
}
