//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(0));
  int i, a, sum, lsum=36,l;
  for (i=0;i<20;i++){
    a=rand()%1000+5001;
    printf("\n%d.Random No. %d",i+1,a);
    sum=a%10+(a/10)%10+(a/100)%10+(a/1000)%10;
    printf(" and sum of its digits is %d",sum);
    if (sum<lsum){
      lsum=sum;
      l=a;
    }
  }
  printf("\n\nThe no. having least sum of digits is %d",l);
  return 0;
}
