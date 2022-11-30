/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 4
Description : To print pattern
*/
#include<stdio.h>
int main(){
printf("Enter number:");
int n ;
scanf("%d",&n);
int i = 1 ;
//int p = 1 ;
while(i <= n ){
int p = 1 ;
while(p <= i ) {
if (p % 2 == 0 ) {
printf("0 ");
}
else {
printf("1 ");
}

p = p + 1 ;
}printf("\n");
i = i + 1;
}

return 0;
}
