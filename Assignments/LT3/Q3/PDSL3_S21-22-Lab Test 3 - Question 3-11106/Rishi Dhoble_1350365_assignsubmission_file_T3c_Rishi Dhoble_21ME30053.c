/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code blocks
T3c*/

#include <stdio.h>

int main(){
    int dig_1, dig_2;
    printf("Enter first digit: ");
    scanf("%d",&dig_1);
    printf("Enter second digit: ");
    scanf("%d",&dig_2);
    int dig_array[2] = {dig_1, dig_2};              //master array
    int final_array[32];                            //combinations
    int count=0;
    int num, flag;

    for(int a=0; a<2; a++){
        for(int b=0; b<2; b++){
            for(int c=0; c<2; c++){
                for(int d=0; d<2; d++){
                    for(int e=0; e<2; e++){
                        num=0;
                        num=dig_array[a]*10000+dig_array[b]*1000+dig_array[c]*100+dig_array[d]*10+dig_array[e];
                        if(num%(dig_1+dig_2)!=0){
                            flag=1;
                            for(int i=0; i<count; i++){
                                if(final_array[i]==num){
                                    flag=0;
                                    break;
                                }
                            }
                            if(flag){
                                final_array[count]=num;
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    if(count){
        printf("\nNumbers:\n");
        for(int i=0; i<count; i++){
            printf("%d ",final_array[i]);
        }
    }
    else{
        printf("\nNo such numbers.\n");
    }

    return 0;
}
