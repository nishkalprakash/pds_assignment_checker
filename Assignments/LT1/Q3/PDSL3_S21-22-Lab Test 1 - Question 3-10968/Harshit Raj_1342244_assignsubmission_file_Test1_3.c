/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
srand(time(0));
int num1=(rand() % (1000-5+1)) + 5;
int num2=(rand() % (1000-5+1)) + 5;
int count1=0, count2=0, n, sum1, p, sum2, q;
printf("enter number of rounds: \n");
scanf("%d", &n);

for(int i=1; i<=n; i++){
    printf("round %d : A's number is: %d           round %d : B's number is: %d \n", i, num1, i, num2);
do {
    num1=num1/10;
    count1++;
  } while (count1!=0);

do {
    num2=num2/10;
    count2++;
  } while (count2!=0);

  if(count1!=count2){
    printf("A's point: %d \t B's point: %d", count1, count2);
  }
else if(count1==count2){
while(count1>0)
{
p=count1%10;
sum1=sum1+p;
count1=count1/10;
}
while(count2>0)
{
q=count2%10;
sum2=sum2+q;
count2=count2/10;
}
printf("A's point: %d \t B's point: %d", count1, count2);

}

}











return 0;
}

