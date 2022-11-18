#include <stdio.h>

void print_arr(int num[]){
    int number = 0;
    for(int i =0; i<5; i++){
        number*=10;
        number += num[i];
    }
    printf("%d   ",number);
}

int check(int num[], int sum){
    int number = 0;
    for(int i =0; i<5; i++){
        number*=10;
        number += num[i];
    }
    return (number%sum==0)?0:1;
}

int main()
{
    int b,d;
    printf("enter c:");
    scanf(" %1d",&b);
    printf("enter d:");
    scanf(" %1d",&d);
    int num[] = {b,b,b,b,b};
    print_arr(num);
    for(int i =0; i<5; i++){
        num[i]=d;
        for(int j =0; j<5; j++){
            num[j] = d;
            for(int k=0; k<5; k++){
                num[k] = d;
                for(int l=0; l<5; l++){
                    num[l] = d;
                    for(int m=0;m<5; m++){
                        num[m] = d;
                        if(check(num,b+d)==1)
                            print_arr(num);
                        num[m] = b;
                    }
                    num[l] = b;
                }
                num[k] = b;
            }
            num[j] = b;
        }
        num[i] = b;
    }
    
    
    

    return 0;
}
