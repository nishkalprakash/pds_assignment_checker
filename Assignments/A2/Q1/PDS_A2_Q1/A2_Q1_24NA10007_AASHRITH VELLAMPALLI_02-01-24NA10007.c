// to read an integer and computing s1,s2,s3 till that integer 
// aashrith vellampalli
//24NA10007
#include<stdio.h>
 int main() {
 int n,s1,s2,s3;
 printf("enter a 3 digit number\n");
 scanf("%d", &n);//getting number from user
 s1 = n*(n+1)/2;// sum of n natural numbers
 s2= n*(n+1)*(2*n+1)/6;// sum of squares of first n natural numbers
 s3= (n/100) + (n%10) + (n%100-n%10)/10;// first term gives hundredth place digit, 2nd term gives ones place digit,3rd gives tens place digit
 printf("s1=%d\n",s1);
 printf("s2=%d\n",s2);
 printf("s3=%d\n",s3);
 return(0);
 }
 
