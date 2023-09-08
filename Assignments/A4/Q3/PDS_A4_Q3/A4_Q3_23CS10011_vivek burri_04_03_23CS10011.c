// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<math.h>
int main(){
  int n,j,k=10,b=0,a=10,c=0;
  scanf("%d",&n);
  while (j>0){
    j=n/k;
    b++;}
  k=pow(10,b-1);
  b=n;
  k=k/10;
  while (b>0){
    printf("\n%d",a);
    j=b%a;
    c=c+(k*j);
    b=b/k;
    a*=10;
    k/=10;
  }
  if (n==c)
    printf(" it is a palindrome");
  else
    printf("not a palindrome");
  return 0;
}
