/*Name - Modi Meet
Roll No-22ME10053
LAB - 9 Q1)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the input:");
    scanf("%d",&n);
    if(n<0) {printf("Please give positive number\n"); return 0;}
    else printf("Value of n : %d\n",n);
    int first,second,sum=0,prev;
    first = 0;
    second = 1;
    while(sum<=n){
        sum = first + second;
        prev = first;
        first = second;
        second = sum;
    }
    if(sum == n) printf("%d is a fibonacci number.",n);
    else printf("Nearest fibonacci number : %d",sum - prev);
    return 0;
}
