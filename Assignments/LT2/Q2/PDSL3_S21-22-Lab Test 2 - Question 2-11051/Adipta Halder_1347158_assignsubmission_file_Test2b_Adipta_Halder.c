/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 2b
*/
#include<stdio.h>
/*in this problem I take number of elements as input and pass it to function*/
int maxAlphaValue(int s[],int n){
    int i,j,count,max=0;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<i;j++){
            if(s[j]%s[i]==0){//checking divisibility
                count++;
            }
        }
        if(count>max){
            max=count;//finding max of count
        }
    }
    return max;
}
int main(){
    int i,n;
    printf("Enter number of integers in sequence: ");
    scanf("%d",&n);
    int s[n];
    printf("Enter array s[ ]: ");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("\nOuput= %d",maxAlphaValue(s,n));
    return 0;
}
