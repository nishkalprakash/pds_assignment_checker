/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(b)
*/
#include<stdio.h>

int main(){
    int n,r,k =0;
    printf("Enter the integer:");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        k=k*10 + r ;
        n/=10;
    }

printf("Reverse number = %d",k);

return 0;

}
