//code creator: M .Yasaswitha
//roll no:24NA10037
#include<stdio.h>
void coprime(int a,int b);
int gcd(int a,int b)
if (a>b) {
int temp=a;a=b;b=temp;
}
while (b%a!=o) {
temp =b%a;b=a; a=temp;
}
return a;
}
void pair(int a[]);
int main()
{
int a[5];
printf("enter");
scanf("%d",&a[]);
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
if (gcd(a[i],a[j]==1){
printf("a[%d] and a[%d] are co primes",i,j);
}
else 
printf("a[%d] and a[%d] are not co primes",i,j);
}
}
return 0;
}
