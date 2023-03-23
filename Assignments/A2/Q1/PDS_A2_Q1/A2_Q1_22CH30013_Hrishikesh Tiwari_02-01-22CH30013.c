#include<stdio.h>
int main(_)
{
int n,s1,s2,s3;

printf("PLEASE ENTER AN INTEGER\n");
scanf("%d",&n);
s1=(n*(n+1))/2;
s2=(n*(n+1)*((2*n)+1))/2;
s3=(n/100)+((n%100)/10)+((n%100)%10);
printf("the value of s1=%d , the value of s2 is =%d and the value of s3 is %d",s1,s2,s3);

return 0;
}


