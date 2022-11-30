/*section-14
name-gaurav meeena
roll no-22CE10025
description-sum of digits
*/

#include<stdio.h>

int main(){
int a;

printf("enter number a");
scanf("%d",&a);

int i=a;
int sum=0;
int r=0;
while(i!=0)

{  
  r=i%10;
sum=sum+r;
i=i/10;
}
printf("sum is %d",sum);
return 0;
}
