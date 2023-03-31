/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
Assignment No. 4

Description to print the pattern
*/
#include<stdio.h>
int main(){
printf("Enter the number of rows: ");
int n;//n s the no. of rows
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");//there are n-i space where i is row no.
    }
    for(int j=i;j<=2*i-1;j++){
        printf("%d",j%10);//1st no. in each row is its row no..reason why I am using j%10 is down
    }
    for(int j=2*i-2;j>=i;j--){
        printf("%d",j%10);//decreasing the value of j
    }
    printf("\n");
}
}
/* As each row starts with i the moment j's value is more than 9 then its like we start with 0,
its like the fact that we are printing the remainder instead and then again decreasing when 2nd loop is done then we start decreasing j and until 3rd loops condition is also wrong */

