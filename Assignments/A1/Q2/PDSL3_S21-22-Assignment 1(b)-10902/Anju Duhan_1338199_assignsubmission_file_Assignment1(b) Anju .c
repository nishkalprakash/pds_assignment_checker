#include<stdio.h>
int main()
{
int n;
printf("Enter a 3 digit Number= ");
scanf("%d",&n);
int i1=n/100;
int i2=(n%100)/10;
int i3=(n%10);
int rev_num=i3*100+i2*10+i1;
printf("reverse of number is %d", rev_num);
return 0;
}
