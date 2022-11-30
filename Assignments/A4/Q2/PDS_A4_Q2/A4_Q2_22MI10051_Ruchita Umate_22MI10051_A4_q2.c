#include<stdio.h>

int main(){
int  num,sum,d;
printf("Enter any integer:");
scanf("%d",&num);
sum=0;
while(num!=0){
d=num%10;
sum=sum+d;
num=num/10;
}
printf("%d",sum);
return 0;
}
