/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

#include<stdio.h>

int main(void){
    int sum,max;
    int m1[4]= { 8200, 8300, 6900, 9200};
    int m2[4]= { 7700, 3700, 4900, 9200};
    int m3[4]= { 1100, 6900, 500, 8600};
    int m4[4]= { 800, 900, 9800, 2300};

    int i,j,k,l,x,y,z,w;
    max = 4*9800;//(setting up max value);
    
    for(i=0;i < 4; i++){
        for(j=0; j<4 ;j++){
            if(j != i){
                for(k = 0; k <4; k++){
                    if(k != i && k != j){
                        for(l = 0; l < 4; l++){
                            if(l != i&& l != j && l != k){
                                sum = m1[i] + m2[j] + m3[k] + m4[l];
                                if(sum <= max){
                                    max = sum;
                                    x = i; y = j; z = k; w = l;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\nTotal sum = %d",max);
    printf("\nmachine1 - vendor%d",x+1);
    printf("\nmachine2 - vendor%d",y+1);
    printf("\nmachine3 - vendor%d",z+1);
    printf("\nmachine4 - vendor%d",w+1);
    
    return 0;
}
