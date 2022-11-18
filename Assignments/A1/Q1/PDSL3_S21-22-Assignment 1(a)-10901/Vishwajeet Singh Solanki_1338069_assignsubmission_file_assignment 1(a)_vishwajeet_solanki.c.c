/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(a)
*/
#include<stdio.h>
#include<math.h>

int main(){
    int a,t,u,alpha,d;
    printf("Enter the value of a,u,alpha in order:");
    scanf("%f%f%f",&a,&u,&alpha);
    printf("Enter the time:");
    scanf("%f",&t);
d= a+(u*t)+(0.50*a*t*t);
printf("Distance=%f",d);
return 0;
}
