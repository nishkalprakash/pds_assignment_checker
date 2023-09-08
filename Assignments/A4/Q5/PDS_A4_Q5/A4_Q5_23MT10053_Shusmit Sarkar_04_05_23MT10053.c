#include<stdio.h>
int main(){
int n;
printf("Enter the number ");
scanf("%d",&n);
int s=0;
int d=0;
int min = 10;
int max = -1;
while(n!=0){
d = n%10;
s = s+d;
n = n/10;
if (min > d) min = d;
if (max < d) max = d;
}
printf("Sum of digits = %d\n",s);
printf("Maximium digit = %d\n",max);
printf("Minimum digit = %d\n",min);
return 0;
}
