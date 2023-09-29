//Name - Ishansh Yadav
//Roll No. - 23BT10015

#include<stdio.h>
#include<math.h>

int main()
{ long int n, sum1;
  long int sum=0, i;
  printf("Enter a positive integer less than 9999\n");
  scanf("%ld", &n);
  //Part a
  if(n<10) printf("%ld\n", n+1);
  if((n>=10)&&(n<100)) printf("%ld\n",n=n+11);
  if((n>=100)&&(n<1000)) printf("%ld\n", n=n+111);
  if((n>=1000)&&(n<=9999)) printf("%ld\n",n=n+1111);
  //Part b
  long int number=n,ten=100,num;
  for(i=0;number>=1;i++)
    {sum=sum + number%10;
     number = number/10;}
  for(i=3;n>=1;i++)
    {num=n%10;
     sum1=sum + num*ten;
     n=n/10;
     ten=ten*10;
     }
  printf("%ld\n", sum1);
  return 0;}
