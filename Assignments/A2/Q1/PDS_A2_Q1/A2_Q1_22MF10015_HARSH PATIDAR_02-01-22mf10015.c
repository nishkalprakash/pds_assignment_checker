
#include<stdio.h>
int main(){
    int s1,s2,s3; //variable define
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    s1=(n*(n+1))/2;  //formula of n natural number=(n*(n+1))/2
    s2=(n*(n+1)*(2*n+1))/6 ;//

    int a,b,c;
    a=n/100;
    b=(n%100)/10;
    c=(n%100)%10;

    s3= a+b+c;
    printf("the value of s1,s2,s3 is %d,\n", s1); // output of the function
printf("the value of s2, is %d\n", s2);
printf("the value of s3 is%d\n",s3);
return 0;
}
