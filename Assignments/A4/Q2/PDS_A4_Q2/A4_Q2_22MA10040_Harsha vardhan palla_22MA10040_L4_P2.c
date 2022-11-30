/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:2program:sum of the digits*/
#include<stdio.h>
int main()

{

long int num1;

int sum=0,d,m;

scanf("%li",&num1);

if(num1>=0){

m=num1;
}
else

m=-num1;

while(m!=0)

{

d=m%10;

sum=sum+d;

m=m/10;}

printf("Sum of digits=%d",sum);

return 0;

}
