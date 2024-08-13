#include <stdio.h>
int main(){
int i,s1,s2,s3,ih,it,io;
printf("Enter an integer");
scanf("%d",&i);
s1=(i*(i+1))/2;
s2=(i*(i+1)*(2*i+1))/6;
ih=i/100;
it=(i-(ih*100))/10;
io=i%10;
s3=ih+it+io;/*sum of digits of n*/
 printf("value of s1 is %d",s1);
 printf("value of s2 is %d",s2);
 printf("value of s3 is %d",s3);
 return 0;
 }	 
