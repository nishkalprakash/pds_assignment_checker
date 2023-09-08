//NAME : AYUSH KUAMR SINGH
//Roll no.: 23MT10015

#include<stdio.h>
#include<math.h>

int main(){
    int n, x;
    scanf("%d", &n);
    int sum=0;
    int max=0;
    int max2=0;
    for(int i =0; i<10;i++){
        x=n%10;
        if(x>max){
            max=x;
        }if (max2<x && x<max){
            max2=x;
        }
        sum = sum+x;
        n=n/10;
    }printf("Sum of digits = %d\n", sum);
    printf("Largest digit = %d\n", max);
    printf("second largest = %d ", max2);

    return 0;

}
