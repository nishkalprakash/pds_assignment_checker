#include<stdio.h>
int main(){
int n,s1,s2,s3;
printf("give a number n : ");
scanf("%d" , &n);
s1=n*(n+1)/2;
s2=n*(n+1)*(2*n+1)/6;
s3=n/100 + n/10 -(n/100)*10 + n - (n/10)*10;
printf("the value of s1 , s2 , s3 is \n%d\n%d\n%d" , s1,s2,s3);

return 0;
}
